// Generated by gmmproc 2.78.1 -- DO NOT MODIFY!
#ifndef _GTKMM_STYLECONTEXT_P_H
#define _GTKMM_STYLECONTEXT_P_H
#ifndef GTKMM_DISABLE_DEPRECATED


#include <glibmm/private/object_p.h>
#include <gtk/gtk.h>

#include <glibmm/class.h>

namespace Gtk
{

class GTKMM_API StyleContext_Class : public Glib::Class
{
public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  using CppObjectType = StyleContext;
  using BaseObjectType = GtkStyleContext;
  using BaseClassType = GtkStyleContextClass;
  using CppClassParent = Glib::Object_Class;
  using BaseClassParent = GObjectClass;

  friend class StyleContext;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  const Glib::Class& init();


  static void class_init_function(void* g_class, void* class_data);

  static Glib::ObjectBase* wrap_new(GObject*);

protected:

  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.

  //Callbacks (virtual functions):
};


} // namespace Gtk

#endif // GTKMM_DISABLE_DEPRECATED


#endif /* _GTKMM_STYLECONTEXT_P_H */

