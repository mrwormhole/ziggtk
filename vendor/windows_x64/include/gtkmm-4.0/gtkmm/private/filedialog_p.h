// Generated by gmmproc 2.78.1 -- DO NOT MODIFY!
#ifndef _GTKMM_FILEDIALOG_P_H
#define _GTKMM_FILEDIALOG_P_H


#include <glibmm/private/object_p.h>

#include <glibmm/class.h>

namespace Gtk
{

class GTKMM_API FileDialog_Class : public Glib::Class
{
public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  using CppObjectType = FileDialog;
  using BaseObjectType = GtkFileDialog;
  using CppClassParent = Glib::Object_Class;

  friend class FileDialog;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  const Glib::Class& init();


  static Glib::ObjectBase* wrap_new(GObject*);

protected:

  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.

  //Callbacks (virtual functions):
};


} // namespace Gtk


#endif /* _GTKMM_FILEDIALOG_P_H */
