// Generated by gmmproc 2.78.1 -- DO NOT MODIFY!
#ifndef _GTKMM_POPOVERMENUBAR_H
#define _GTKMM_POPOVERMENUBAR_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright (C) 2020 The gtkmm Development Team
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

#include <gtkmm/widget.h>
#include <giomm/menumodel.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GtkPopoverMenuBar = struct _GtkPopoverMenuBar;
using GtkPopoverMenuBarClass = struct _GtkPopoverMenuBarClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class GTKMM_API PopoverMenuBar_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{
/** A menu bar with popovers.
 *
 * %Gtk::PopoverMenuBar presents a horizontal bar of items that pop
 * up popover menus when clicked.
 *
 * The only way to create instances of %PopoverMenuBar is from a Gio::MenuModel.
 *
 * @see Popover, PopoverMenu, Gio::MenuModel
 *
 * @newin{3,96}
 *
 * @ingroup Widgets
 * @ingroup Containers
 * @ingroup Menus
 */

class GTKMM_API PopoverMenuBar : public Widget
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef PopoverMenuBar CppObjectType;
  typedef PopoverMenuBar_Class CppClassType;
  typedef GtkPopoverMenuBar BaseObjectType;
  typedef GtkPopoverMenuBarClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  PopoverMenuBar(PopoverMenuBar&& src) noexcept;
  PopoverMenuBar& operator=(PopoverMenuBar&& src) noexcept;

  // noncopyable
  PopoverMenuBar(const PopoverMenuBar&) = delete;
  PopoverMenuBar& operator=(const PopoverMenuBar&) = delete;

  ~PopoverMenuBar() noexcept override;

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend GTKMM_API class PopoverMenuBar_Class;
  static CppClassType popovermenubar_class_;

protected:
  explicit PopoverMenuBar(const Glib::ConstructParams& construct_params);
  explicit PopoverMenuBar(GtkPopoverMenuBar* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  /// Provides access to the underlying C GObject.
  GtkPopoverMenuBar*       gobj()       { return reinterpret_cast<GtkPopoverMenuBar*>(gobject_); }

  /// Provides access to the underlying C GObject.
  const GtkPopoverMenuBar* gobj() const { return reinterpret_cast<GtkPopoverMenuBar*>(gobject_); }

private:


public:
    explicit PopoverMenuBar(const Glib::RefPtr<Gio::MenuModel>& menu_model =  {});


  /** Sets a menu model from which @a bar should take
   * its contents.
   * 
   * @param model A `Gio::MenuModel`.
   */
  void set_menu_model(const Glib::RefPtr<Gio::MenuModel>& model);
  
  /** Returns the model from which the contents of @a bar are taken.
   * 
   * @return A `Gio::MenuModel`.
   */
  Glib::RefPtr<Gio::MenuModel> get_menu_model();
  
  /** Returns the model from which the contents of @a bar are taken.
   * 
   * @return A `Gio::MenuModel`.
   */
  Glib::RefPtr<const Gio::MenuModel> get_menu_model() const;

  
  /** Adds a custom widget to a generated menubar.
   * 
   * For this to work, the menu model of @a bar must have an
   * item with a `custom` attribute that matches @a id.
   * 
   * @param child The `Gtk::Widget` to add.
   * @param id The ID to insert @a child at.
   * @return <tt>true</tt> if @a id was found and the widget added.
   */
  bool add_child(Widget& child, const Glib::ustring& id);
  
  /** Removes a widget that has previously been added with
   * add_child().
   * 
   * @param child The `Gtk::Widget` to remove.
   * @return <tt>true</tt> if the widget was removed.
   */
  bool remove_child(Widget& child);

  /** The `Gio::MenuModel` from which the menu bar is created.
   * 
   * The model should only contain submenus as toplevel elements.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::RefPtr<Gio::MenuModel> > property_menu_model() ;

/** The `Gio::MenuModel` from which the menu bar is created.
   * 
   * The model should only contain submenus as toplevel elements.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gio::MenuModel> > property_menu_model() const;


  // PopoverMenuBar has no signals nor vfuncs.


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


};

} //namespace Gtk


namespace Glib
{
  /** A Glib::wrap() method for this object.
   *
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gtk::PopoverMenuBar
   */
  GTKMM_API
  Gtk::PopoverMenuBar* wrap(GtkPopoverMenuBar* object, bool take_copy = false);
} //namespace Glib


#endif /* _GTKMM_POPOVERMENUBAR_H */
