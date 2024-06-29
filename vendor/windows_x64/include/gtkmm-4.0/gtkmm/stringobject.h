// Generated by gmmproc 2.78.1 -- DO NOT MODIFY!
#ifndef _GTKMM_STRINGOBJECT_H
#define _GTKMM_STRINGOBJECT_H

#include <gtkmmconfig.h>


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


#include <glibmm/object.h>
#include <gtk/gtk.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class GTKMM_API StringObject_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{
/** %Gtk::StringObject is the type of items in a Gtk::StringList.
 */

class GTKMM_API StringObject : public Glib::Object
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  using CppObjectType = StringObject;
  using CppClassType = StringObject_Class;
  using BaseObjectType = GtkStringObject;
  using BaseClassType = GtkStringObjectClass;

  // noncopyable
  StringObject(const StringObject&) = delete;
  StringObject& operator=(const StringObject&) = delete;

private:  friend class StringObject_Class;
  static CppClassType stringobject_class_;

protected:
  explicit StringObject(const Glib::ConstructParams& construct_params);
  explicit StringObject(GtkStringObject* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  StringObject(StringObject&& src) noexcept;
  StringObject& operator=(StringObject&& src) noexcept;

  ~StringObject() noexcept override;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GtkStringObject*       gobj()       { return reinterpret_cast<GtkStringObject*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GtkStringObject* gobj() const { return reinterpret_cast<GtkStringObject*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GtkStringObject* gobj_copy();

private:

        
public:
  // gtk_string_object_new() does more than call g_object_new().
  // property_string() is read-only, can't be used in a _WRAP_CTOR().
  
  /** Wraps a string in an object for use with `Gio::ListModel`.
   * 
   * @param string The string to wrap.
   * @return A new `Gtk::StringObject`.
   */
  static Glib::RefPtr<StringObject> create(const Glib::ustring& string);

  
  /** Returns the string contained in a `Gtk::StringObject`.
   * 
   * @return The string of @a self.
   */
  Glib::ustring get_string() const;
  /** The string.
   *
   * Default value: ""
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_string() const;


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
   * @relates Gtk::StringObject
   */
  GTKMM_API
  Glib::RefPtr<Gtk::StringObject> wrap(GtkStringObject* object, bool take_copy = false);
}


#endif /* _GTKMM_STRINGOBJECT_H */
