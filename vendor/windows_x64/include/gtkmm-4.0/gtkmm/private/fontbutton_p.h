// Generated by gmmproc 2.78.1 -- DO NOT MODIFY!
#ifndef _GTKMM_FONTBUTTON_P_H
#define _GTKMM_FONTBUTTON_P_H
#ifndef GTKMM_DISABLE_DEPRECATED


#include <gtkmm/private/widget_p.h>

#include <glibmm/class.h>

namespace Gtk
{

class GTKMM_API FontButton_Class : public Glib::Class
{
public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  using CppObjectType = FontButton;
  using BaseObjectType = GtkFontButton;
  using BaseClassType = GtkFontButtonClass;
  using CppClassParent = Gtk::Widget_Class;
  using BaseClassParent = GtkWidgetClass;

  friend class FontButton;
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


#endif /* _GTKMM_FONTBUTTON_P_H */

