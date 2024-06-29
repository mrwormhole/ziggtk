// Generated by gmmproc 2.78.1 -- DO NOT MODIFY!
#ifndef _GTKMM_SEARCHBAR_H
#define _GTKMM_SEARCHBAR_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/*
 * Copyright (C) 2013 The gtkmm Development Team
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
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#include <gtkmm/widget.h>
#include <gtkmm/editable.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GtkSearchBar = struct _GtkSearchBar;
using GtkSearchBarClass = struct _GtkSearchBarClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class GTKMM_API SearchBar_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{

/** A toolbar to integrate a search entry with.
 *
 * %Gtk::SearchBar is a container made to have a search entry (possibly
 * with additional connex widgets, such as drop-down menus, or buttons)
 * built-in. The search bar would appear when a search is started through
 * typing on the keyboard, or the application's search mode is toggled on.
 *
 * For keyboard presses to start a search, the search bar must be told
 * of a widget to capture key events from through
 * set_key_capture_widget(). This widget will typically
 * be the top-level window, or a parent container of the search bar. Common
 * shortcuts such as Ctrl+F should be handled as an application action, or
 * through the menu items.
 *
 * You will also need to tell the search bar about which entry you
 * are using as your search entry using connect_entry().
 *
 * @ingroup Widgets
 * @newin{3,10}
 */

class GTKMM_API SearchBar
  : public Widget
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef SearchBar CppObjectType;
  typedef SearchBar_Class CppClassType;
  typedef GtkSearchBar BaseObjectType;
  typedef GtkSearchBarClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  SearchBar(SearchBar&& src) noexcept;
  SearchBar& operator=(SearchBar&& src) noexcept;

  // noncopyable
  SearchBar(const SearchBar&) = delete;
  SearchBar& operator=(const SearchBar&) = delete;

  ~SearchBar() noexcept override;

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend GTKMM_API class SearchBar_Class;
  static CppClassType searchbar_class_;

protected:
  explicit SearchBar(const Glib::ConstructParams& construct_params);
  explicit SearchBar(GtkSearchBar* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  /// Provides access to the underlying C GObject.
  GtkSearchBar*       gobj()       { return reinterpret_cast<GtkSearchBar*>(gobject_); }

  /// Provides access to the underlying C GObject.
  const GtkSearchBar* gobj() const { return reinterpret_cast<GtkSearchBar*>(gobject_); }

private:

public:

  /** Creates a Gtk::SearchBar.
   *
   * You will need to tell it about which widget is going to be your
   * text entry using Gtk::SearchBar::connect_entry().
   */
  SearchBar();

  
  /** Connects the `Gtk::Editable` widget passed as the one to be used in
   * this search bar.
   * 
   * The entry should be a descendant of the search bar. Calling this
   * function manually is only required if the entry isn’t the direct
   * child of the search bar (as in our main example).
   * 
   * @param entry A `Gtk::Editable`.
   */
  void connect_entry(Editable& entry);

  
  /** Returns whether the search mode is on or off.
   * 
   * @return Whether search mode is toggled on.
   */
  bool get_search_mode() const;
  
  /** Switches the search mode on or off.
   * 
   * @param search_mode The new state of the search mode.
   */
  void set_search_mode(bool search_mode = true);

  
  /** Returns whether the close button is shown.
   * 
   * @return Whether the close button is shown.
   */
  bool get_show_close_button() const;
  
  /** Shows or hides the close button.
   * 
   * Applications that already have a “search” toggle button should not
   * show a close button in their search bar, as it duplicates the role
   * of the toggle button.
   * 
   * @param visible Whether the close button will be shown or not.
   */
  void set_show_close_button(bool visible = true);

  
  /** Sets @a widget as the widget that @a bar will capture key events
   * from.
   * 
   * If key events are handled by the search bar, the bar will
   * be shown, and the entry populated with the entered text.
   * 
   * Note that despite the name of this function, the events
   * are only 'captured' in the bubble phase, which means that
   * editable child widgets of @a widget will receive text input
   * before it gets captured. If that is not desired, you can
   * capture and forward the events yourself with
   * Gtk::EventControllerKey::forward().
   * 
   * @param widget A `Gtk::Widget`.
   */
  void set_key_capture_widget(Widget& widget);
  
  /** Gets the widget that @a bar is capturing key events from.
   * 
   * @return The key capture widget.
   */
  Widget* get_key_capture_widget();
  
  /** Gets the widget that @a bar is capturing key events from.
   * 
   * @return The key capture widget.
   */
  const Widget* get_key_capture_widget() const;
  void unset_key_capture_widget();

  
  /** Sets the child widget of @a bar.
   * 
   * @param child The child widget.
   */
  void set_child(Widget& child);
  void unset_child();
  
  /** Gets the child widget of @a bar.
   * 
   * @return The child widget of @a bar.
   */
  Widget* get_child();
  
  /** Gets the child widget of @a bar.
   * 
   * @return The child widget of @a bar.
   */
  const Widget* get_child() const;

  /** Whether the search mode is on and the search bar shown.
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_search_mode_enabled() ;

/** Whether the search mode is on and the search bar shown.
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_search_mode_enabled() const;

  /** Whether to show the close button in the search bar.
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_show_close_button() ;

/** Whether to show the close button in the search bar.
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_show_close_button() const;

  /** The child widget.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Widget* > property_child() ;

/** The child widget.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Widget* > property_child() const;

  /** The key capture widget.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Widget* > property_key_capture_widget() ;

/** The key capture widget.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Widget* > property_key_capture_widget() const;


  // Gtk::SearchBar has no signals nor vfuncs as of 3.10.


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
   * @relates Gtk::SearchBar
   */
  GTKMM_API
  Gtk::SearchBar* wrap(GtkSearchBar* object, bool take_copy = false);
} //namespace Glib


#endif /* _GTKMM_SEARCHBAR_H */

