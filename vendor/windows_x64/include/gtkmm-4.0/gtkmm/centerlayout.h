// Generated by gmmproc 2.78.1 -- DO NOT MODIFY!
#ifndef _GTKMM_CENTERLAYOUT_H
#define _GTKMM_CENTERLAYOUT_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright (C) 2019 The gtkmm Development Team
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library. If not, see <http://www.gnu.org/licenses/>.
 */

#include <gtkmm/layoutmanager.h>
#include <gtkmm/enums.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class GTKMM_API CenterLayout_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{
class GTKMM_API Widget;

/** A centering layout.
 *
 * A %Gtk::CenterLayout is a layout manager that manages up to three children.
 * The start widget is allocated at the start of the layout (left in LRT
 * layouts and right in RTL ones), and the end widget at the end.
 *
 * The center widget is centered regarding the full width of the layout.
 *
 * @newin{3,96}
 */

class GTKMM_API CenterLayout : public LayoutManager
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  using CppObjectType = CenterLayout;
  using CppClassType = CenterLayout_Class;
  using BaseObjectType = GtkCenterLayout;
  using BaseClassType = GtkCenterLayoutClass;

  // noncopyable
  CenterLayout(const CenterLayout&) = delete;
  CenterLayout& operator=(const CenterLayout&) = delete;

private:  friend class CenterLayout_Class;
  static CppClassType centerlayout_class_;

protected:
  explicit CenterLayout(const Glib::ConstructParams& construct_params);
  explicit CenterLayout(GtkCenterLayout* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  CenterLayout(CenterLayout&& src) noexcept;
  CenterLayout& operator=(CenterLayout&& src) noexcept;

  ~CenterLayout() noexcept override;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GtkCenterLayout*       gobj()       { return reinterpret_cast<GtkCenterLayout*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GtkCenterLayout* gobj() const { return reinterpret_cast<GtkCenterLayout*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GtkCenterLayout* gobj_copy();

private:

        
protected:
  CenterLayout();

public:
  
  static Glib::RefPtr<CenterLayout> create();


  /** Sets the orientation of @a self.
   * 
   * @param orientation The new orientation.
   */
  void set_orientation(Orientation orientation);
  
  /** Gets the current orienration of the layout manager.
   * 
   * @return The current orientation of @a self.
   */
  Orientation get_orientation() const;

  
  /** Sets the new baseline position of @a self
   * 
   * @param baseline_position The new baseline position.
   */
  void set_baseline_position(BaselinePosition baseline_position);
  
  /** Returns the baseline position of the layout.
   * 
   * @return The current baseline position of @a self.
   */
  BaselinePosition get_baseline_position() const;

  
  /** Sets the new start widget of @a self.
   * 
   * To remove the existing start widget, pass <tt>nullptr</tt>.
   * 
   * @param widget The new start widget.
   */
  void set_start_widget(Widget* widget);
  
  /** Returns the start widget of the layout.
   * 
   * @return The current start widget of @a self.
   */
  Widget* get_start_widget();
  
  /** Returns the start widget of the layout.
   * 
   * @return The current start widget of @a self.
   */
  const Widget* get_start_widget() const;

  
  /** Sets the new center widget of @a self.
   * 
   * To remove the existing center widget, pass <tt>nullptr</tt>.
   * 
   * @param widget The new center widget.
   */
  void set_center_widget(Widget* widget);
  
  /** Returns the center widget of the layout.
   * 
   * @return The current center widget of @a self.
   */
  Widget* get_center_widget();
  
  /** Returns the center widget of the layout.
   * 
   * @return The current center widget of @a self.
   */
  const Widget* get_center_widget() const;

  
  /** Sets the new end widget of @a self.
   * 
   * To remove the existing center widget, pass <tt>nullptr</tt>.
   * 
   * @param widget The new end widget.
   */
  void set_end_widget(Widget* widget);
  
  /** Returns the end widget of the layout.
   * 
   * @return The current end widget of @a self.
   */
  Widget* get_end_widget();
  
  /** Returns the end widget of the layout.
   * 
   * @return The current end widget of @a self.
   */
  const Widget* get_end_widget() const;

  
  /** Sets whether to shrink the center widget after other children.
   * 
   * By default, when there's no space to give all three children their
   * natural widths, the start and end widgets start shrinking and the
   * center child keeps natural width until they reach minimum width.
   * 
   * If set to <tt>false</tt>, start and end widgets keep natural width and the
   * center widget starts shrinking instead.
   * 
   * @newin{4,12}
   * 
   * @param shrink_center_last Whether to shrink the center widget after others.
   */
  void set_shrink_center_last(bool shrink_center_last =  true);
  
  /** Gets whether @a self shrinks the center widget after other children.
   * 
   * @newin{4,12}
   * 
   * @return Whether to shrink the center widget after others.
   */
  bool get_shrink_center_last() const;

  /** Whether to shrink the center widget after other children.
   * 
   * By default, when there's no space to give all three children their
   * natural widths, the start and end widgets start shrinking and the
   * center child keeps natural width until they reach minimum width.
   * 
   * If set to <tt>false</tt>, start and end widgets keep natural width and the
   * center widget starts shrinking instead.
   * 
   * @newin{4,12}
   *
   * Default value: <tt>true</tt>
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_shrink_center_last() ;

/** Whether to shrink the center widget after other children.
   * 
   * By default, when there's no space to give all three children their
   * natural widths, the start and end widgets start shrinking and the
   * center child keeps natural width until they reach minimum width.
   * 
   * If set to <tt>false</tt>, start and end widgets keep natural width and the
   * center widget starts shrinking instead.
   * 
   * @newin{4,12}
   *
   * Default value: <tt>true</tt>
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_shrink_center_last() const;


  // There are no signals or vfuncs.


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


};

} // namespace Gtk


namespace Glib
{
  /** A Glib::wrap() method for this object.
   *
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gtk::CenterLayout
   */
  GTKMM_API
  Glib::RefPtr<Gtk::CenterLayout> wrap(GtkCenterLayout* object, bool take_copy = false);
}


#endif /* _GTKMM_CENTERLAYOUT_H */
