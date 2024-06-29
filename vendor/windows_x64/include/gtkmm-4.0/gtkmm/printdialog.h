// Generated by gmmproc 2.78.1 -- DO NOT MODIFY!
#ifndef _GTKMM_PRINTDIALOG_H
#define _GTKMM_PRINTDIALOG_H

#include <gtkmmconfig.h>


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright (C) 2023 The gtkmm Development Team
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
#include <giomm/outputstream.h>
#include <gtkmm/printsetup.h>

#ifndef DOXYGEN_SHOULD_SKIP_THIS
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class GTKMM_API PrintDialog_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{
class Window;

/** A %Gtk::PrintDialog object collects the arguments that
 * are needed to present a print dialog to the user, such
 * as a title for the dialog and whether it should be modal.
 *
 * The dialog is shown with the setup() function.
 * The actual printing can be done with print() or print_file().
 * These APIs follow the GIO async pattern, and the results can be obtained
 * by calling the corresponding finish methods.
 *
 * @ingroup Dialogs
 * @ingroup Printing
 * @newin{4,14}
 */

class GTKMM_API PrintDialog : public Glib::Object
{
   
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  using CppObjectType = PrintDialog;
  using CppClassType = PrintDialog_Class;
  using BaseObjectType = GtkPrintDialog;
  using BaseClassType = GtkPrintDialogClass;

  // noncopyable
  PrintDialog(const PrintDialog&) = delete;
  PrintDialog& operator=(const PrintDialog&) = delete;

private:  friend class PrintDialog_Class;
  static CppClassType printdialog_class_;

protected:
  explicit PrintDialog(const Glib::ConstructParams& construct_params);
  explicit PrintDialog(GtkPrintDialog* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  PrintDialog(PrintDialog&& src) noexcept;
  PrintDialog& operator=(PrintDialog&& src) noexcept;

  ~PrintDialog() noexcept override;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GtkPrintDialog*       gobj()       { return reinterpret_cast<GtkPrintDialog*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GtkPrintDialog* gobj() const { return reinterpret_cast<GtkPrintDialog*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GtkPrintDialog* gobj_copy();

private:

     
protected:
  PrintDialog();

public:
  
  static Glib::RefPtr<PrintDialog> create();


  /** Returns the title that will be shown on the
   * print dialog.
   * 
   * @newin{4,14}
   * 
   * @return The title.
   */
  Glib::ustring get_title() const;
  
  /** Sets the title that will be shown on the print dialog.
   * 
   * @newin{4,14}
   * 
   * @param title The new title.
   */
  void set_title(const Glib::ustring& title);
  
  /** Returns the label that will be shown on the
   * accept button of the print dialog.
   * 
   * @newin{4,14}
   * 
   * @return The accept label.
   */
  Glib::ustring get_accept_label() const;
  
  /** Sets the label that will be shown on the
   * accept button of the print dialog shown for
   * setup().
   * 
   * @newin{4,14}
   * 
   * @param accept_label The new accept label.
   */
  void set_accept_label(const Glib::ustring& accept_label);
  
  /** Returns whether the print dialog blocks
   * interaction with the parent window while
   * it is presented.
   * 
   * @newin{4,14}
   * 
   * @return Whether the print dialog is modal.
   */
  bool get_modal() const;
  
  /** Sets whether the print dialog blocks
   * interaction with the parent window while
   * it is presented.
   * 
   * @newin{4,14}
   * 
   * @param modal The new value.
   */
  void set_modal(bool modal =  true);

  
  /** Returns the page setup.
   * 
   * @newin{4,14}
   * 
   * @return The page setup.
   */
  Glib::RefPtr<PageSetup> get_page_setup();
  
  /** Returns the page setup.
   * 
   * @newin{4,14}
   * 
   * @return The page setup.
   */
  Glib::RefPtr<const PageSetup> get_page_setup() const;
  
  /** Set the page setup for the print dialog.
   * 
   * @newin{4,14}
   * 
   * @param page_setup The new page setup.
   */
  void set_page_setup(const Glib::RefPtr<PageSetup>& page_setup);

  
  /** Returns the print settings for the print dialog.
   * 
   * @newin{4,14}
   * 
   * @return The settings.
   */
  Glib::RefPtr<PrintSettings> get_print_settings();
  
  /** Returns the print settings for the print dialog.
   * 
   * @newin{4,14}
   * 
   * @return The settings.
   */
  Glib::RefPtr<const PrintSettings> get_print_settings() const;
  
  /** Sets the print settings for the print dialog.
   * 
   * @newin{4,14}
   * 
   * @param print_settings The new print settings.
   */
  void set_print_settings(const Glib::RefPtr<PrintSettings>& print_settings);

  
  /** This function presents a print dialog to let the user select a printer,
   * and set up print settings and page setup.
   * 
   * The @a slot will be called when the dialog is dismissed.
   * It should call setup_finish()
   * to obtain the results in the form of a Gtk::PrintSetup,
   * that can then be passed to print()
   * or print_file().
   * 
   * One possible use for this method is to have the user select a printer,
   * then show a page setup UI in the application (e.g. to arrange images
   * on a page), then call print() on @a self
   * to do the printing without further user interaction.
   * 
   * @newin{4,14}
   * 
   * @param parent The parent `Gtk::Window`.
   * @param cancellable A `Cancellable` to cancel the operation.
   * @param slot A callback to call when the operation is complete.
   */
  void setup(Window& parent, const Gio::SlotAsyncReady& slot, const Glib::RefPtr<Gio::Cancellable>& cancellable =  {});

  /// A setup() convenience overload.
  void setup(const Gio::SlotAsyncReady& slot, const Glib::RefPtr<Gio::Cancellable>& cancellable =  {});
  
  /** Finishes the setup() call.
   * 
   * If the call was successful, it returns a Gtk::PrintSetup
   * which contains the print settings and page setup information that
   * will be used to print.
   * 
   * @newin{4,14}
   * 
   * @param result A `Gio::AsyncResult`.
   * @return The `Gtk::PrintSetup` object that resulted from the call,
   * or <tt>nullptr</tt> if the call was not successful.
   * 
   * @throws Gtk::DialogError
   */
  Glib::RefPtr<PrintSetup> setup_finish(const Glib::RefPtr<Gio::AsyncResult>& result);

  
  /** This function prints content from a stream.
   * 
   * If you pass <tt>nullptr</tt> as @a setup, then this method will present a print dialog.
   * Otherwise, it will attempt to print directly, without user interaction.
   * 
   * The @a slot will be called when the printing is done. It should call
   * print_finish() to obtain the results.
   * 
   * @newin{4,14}
   * 
   * @param parent The parent `Gtk::Window`.
   * @param setup The `Gtk::PrintSetup` to use.
   * @param cancellable A `Cancellable` to cancel the operation.
   * @param slot A callback to call when the operation is complete.
   */
  void print(Window& parent, const Gio::SlotAsyncReady& slot, const Glib::RefPtr<PrintSetup>& setup =  {}, const Glib::RefPtr<Gio::Cancellable>& cancellable =  {});

  /// A print() convenience overload.
  void print(const Gio::SlotAsyncReady& slot, const Glib::RefPtr<PrintSetup>& setup =  {}, const Glib::RefPtr<Gio::Cancellable>& cancellable =  {});
  
  /** Finishes the print() call and
   * returns the results.
   * 
   * If the call was successful, the content to be printed should be
   * written to the returned output stream. Otherwise, <tt>nullptr</tt> is returned.
   * 
   * The overall results of the print operation will be returned in the
   * Gio::OutputStream::close() call, so if you are interested in the
   * results, you need to explicitly close the output stream (it will be
   * closed automatically if you just unref it). Be aware that the close
   * call may not be instant as it operation will for the printer to finish
   * printing.
   * 
   * @newin{4,14}
   * 
   * @param result A `Gio::AsyncResult`.
   * @return A Gio::OutputStream.
   * 
   * @throws Gtk::DialogError
   */
  Glib::RefPtr<Gio::OutputStream> print_finish(const Glib::RefPtr<Gio::AsyncResult>& result);

  
  /** This function prints a file.
   * 
   * If you pass <tt>nullptr</tt> as @a setup, then this method will present a print dialog.
   * Otherwise, it will attempt to print directly, without user interaction.
   * 
   * The @a slot will be called when the printing is done. It should call
   * print_file_finish() to obtain the results.
   * 
   * @newin{4,14}
   * 
   * @param parent The parent `Gtk::Window`.
   * @param setup The `Gtk::PrintSetup` to use.
   * @param file The `Gio::File` to print.
   * @param cancellable A `Cancellable` to cancel the operation.
   * @param slot A callback to call when the operation is complete.
   */
  void print_file(Window& parent, const Gio::SlotAsyncReady& slot, const Glib::RefPtr<Gio::File>& file, const Glib::RefPtr<PrintSetup>& setup =  {}, const Glib::RefPtr<Gio::Cancellable>& cancellable =  {});

  /// A print_file() convenience overload.
  void print_file(const Gio::SlotAsyncReady& slot, const Glib::RefPtr<Gio::File>& file, const Glib::RefPtr<PrintSetup>& setup =  {}, const Glib::RefPtr<Gio::Cancellable>& cancellable =  {});
  
  /** Finishes the print_file() call and
   * returns the results.
   * 
   * @newin{4,14}
   * 
   * @param result A `Gio::AsyncResult`.
   * @return Whether the call was successful.
   * 
   * @throws Gtk::DialogError
   */
  bool print_file_finish(const Glib::RefPtr<Gio::AsyncResult>& result);

  /** A title that may be shown on the print dialog that is
   * presented by Gtk::PrintDialog::setup().
   * 
   * @newin{4,14}
   *
   * Default value: ""
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::ustring > property_title() ;

/** A title that may be shown on the print dialog that is
   * presented by Gtk::PrintDialog::setup().
   * 
   * @newin{4,14}
   *
   * Default value: ""
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_title() const;

  /** A label that may be shown on the accept button of a print dialog
   * that is presented by Gtk::PrintDialog::setup().
   * 
   * @newin{4,14}
   *
   * Default value: ""
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::ustring > property_accept_label() ;

/** A label that may be shown on the accept button of a print dialog
   * that is presented by Gtk::PrintDialog::setup().
   * 
   * @newin{4,14}
   *
   * Default value: ""
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_accept_label() const;

  /** Whether the print dialog is modal.
   * 
   * @newin{4,14}
   *
   * Default value: <tt>true</tt>
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_modal() ;

/** Whether the print dialog is modal.
   * 
   * @newin{4,14}
   *
   * Default value: <tt>true</tt>
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_modal() const;

  /** The page setup to use.
   * 
   * @newin{4,14}
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::RefPtr<PageSetup> > property_page_setup() ;

/** The page setup to use.
   * 
   * @newin{4,14}
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<PageSetup> > property_page_setup() const;

  /** The print settings to use.
   * 
   * @newin{4,14}
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::RefPtr<PrintSettings> > property_print_settings() ;

/** The print settings to use.
   * 
   * @newin{4,14}
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<PrintSettings> > property_print_settings() const;


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
   * @relates Gtk::PrintDialog
   */
  GTKMM_API
  Glib::RefPtr<Gtk::PrintDialog> wrap(GtkPrintDialog* object, bool take_copy = false);
}


#endif /* _GTKMM_PRINTDIALOG_H */
