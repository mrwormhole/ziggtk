// Generated by gmmproc 2.78.1 -- DO NOT MODIFY!
#ifndef _GTKMM_VIDEO_H
#define _GTKMM_VIDEO_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright (C) 2018 The gtkmm Development Team
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
#include <gtkmm/mediastream.h>
#include <giomm/file.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class GTKMM_API Video_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{

/**  A widget for displaying video.
 *
 * %Gtk::Video is a widget to show a Gtk::MediaStream.
 * It is commonly combined with Gtk::MediaControls to give the
 * user a way to control the playback.
 *
 * @ingroup Widgets
 *
 * @newin{3,94}
 */

class GTKMM_API Video : public Widget
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef Video CppObjectType;
  typedef Video_Class CppClassType;
  typedef GtkVideo BaseObjectType;
  typedef GtkVideoClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  Video(Video&& src) noexcept;
  Video& operator=(Video&& src) noexcept;

  // noncopyable
  Video(const Video&) = delete;
  Video& operator=(const Video&) = delete;

  ~Video() noexcept override;

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend GTKMM_API class Video_Class;
  static CppClassType video_class_;

protected:
  explicit Video(const Glib::ConstructParams& construct_params);
  explicit Video(GtkVideo* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  /// Provides access to the underlying C GObject.
  GtkVideo*       gobj()       { return reinterpret_cast<GtkVideo*>(gobject_); }

  /// Provides access to the underlying C GObject.
  const GtkVideo* gobj() const { return reinterpret_cast<GtkVideo*>(gobject_); }

private:

        
public:
  Video();

  /** Creates a %Gtk::Video to play back the given @a media_stream.
   *
   * @param media_stream A Gtk::MediaStream or an empty Glib::RefPtr.
   */
    explicit Video(const Glib::RefPtr<MediaStream>& media_stream);


  /** Creates a %Gtk::Video to play back the given @a file.
   *
   * @param file A Gio::File or an empty Glib::RefPtr.
   */
    explicit Video(const Glib::RefPtr<Gio::File>& file);


  // gtk_video_new_for_filename() does more than just call g_object_new().
  // GtkVideo has no "filename" property.
  /** Creates a %Gtk::Video to play back the given @a filename.
   *
   * This constructor calls Video(const Glib::RefPtr<Gio::File>& file).
   * See that constructor for details.
   *
   * @param filename Filename to play back or an empty string.
   */
  explicit Video(const std::string& filename);
  

  // We don't wrap gtk_video_new_for_resource() to avoid a clash with
  // the for_filename constructor. But we do wrap gtk_video_set_resource().
  

  /** Gets the media stream managed by @a self or <tt>nullptr</tt> if none.
   * 
   * @return The media stream managed by @a self.
   */
  Glib::RefPtr<MediaStream> get_media_stream();
  
  /** Gets the media stream managed by @a self or <tt>nullptr</tt> if none.
   * 
   * @return The media stream managed by @a self.
   */
  Glib::RefPtr<const MediaStream> get_media_stream() const;
  
  /** Sets the media stream to be played back.
   * 
   *  @a self will take full control of managing the media stream. If you
   * want to manage a media stream yourself, consider using a
   * Gtk::Picture for display.
   * 
   * If you want to display a file, consider using set_file()
   * instead.
   * 
   * @param stream The media stream to play or <tt>nullptr</tt> to unset.
   */
  void set_media_stream(const Glib::RefPtr<MediaStream>& stream);

  
  /** Gets the file played by @a self or <tt>nullptr</tt> if not playing back
   * a file.
   * 
   * @return The file played by @a self.
   */
  Glib::RefPtr<Gio::File> get_file();
  
  /** Gets the file played by @a self or <tt>nullptr</tt> if not playing back
   * a file.
   * 
   * @return The file played by @a self.
   */
  Glib::RefPtr<const Gio::File> get_file() const;
  
  /** Makes @a self play the given @a file.
   * 
   * @param file The file to play.
   */
  void set_file(const Glib::RefPtr<const Gio::File>& file);

  
  /** Makes @a self play the given @a filename.
   * 
   * This is a utility function that calls set_file(),
   * 
   * @param filename The filename to play.
   */
  void set_filename(const std::string& filename);
  
  /** Makes @a self play the resource at the given @a resource_path.
   * 
   * This is a utility function that calls set_file().
   * 
   * @param resource_path The resource to set.
   */
  void set_resource(const std::string& resource_path);

  
  /** Returns <tt>true</tt> if videos have been set to loop.
   * 
   * @return <tt>true</tt> if streams should autoplay.
   */
  bool get_autoplay() const;
  
  /** Sets whether @a self automatically starts playback when it
   * becomes visible or when a new file gets loaded.
   * 
   * @param autoplay Whether media streams should autoplay.
   */
  void set_autoplay(bool autoplay =  true);
  
  /** Returns <tt>true</tt> if videos have been set to loop.
   * 
   * @return <tt>true</tt> if streams should loop.
   */
  bool get_loop() const;
  
  /** Sets whether new files loaded by @a self should be set to loop.
   * 
   * @param loop Whether media streams should loop.
   */
  void set_loop(bool loop =  true);
  
  /** Returns whether graphics offload is enabled.
   * 
   * See Gtk::GraphicsOffload for more information on graphics offload.
   * 
   * @newin{4,14}
   * 
   * @return The graphics offload status.
   */
  GraphicsOffloadEnabled get_graphics_offload() const;
  
  /** Sets whether to enable graphics offload.
   * 
   * See Gtk::GraphicsOffload for more information on graphics offload.
   * 
   * @newin{4,14}
   * 
   * @param enabled The new graphics offload status.
   */
  void set_graphics_offload(GraphicsOffloadEnabled enabled);

  /** The media-stream played
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::RefPtr<MediaStream> > property_media_stream() ;

/** The media-stream played
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<MediaStream> > property_media_stream() const;

  /** The file played by this video if the video is playing a file.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::RefPtr<Gio::File> > property_file() ;

/** The file played by this video if the video is playing a file.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gio::File> > property_file() const;

  /** If the video should automatically begin playing.
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_autoplay() ;

/** If the video should automatically begin playing.
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_autoplay() const;

  /** If new media files should be set to loop.
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_loop() ;

/** If new media files should be set to loop.
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_loop() const;

  /** Whether to enable graphics offload.
   * 
   * @newin{4,14}
   *
   * Default value: Gtk::GraphicsOffloadEnabled::DISABLED
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< GraphicsOffloadEnabled > property_graphics_offload() ;

/** Whether to enable graphics offload.
   * 
   * @newin{4,14}
   *
   * Default value: Gtk::GraphicsOffloadEnabled::DISABLED
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< GraphicsOffloadEnabled > property_graphics_offload() const;


  // There are no signals or vfuncs.


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
   * @relates Gtk::Video
   */
  GTKMM_API
  Gtk::Video* wrap(GtkVideo* object, bool take_copy = false);
} //namespace Glib


#endif /* _GTKMM_VIDEO_H */

