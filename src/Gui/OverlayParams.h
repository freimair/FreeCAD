/****************************************************************************
 *   Copyright (c) 2022 Zheng Lei (realthunder) <realthunder.dev@gmail.com> *
 *                                                                          *
 *   This file is part of the FreeCAD CAx development system.               *
 *                                                                          *
 *   This library is free software; you can redistribute it and/or          *
 *   modify it under the terms of the GNU Library General Public            *
 *   License as published by the Free Software Foundation; either           *
 *   version 2 of the License, or (at your option) any later version.       *
 *                                                                          *
 *   This library  is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of         *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the          *
 *   GNU Library General Public License for more details.                   *
 *                                                                          *
 *   You should have received a copy of the GNU Library General Public      *
 *   License along with this library; see the file COPYING.LIB. If not,     *
 *   write to the Free Software Foundation, Inc., 59 Temple Place,          *
 *   Suite 330, Boston, MA  02111-1307, USA                                 *
 *                                                                          *
 ****************************************************************************/

#ifndef GUI_OVERLAY_PARAMS_H
#define GUI_OVERLAY_PARAMS_H

/*[[[cog
import OverlayParams
OverlayParams.declare()
]]]*/

// Auto generated code (Gui/OverlayParams.py:139)
#include <QString>

// Auto generated code (Tools/params_utils.py:72)
#include <Base/Parameter.h>


// Auto generated code (Tools/params_utils.py:78)
namespace Gui {
/** Convenient class to obtain overlay widgets related parameters

 * The parameters are under group "User parameter:BaseApp/Preferences/View"
 *
 * This class is auto generated by Gui/OverlayParams.py. Modify that file
 * instead of this one, if you want to add any parameter. You need
 * to install Cog Python package for code generation:
 * @code
 *     pip install cogapp
 * @endcode
 *
 * Once modified, you can regenerate the header and the source file,
 * @code
 *     python3 -m cogapp -r Gui/OverlayParams.h Gui/OverlayParams.cpp
 * @endcode
 *
 * You can add a new parameter by adding lines in Gui/OverlayParams.py. Available
 * parameter types are 'Int, UInt, String, Bool, Float'. For example, to add
 * a new Int type parameter,
 * @code
 *     ParamInt(parameter_name, default_value, documentation, on_change=False)
 * @endcode
 *
 * If there is special handling on parameter change, pass in on_change=True.
 * And you need to provide a function implementation in Gui/OverlayParams.cpp with
 * the following signature.
 * @code
 *     void OverlayParams:on<parameter_name>Changed()
 * @endcode
 */
class GuiExport OverlayParams {
public:
    static ParameterGrp::handle getHandle();

    // Auto generated code (Tools/params_utils.py:122)
    //@{
    /// Accessor for parameter CornerNaviCube
    static const long & getCornerNaviCube();
    static const long & defaultCornerNaviCube();
    static void removeCornerNaviCube();
    static void setCornerNaviCube(const long &v);
    static const char *docCornerNaviCube();
    static void onCornerNaviCubeChanged();
    //@}

    // Auto generated code (Tools/params_utils.py:122)
    //@{
    /// Accessor for parameter DockOverlayAutoView
    static const bool & getDockOverlayAutoView();
    static const bool & defaultDockOverlayAutoView();
    static void removeDockOverlayAutoView();
    static void setDockOverlayAutoView(const bool &v);
    static const char *docDockOverlayAutoView();
    static void onDockOverlayAutoViewChanged();
    //@}

    // Auto generated code (Tools/params_utils.py:122)
    //@{
    /// Accessor for parameter DockOverlayDelay
    ///
    /// Overlay dock (re),layout delay.
    static const long & getDockOverlayDelay();
    static const long & defaultDockOverlayDelay();
    static void removeDockOverlayDelay();
    static void setDockOverlayDelay(const long &v);
    static const char *docDockOverlayDelay();
    //@}

    // Auto generated code (Tools/params_utils.py:122)
    //@{
    /// Accessor for parameter DockOverlayRevealDelay
    static const long & getDockOverlayRevealDelay();
    static const long & defaultDockOverlayRevealDelay();
    static void removeDockOverlayRevealDelay();
    static void setDockOverlayRevealDelay(const long &v);
    static const char *docDockOverlayRevealDelay();
    //@}

    // Auto generated code (Tools/params_utils.py:122)
    //@{
    /// Accessor for parameter DockOverlaySplitterHandleTimeout
    ///
    /// Overlay splitter handle auto hide delay. Set zero to disable auto hiding.
    static const long & getDockOverlaySplitterHandleTimeout();
    static const long & defaultDockOverlaySplitterHandleTimeout();
    static void removeDockOverlaySplitterHandleTimeout();
    static void setDockOverlaySplitterHandleTimeout(const long &v);
    static const char *docDockOverlaySplitterHandleTimeout();
    //@}

    // Auto generated code (Tools/params_utils.py:122)
    //@{
    /// Accessor for parameter DockOverlayActivateOnHover
    ///
    /// Show auto hidden dock overlay on mouse over.
    /// If disabled, then show on mouse click.
    static const bool & getDockOverlayActivateOnHover();
    static const bool & defaultDockOverlayActivateOnHover();
    static void removeDockOverlayActivateOnHover();
    static void setDockOverlayActivateOnHover(const bool &v);
    static const char *docDockOverlayActivateOnHover();
    //@}

    // Auto generated code (Tools/params_utils.py:122)
    //@{
    /// Accessor for parameter DockOverlayAutoMouseThrough
    ///
    /// Auto mouse click through transparent part of dock overlay.
    static const bool & getDockOverlayAutoMouseThrough();
    static const bool & defaultDockOverlayAutoMouseThrough();
    static void removeDockOverlayAutoMouseThrough();
    static void setDockOverlayAutoMouseThrough(const bool &v);
    static const char *docDockOverlayAutoMouseThrough();
    //@}

    // Auto generated code (Tools/params_utils.py:122)
    //@{
    /// Accessor for parameter DockOverlayWheelPassThrough
    ///
    /// Auto pass through mouse wheel event on transparent dock overlay.
    static const bool & getDockOverlayWheelPassThrough();
    static const bool & defaultDockOverlayWheelPassThrough();
    static void removeDockOverlayWheelPassThrough();
    static void setDockOverlayWheelPassThrough(const bool &v);
    static const char *docDockOverlayWheelPassThrough();
    //@}

    // Auto generated code (Tools/params_utils.py:122)
    //@{
    /// Accessor for parameter DockOverlayWheelDelay
    ///
    /// Delay capturing mouse wheel event for passing through if it is
    /// previously handled by other widget.
    static const long & getDockOverlayWheelDelay();
    static const long & defaultDockOverlayWheelDelay();
    static void removeDockOverlayWheelDelay();
    static void setDockOverlayWheelDelay(const long &v);
    static const char *docDockOverlayWheelDelay();
    //@}

    // Auto generated code (Tools/params_utils.py:122)
    //@{
    /// Accessor for parameter DockOverlayAlphaRadius
    ///
    /// If auto mouse click through is enabled, then this radius
    /// defines a region of alpha test under the mouse cursor.
    /// Auto click through is only activated if all pixels within
    /// the region are non-opaque.
    static const long & getDockOverlayAlphaRadius();
    static const long & defaultDockOverlayAlphaRadius();
    static void removeDockOverlayAlphaRadius();
    static void setDockOverlayAlphaRadius(const long &v);
    static const char *docDockOverlayAlphaRadius();
    //@}

    // Auto generated code (Tools/params_utils.py:122)
    //@{
    /// Accessor for parameter DockOverlayCheckNaviCube
    ///
    /// Leave space for Navigation Cube in dock overlay
    static const bool & getDockOverlayCheckNaviCube();
    static const bool & defaultDockOverlayCheckNaviCube();
    static void removeDockOverlayCheckNaviCube();
    static void setDockOverlayCheckNaviCube(const bool &v);
    static const char *docDockOverlayCheckNaviCube();
    static void onDockOverlayCheckNaviCubeChanged();
    //@}

    // Auto generated code (Tools/params_utils.py:122)
    //@{
    /// Accessor for parameter DockOverlayHintTriggerSize
    ///
    /// Auto hide hint visual display triggering width
    static const long & getDockOverlayHintTriggerSize();
    static const long & defaultDockOverlayHintTriggerSize();
    static void removeDockOverlayHintTriggerSize();
    static void setDockOverlayHintTriggerSize(const long &v);
    static const char *docDockOverlayHintTriggerSize();
    //@}

    // Auto generated code (Tools/params_utils.py:122)
    //@{
    /// Accessor for parameter DockOverlayHintSize
    ///
    /// Auto hide hint visual display size
    static const long & getDockOverlayHintSize();
    static const long & defaultDockOverlayHintSize();
    static void removeDockOverlayHintSize();
    static void setDockOverlayHintSize(const long &v);
    static const char *docDockOverlayHintSize();
    //@}

    // Auto generated code (Tools/params_utils.py:122)
    //@{
    /// Accessor for parameter DockOverlayHintTabBar
    ///
    /// Show tab bar on mouse over when auto hide
    static const bool & getDockOverlayHintTabBar();
    static const bool & defaultDockOverlayHintTabBar();
    static void removeDockOverlayHintTabBar();
    static void setDockOverlayHintTabBar(const bool &v);
    static const char *docDockOverlayHintTabBar();
    //@}

    // Auto generated code (Tools/params_utils.py:122)
    //@{
    /// Accessor for parameter DockOverlayHideTabBar
    ///
    /// Hide tab bar in dock overlay
    static const bool & getDockOverlayHideTabBar();
    static const bool & defaultDockOverlayHideTabBar();
    static void removeDockOverlayHideTabBar();
    static void setDockOverlayHideTabBar(const bool &v);
    static const char *docDockOverlayHideTabBar();
    static void onDockOverlayHideTabBarChanged();
    //@}

    // Auto generated code (Tools/params_utils.py:122)
    //@{
    /// Accessor for parameter DockOverlayHintDelay
    ///
    /// Delay before show hint visual
    static const long & getDockOverlayHintDelay();
    static const long & defaultDockOverlayHintDelay();
    static void removeDockOverlayHintDelay();
    static void setDockOverlayHintDelay(const long &v);
    static const char *docDockOverlayHintDelay();
    //@}

    // Auto generated code (Tools/params_utils.py:122)
    //@{
    /// Accessor for parameter DockOverlayAnimationDuration
    ///
    /// Auto hide animation duration, 0 to disable
    static const long & getDockOverlayAnimationDuration();
    static const long & defaultDockOverlayAnimationDuration();
    static void removeDockOverlayAnimationDuration();
    static void setDockOverlayAnimationDuration(const long &v);
    static const char *docDockOverlayAnimationDuration();
    //@}

    // Auto generated code (Tools/params_utils.py:122)
    //@{
    /// Accessor for parameter DockOverlayAnimationCurve
    ///
    /// Auto hide animation curve type
    static const long & getDockOverlayAnimationCurve();
    static const long & defaultDockOverlayAnimationCurve();
    static void removeDockOverlayAnimationCurve();
    static void setDockOverlayAnimationCurve(const long &v);
    static const char *docDockOverlayAnimationCurve();
    //@}

    // Auto generated code (Tools/params_utils.py:122)
    //@{
    /// Accessor for parameter DockOverlayHidePropertyViewScrollBar
    ///
    /// Hide property view scroll bar in dock overlay
    static const bool & getDockOverlayHidePropertyViewScrollBar();
    static const bool & defaultDockOverlayHidePropertyViewScrollBar();
    static void removeDockOverlayHidePropertyViewScrollBar();
    static void setDockOverlayHidePropertyViewScrollBar(const bool &v);
    static const char *docDockOverlayHidePropertyViewScrollBar();
    //@}

    // Auto generated code (Gui/OverlayParams.py:145)
    static const std::vector<QString> AnimationCurveTypes;

// Auto generated code (Tools/params_utils.py:150)
}; // class OverlayParams
} // namespace Gui
//[[[end]]]

#endif // GUI_OVERLAY_PARAMS_H
