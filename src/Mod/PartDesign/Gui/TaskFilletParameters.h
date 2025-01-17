/***************************************************************************
 *   Copyright (c) 2011 Juergen Riegel <FreeCAD@juergen-riegel.net>        *
 *                                                                         *
 *   This file is part of the FreeCAD CAx development system.              *
 *                                                                         *
 *   This library is free software; you can redistribute it and/or         *
 *   modify it under the terms of the GNU Library General Public           *
 *   License as published by the Free Software Foundation; either          *
 *   version 2 of the License, or (at your option) any later version.      *
 *                                                                         *
 *   This library  is distributed in the hope that it will be useful,      *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU Library General Public License for more details.                  *
 *                                                                         *
 *   You should have received a copy of the GNU Library General Public     *
 *   License along with this library; see the file COPYING.LIB. If not,    *
 *   write to the Free Software Foundation, Inc., 59 Temple Place,         *
 *   Suite 330, Boston, MA  02111-1307, USA                                *
 *                                                                         *
 ***************************************************************************/


#ifndef GUI_TASKVIEW_TaskFilletParameters_H
#define GUI_TASKVIEW_TaskFilletParameters_H

#include <QStandardItemModel>
#include <QItemDelegate>

#include "TaskDressUpParameters.h"
#include "ViewProviderFillet.h"

class Ui_TaskFilletParameters;

namespace Gui {
class ExpressionBinding;
}

namespace PartDesignGui {

class FilletSegmentDelegate : public QItemDelegate
{
    Q_OBJECT

public:
    FilletSegmentDelegate(QObject *parent = 0);

    QWidget *createEditor(QWidget *parent, const QStyleOptionViewItem &option,
                          const QModelIndex &index) const;

    void setEditorData(QWidget *editor, const QModelIndex &index) const;
    void setModelData(QWidget *editor, QAbstractItemModel *model,
                      const QModelIndex &index) const;
};

class TaskFilletParameters : public TaskDressUpParameters
{
    Q_OBJECT

public:
    TaskFilletParameters(ViewProviderDressUp *DressUpView, QWidget *parent=0);
    ~TaskFilletParameters();

    virtual void apply();
    void setBinding(Gui::ExpressionBinding *binding, const QModelIndex &index);

private Q_SLOTS:
    void onLengthChanged(double);

protected:
    double getRadius() const;
    void changeEvent(QEvent *e);
    virtual void refresh();
    void removeSegments();
    void clearSegments();
    void newSegment(int editColumn=0);
    void updateSegments(QTreeWidgetItem *);
    void updateSegment(QTreeWidgetItem *, int column);
    void setSegment(QTreeWidgetItem *item, double param, double radius, double length=0.0);
    void onNewItem(QTreeWidgetItem *item);
    virtual void onRefDeleted();

    friend class FilletSegmentDelegate;

private:
    std::unique_ptr<Ui_TaskFilletParameters> ui;
};

/// simulation dialog for the TaskView
class TaskDlgFilletParameters : public TaskDlgDressUpParameters
{
    Q_OBJECT

public:
    TaskDlgFilletParameters(ViewProviderFillet *DressUpView);
    ~TaskDlgFilletParameters();

public:
    /// is called by the framework if the dialog is accepted (Ok)
    virtual bool accept();
};

} //namespace PartDesignGui

#endif // GUI_TASKVIEW_TaskFilletParameters_H
