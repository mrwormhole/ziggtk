// Generated by gmmproc 2.78.1 -- DO NOT MODIFY!
#ifndef _GTKMM_DIALOG_P_H
#define _GTKMM_DIALOG_P_H


#include <gtkmm/private/window_p.h>

#include <glibmm/class.h>

namespace Gtk
{

class GTKMM_API Dialog_Class : public Glib::Class
{
public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  using CppObjectType = Dialog;
  using BaseObjectType = GtkDialog;
  using BaseClassType = GtkDialogClass;
  using CppClassParent = Gtk::Window_Class;
  using BaseClassParent = GtkWindowClass;

  friend class Dialog;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  const Glib::Class& init();


  static void class_init_function(void* g_class, void* class_data);

  static Glib::ObjectBase* wrap_new(GObject*);

protected:

  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.
  static void response_callback(GtkDialog* self, gint p0);

  //Callbacks (virtual functions):
};


} // namespace Gtk


#endif /* _GTKMM_DIALOG_P_H */

