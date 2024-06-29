// Generated by gmmproc 2.80.0 -- DO NOT MODIFY!
#ifndef _GIOMM_INPUTSTREAM_P_H
#define _GIOMM_INPUTSTREAM_P_H


#include <glibmm/private/object_p.h>

#include <glibmm/class.h>

namespace Gio
{

class GIOMM_API InputStream_Class : public Glib::Class
{
public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  using CppObjectType = InputStream;
  using BaseObjectType = GInputStream;
  using BaseClassType = GInputStreamClass;
  using CppClassParent = Glib::Object_Class;
  using BaseClassParent = GObjectClass;

  friend class InputStream;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  const Glib::Class& init();


  static void class_init_function(void* g_class, void* class_data);

  static Glib::ObjectBase* wrap_new(GObject*);

protected:

  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.

  //Callbacks (virtual functions):
  static gssize read_fn_vfunc_callback(GInputStream* self, void* buffer, gsize count, GCancellable* cancellable, GError** error);
  static gssize skip_vfunc_callback(GInputStream* self, gsize count, GCancellable* cancellable, GError** error);
  static gboolean close_fn_vfunc_callback(GInputStream* self, GCancellable* cancellable, GError** error);
};


} // namespace Gio


#endif /* _GIOMM_INPUTSTREAM_P_H */

