// Generated by gmmproc 2.78.1 -- DO NOT MODIFY!
#ifndef _GTKMM_FILELAUNCHER_H
#define _GTKMM_FILELAUNCHER_H

#include <gtkmmconfig.h>


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright (C) 2022 The gtkmm Development Team
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
#include <giomm/asyncresult.h>
#include <giomm/cancellable.h>
#include <giomm/file.h>
#include <gtk/gtk.h>

#ifndef DOXYGEN_SHOULD_SKIP_THIS
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class GTKMM_API FileLauncher_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{
class Window;

/** A %Gtk::FileLauncher object collects the arguments that are needed 
 * to open a uri with an application.
 *
 * Depending on system configuration, user preferences and available APIs, this
 * may or may not show an app chooser dialog or launch the default application
 * right away.
 *
 * The operation is started with the launch() method. This API follows the GIO
 * async pattern, and the result can be obtained by calling launch_finish().
 *
 * To launch uris that don't represent files, use Gtk::UriLauncher.
 *
 * @newin{4,10}
 */

class GTKMM_API FileLauncher : public Glib::Object
{
   
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  using CppObjectType = FileLauncher;
  using CppClassType = FileLauncher_Class;
  using BaseObjectType = GtkFileLauncher;
  using BaseClassType = GtkFileLauncherClass;

  // noncopyable
  FileLauncher(const FileLauncher&) = delete;
  FileLauncher& operator=(const FileLauncher&) = delete;

private:  friend class FileLauncher_Class;
  static CppClassType filelauncher_class_;

protected:
  explicit FileLauncher(const Glib::ConstructParams& construct_params);
  explicit FileLauncher(GtkFileLauncher* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  FileLauncher(FileLauncher&& src) noexcept;
  FileLauncher& operator=(FileLauncher&& src) noexcept;

  ~FileLauncher() noexcept override;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GtkFileLauncher*       gobj()       { return reinterpret_cast<GtkFileLauncher*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GtkFileLauncher* gobj() const { return reinterpret_cast<GtkFileLauncher*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GtkFileLauncher* gobj_copy();

private:

     
protected:
    explicit FileLauncher(const Glib::RefPtr<Gio::File>& file);


public:
  
  static Glib::RefPtr<FileLauncher> create(const Glib::RefPtr<Gio::File>& file =  {});


  /** Gets the file that will be opened.
   * 
   * @newin{4,10}
   * 
   * @return The file.
   */
  Glib::RefPtr<Gio::File> get_file();
  
  /** Gets the file that will be opened.
   * 
   * @newin{4,10}
   * 
   * @return The file.
   */
  Glib::RefPtr<const Gio::File> get_file() const;
  
  /** Sets the file that will be opened.
   * 
   * @newin{4,10}
   * 
   * @param file A `Gio::File`.
   */
  void set_file(const Glib::RefPtr<Gio::File>& file);

  
  /** Returns whether to ask the user to choose an app for opening the file.
   * 
   * @newin{4,12}
   * 
   * @return <tt>true</tt> if always asking for app.
   */
  bool get_always_ask() const;
  
  /** Sets whether to awlays ask the user to choose an app for opening the file.
   * If <tt>false</tt>, the file might be opened with a default app or the previous choice.
   * 
   * @newin{4,12}
   * 
   * @param always_ask A `<tt>bool</tt>`.
   */
  void set_always_ask(bool always_ask =  true);

  
  /** Returns whether to make the file writable for the handler.
   * 
   * @newin{4,14}
   * 
   * @return <tt>true</tt> if the file will be made writable.
   */
  bool get_writable() const;
  
  /** Sets whether to make the file writable for the handler.
   * 
   * @newin{4,14}
   * 
   * @param writable A `<tt>bool</tt>`.
   */
  void set_writable(bool writable =  true);

  
  /** Launch an application to open the file.
   * 
   * This may present an app chooser dialog to the user.
   * 
   * The @a slot will be called when the operation is completed.
   * It should call launch_finish() to obtain
   * the result.
   * 
   * @newin{4,10}
   * 
   * @param parent The parent `Gtk::Window`.
   * @param cancellable A `Cancellable` to cancel the operation.
   * @param slot A callback to call when the operation is complete.
   */
  void launch(Window& parent, const Gio::SlotAsyncReady& slot, const Glib::RefPtr<Gio::Cancellable>& cancellable =  {}) const;

  /// A launch() convenience overload.
  void launch(const Gio::SlotAsyncReady& slot, const Glib::RefPtr<Gio::Cancellable>& cancellable =  {}) const;
  
  /** Finishes the launch() call and
   * returns the result.
   * 
   * @newin{4,10}
   * 
   * @param result A `Gio::AsyncResult`.
   * @return <tt>true</tt> if an application was launched,
   * or <tt>false</tt> and @a error is set.
   * 
   * @throws Gtk::DialogError
   * @throws Gio::Error
   */
  bool launch_finish(const Glib::RefPtr<Gio::AsyncResult>& result) const;

  
  /** Launch a file manager to show the file in its parent directory.
   * 
   * This is only supported native files. It will fail if @a file
   * is e.g. a http:// uri.
   * 
   * The @a slot will be called when the operation is completed.
   * It should call open_containing_folder_finish()
   * to obtain the result.
   * 
   * @newin{4,10}
   * 
   * @param parent The parent `Gtk::Window`.
   * @param cancellable A `Cancellable` to cancel the operation.
   * @param slot A callback to call when the operation is complete.
   */
  void open_containing_folder(Window& parent, const Gio::SlotAsyncReady& slot, const Glib::RefPtr<Gio::Cancellable>& cancellable =  {}) const;

  /// A open_containing_folder() convenience overload.
  void open_containing_folder(const Gio::SlotAsyncReady& slot, const Glib::RefPtr<Gio::Cancellable>& cancellable =  {}) const;
  
  /** Finishes the open_containing_folder()
   * call and returns the result.
   * 
   * @newin{4,10}
   * 
   * @param result A `Gio::AsyncResult`.
   * @return <tt>true</tt> if an application was launched,
   * or <tt>false</tt> and @a error is set.
   * 
   * @throws Gtk::DialogError
   * @throws Gio::Error
   */
  bool open_containing_folder_finish(const Glib::RefPtr<Gio::AsyncResult>& result) const;

  /** The file to launch.
   * 
   * @newin{4,10}
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::RefPtr<Gio::File> > property_file() ;

/** The file to launch.
   * 
   * @newin{4,10}
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gio::File> > property_file() const;

  /** Whether to ask the user to choose an app for opening the file. If <tt>false</tt>,
   * the file might be opened with a default app or the previous choice.
   * 
   * @newin{4,12}
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_always_ask() ;

/** Whether to ask the user to choose an app for opening the file. If <tt>false</tt>,
   * the file might be opened with a default app or the previous choice.
   * 
   * @newin{4,12}
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_always_ask() const;

  /** Whether to make the file writable for the handler.
   * 
   * @newin{4,14}
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_writable() ;

/** Whether to make the file writable for the handler.
   * 
   * @newin{4,14}
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_writable() const;


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
   * @relates Gtk::FileLauncher
   */
  GTKMM_API
  Glib::RefPtr<Gtk::FileLauncher> wrap(GtkFileLauncher* object, bool take_copy = false);
}


#endif /* _GTKMM_FILELAUNCHER_H */
