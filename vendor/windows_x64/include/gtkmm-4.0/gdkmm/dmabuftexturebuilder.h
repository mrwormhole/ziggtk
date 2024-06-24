// Generated by gmmproc 2.78.1 -- DO NOT MODIFY!
#ifndef _GDKMM_DMABUFTEXTUREBUILDER_H
#define _GDKMM_DMABUFTEXTUREBUILDER_H


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
#include <gdkmm/enums.h>
#include <cairomm/region.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GdkDmabufTextureBuilder = struct _GdkDmabufTextureBuilder;
using GdkDmabufTextureBuilderClass = struct _GdkDmabufTextureBuilderClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gdk
{ class GDKMM_API DmabufTextureBuilder_Class; } // namespace Gdk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gdk
{
class GDKMM_API Display;
class GDKMM_API Texture;

/** %Gdk::DmabufTextureBuilder is a builder used to construct Gdk::Texture
 * objects from DMA buffers.
 *
 * DMA buffers are commonly called @em dma-bufs.
 *
 * DMA buffers is a feature of the Linux kernel to enable efficient buffer and
 * memory sharing between hardware such as codecs, GPUs, displays, cameras and the
 * kernel drivers controlling them. For example, a decoder may want its output to
 * be directly shared with the display server for rendering without a copy.
 *
 * Any device driver which participates in DMA buffer sharing, can do so as either
 * the exporter or importer of buffers (or both).
 *
 * The memory that is shared via DMA buffers is usually stored in non-system memory
 * (maybe in device's local memory or something else not directly accessible by the
 * CPU), and accessing this memory from the CPU may have higher than usual overhead.
 *
 * In particular for graphics data, it is not uncommon that data consists of multiple
 * separate blocks of memory, for example one block for each of the red, green and
 * blue channels. These blocks are called @em planes. DMA buffers can have up to
 * four planes. Even if the memory is a single block, the data can be organized in
 * multiple planes, by specifying offsets from the beginning of the data.
 *
 * DMA buffers are exposed to user-space as file descriptors allowing to pass them
 * between processes. If a DMA buffer has multiple planes, there is one file
 * descriptor per plane.
 *
 * The format of the data (for graphics data, essentially its colorspace) is described
 * by a 32-bit integer. These format identifiers are defined in the header file
 * [drm/drm_fourcc.h](https://github.com/torvalds/linux/blob/master/include/uapi/drm/drm_fourcc.h)
 * and commonly referred to as @em fourcc values, since they are identified by 4 ASCII
 * characters. Additionally, each DMA buffer has a @em modifier, which is a 64-bit integer
 * that describes driver-specific details of the memory layout, such as tiling or compression.
 *
 * The operation of %Gdk::DmabufTextureBuilder is quite simple: Create a texture builder,
 * set all the necessary properties, and then call build() to create the new texture.
 *
 * The required properties for a dma-buf texture are
 *  - The width and height in pixels
 *  - The `fourcc` code and `modifier` which identify the format and memory layout of the dma-buf
 *  - The file descriptor, offset and stride for each of the planes
 *
 * %Gdk::DmabufTextureBuilder can be used for quick one-shot construction of
 * textures as well as kept around and reused to construct multiple textures.
 *
 * @newin{4,14}
 */

class GDKMM_API DmabufTextureBuilder : public Glib::Object
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  using CppObjectType = DmabufTextureBuilder;
  using CppClassType = DmabufTextureBuilder_Class;
  using BaseObjectType = GdkDmabufTextureBuilder;
  using BaseClassType = GdkDmabufTextureBuilderClass;

  // noncopyable
  DmabufTextureBuilder(const DmabufTextureBuilder&) = delete;
  DmabufTextureBuilder& operator=(const DmabufTextureBuilder&) = delete;

private:  friend class DmabufTextureBuilder_Class;
  static CppClassType dmabuftexturebuilder_class_;

protected:
  explicit DmabufTextureBuilder(const Glib::ConstructParams& construct_params);
  explicit DmabufTextureBuilder(GdkDmabufTextureBuilder* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  DmabufTextureBuilder(DmabufTextureBuilder&& src) noexcept;
  DmabufTextureBuilder& operator=(DmabufTextureBuilder&& src) noexcept;

  ~DmabufTextureBuilder() noexcept override;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GdkDmabufTextureBuilder*       gobj()       { return reinterpret_cast<GdkDmabufTextureBuilder*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GdkDmabufTextureBuilder* gobj() const { return reinterpret_cast<GdkDmabufTextureBuilder*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GdkDmabufTextureBuilder* gobj_copy();

private:

   
protected:
  DmabufTextureBuilder();

public:
  
  static Glib::RefPtr<DmabufTextureBuilder> create();


  /** Returns the display that this texture builder is
   * associated with.
   * 
   * @newin{4,14}
   * 
   * @return The display.
   */
  Glib::RefPtr<Display> get_display();
  
  /** Returns the display that this texture builder is
   * associated with.
   * 
   * @newin{4,14}
   * 
   * @return The display.
   */
  Glib::RefPtr<const Display> get_display() const;
  
  /** Sets the display that this texture builder is
   * associated with.
   * 
   * The display is used to determine the supported
   * dma-buf formats.
   * 
   * @newin{4,14}
   * 
   * @param display The display.
   */
  void set_display(const Glib::RefPtr<Display>& display);

  
  /** Gets the width previously set via set_width() or
   * 0 if the width wasn't set.
   * 
   * @newin{4,14}
   * 
   * @return The width.
   */
  unsigned int get_width() const;
  
  /** Sets the width of the texture.
   * 
   * The width must be set before calling Gdk::GLTextureBuilder::build().
   * 
   * @newin{4,14}
   * 
   * @param width The texture's width or 0 to unset.
   */
  void set_width(unsigned int width);

  
  /** Gets the height previously set via set_height() or
   * 0 if the height wasn't set.
   * 
   * @newin{4,14}
   * 
   * @return The height.
   */
  unsigned int get_height() const;
  
  /** Sets the height of the texture.
   * 
   * The height must be set before calling Gdk::GLTextureBuilder::build().
   * 
   * @newin{4,14}
   * 
   * @param height The texture's height or 0 to unset.
   */
  void set_height(unsigned int height);

  
  /** Gets the format previously set via set_fourcc()
   * or 0 if the format wasn't set.
   * 
   * The format is specified as a fourcc code.
   * 
   * @newin{4,14}
   * 
   * @return The format.
   */
  guint32 get_fourcc() const;
  
  /** Sets the format of the texture.
   * 
   * The format is specified as a fourcc code.
   * 
   * The format must be set before calling Gdk::GLTextureBuilder::build().
   * 
   * @newin{4,14}
   * 
   * @param fourcc The texture's format or 0 to unset.
   */
  void set_fourcc(guint32 fourcc);

  
  /** Gets the modifier value.
   * 
   * @newin{4,14}
   * 
   * @return The modifier.
   */
  guint64 get_modifier() const;
  
  /** Sets the modifier.
   * 
   * @newin{4,14}
   * 
   * @param modifier The modifier value.
   */
  void set_modifier(guint64 modifier);

  
  /** Whether the data is premultiplied.
   * 
   * @newin{4,14}
   * 
   * @return Whether the data is premultiplied.
   */
  bool get_premultiplied() const;
  
  /** Sets whether the data is premultiplied.
   * 
   * Unless otherwise specified, all formats including alpha channels are assumed
   * to be premultiplied.
   * 
   * @newin{4,14}
   * 
   * @param premultiplied Whether the data is premultiplied.
   */
  void set_premultiplied(bool premultiplied =  true);

  
  /** Gets the number of planes.
   * 
   * @newin{4,14}
   * 
   * @return The number of planes.
   */
  unsigned int get_n_planes() const;
  
  /** Sets the number of planes of the texture.
   * 
   * @newin{4,14}
   * 
   * @param n_planes The number of planes.
   */
  void set_n_planes(unsigned int n_planes);

  
  /** Gets the file descriptor for a plane.
   * 
   * @newin{4,14}
   * 
   * @param plane The plane to get the fd for.
   * @return The file descriptor.
   */
  int get_fd(unsigned int plane) const;
  
  /** Sets the file descriptor for a plane.
   * 
   * @newin{4,14}
   * 
   * @param plane The plane to set the fd for.
   * @param fd The file descriptor.
   */
  void set_fd(unsigned int plane, int fd);

  
  /** Gets the stride value for a plane.
   * 
   * @newin{4,14}
   * 
   * @param plane The plane to get the stride for.
   * @return The stride.
   */
  unsigned int get_stride(unsigned int plane) const;
  
  /** Sets the stride for a plane.
   * 
   * The stride must be set for all planes before calling Gdk::GLTextureBuilder::build().
   * 
   * @newin{4,14}
   * 
   * @param plane The plane to set the stride for.
   * @param stride The stride value.
   */
  void set_stride(unsigned int plane, unsigned int stride);

  
  /** Gets the offset value for a plane.
   * 
   * @newin{4,14}
   * 
   * @param plane The plane to get the offset for.
   * @return The offset.
   */
  unsigned int get_offset(unsigned int plane) const;
  
  /** Sets the offset for a plane.
   * 
   * @newin{4,14}
   * 
   * @param plane The plane to set the offset for.
   * @param offset The offset value.
   */
  void set_offset(unsigned int plane, unsigned int offset);

  
  /** Gets the texture previously set via set_update_texture() or
   * <tt>nullptr</tt> if none was set.
   * 
   * @newin{4,14}
   * 
   * @return The texture.
   */
  Glib::RefPtr<Texture> get_update_texture();
  
  /** Gets the texture previously set via set_update_texture() or
   * <tt>nullptr</tt> if none was set.
   * 
   * @newin{4,14}
   * 
   * @return The texture.
   */
  Glib::RefPtr<const Texture> get_update_texture() const;
  
  /** Sets the texture to be updated by this texture. See
   * set_update_region() for an explanation.
   * 
   * @newin{4,14}
   * 
   * @param texture The texture to update.
   */
  void set_update_texture(const Glib::RefPtr<Texture>& texture);

  
  /** Gets the region previously set via set_update_region() or
   * <tt>nullptr</tt> if none was set.
   * 
   * @newin{4,14}
   * 
   * @return The region.
   */
  ::Cairo::RefPtr< ::Cairo::Region> get_update_region();
  
  /** Gets the region previously set via set_update_region() or
   * <tt>nullptr</tt> if none was set.
   * 
   * @newin{4,14}
   * 
   * @return The region.
   */
  ::Cairo::RefPtr<const ::Cairo::Region> get_update_region() const;
  
  /** Sets the region to be updated by this texture. Together with
   * property_update_texture() this describes an
   * update of a previous texture.
   * 
   * When rendering animations of large textures, it is possible that
   * consecutive textures are only updating contents in parts of the texture.
   * It is then possible to describe this update via these two properties,
   * so that GTK can avoid rerendering parts that did not change.
   * 
   * An example would be a screen recording where only the mouse pointer moves.
   * 
   * @newin{4,14}
   * 
   * @param region The region to update.
   */
  void set_update_region(const ::Cairo::RefPtr< ::Cairo::Region>& region);

  /** For instance,
   * void on_dmabuf_texture_released();
   */
  using SlotDmabufTextureReleased = sigc::slot<void()>;

  /** Builds a new `Gdk::Texture` with the values set up in the builder.
   *
   * It is a programming error to call this function if any mandatory
   * property has not been set.
   *
   * If the dmabuf is not supported by GTK, an exception will be thrown.
   *
   * The @a slot gets called when the returned texture gets released.
   *
   * It is possible to call this function multiple times to create multiple textures,
   * possibly with changing properties in between.
   *
   * It is the responsibility of the caller to keep the file descriptors for the planes
   * open until the created texture is no longer used, and close them afterwards (possibly
   * using the @a slot notify).
   *
   * Not all formats defined in the `drm_fourcc.h` header are supported. You can use
   * Gdk::Display::get_dmabuf_formats() to get a list of supported formats.
   *
   * @newin{4,14}
   *
   * @param slot Destroy function to be called when the texture is released.
   * @return A newly built `Gdk::Texture` or an empty RefPtr if the format
   *         is not supported, or any mandatory property has not been set.
   *
   * @throws Glib::Error
   */
  Glib::RefPtr<Texture> build(const SlotDmabufTextureReleased& slot = {});
  

  /** The display that this texture will be used on.
   * 
   * @newin{4,14}
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::RefPtr<Display> > property_display() ;

/** The display that this texture will be used on.
   * 
   * @newin{4,14}
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Display> > property_display() const;

  /** The width of the texture.
   * 
   * @newin{4,14}
   *
   * Default value: 0
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< unsigned int > property_width() ;

/** The width of the texture.
   * 
   * @newin{4,14}
   *
   * Default value: 0
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< unsigned int > property_width() const;

  /** The height of the texture.
   * 
   * @newin{4,14}
   *
   * Default value: 0
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< unsigned int > property_height() ;

/** The height of the texture.
   * 
   * @newin{4,14}
   *
   * Default value: 0
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< unsigned int > property_height() const;

  /** The format of the texture, as a fourcc value.
   * 
   * @newin{4,14}
   *
   * Default value: 0
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< unsigned int > property_fourcc() ;

/** The format of the texture, as a fourcc value.
   * 
   * @newin{4,14}
   *
   * Default value: 0
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< unsigned int > property_fourcc() const;

  /** The modifier.
   * 
   * @newin{4,14}
   *
   * Default value: 0
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< guint64 > property_modifier() ;

/** The modifier.
   * 
   * @newin{4,14}
   *
   * Default value: 0
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< guint64 > property_modifier() const;

  /** Whether the alpha channel is premultiplied into the others.
   * 
   * Only relevant if the format has alpha.
   * 
   * @newin{4,14}
   *
   * Default value: <tt>true</tt>
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_premultiplied() ;

/** Whether the alpha channel is premultiplied into the others.
   * 
   * Only relevant if the format has alpha.
   * 
   * @newin{4,14}
   *
   * Default value: <tt>true</tt>
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_premultiplied() const;

  /** The number of planes of the texture.
   * 
   * Note that you can set properties for other planes,
   * but they will be ignored when constructing the texture.
   * 
   * @newin{4,14}
   *
   * Default value: 1
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< unsigned int > property_n_planes() ;

/** The number of planes of the texture.
   * 
   * Note that you can set properties for other planes,
   * but they will be ignored when constructing the texture.
   * 
   * @newin{4,14}
   *
   * Default value: 1
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< unsigned int > property_n_planes() const;

  /** The update region for Gdk::GLTextureBuilder::property_update_texture().
   * 
   * @newin{4,14}
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< ::Cairo::RefPtr< ::Cairo::Region> > property_update_region() ;

/** The update region for Gdk::GLTextureBuilder::property_update_texture().
   * 
   * @newin{4,14}
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< ::Cairo::RefPtr< ::Cairo::Region> > property_update_region() const;

  /** The texture property_update_region() is an update for.
   * 
   * @newin{4,14}
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::RefPtr<Texture> > property_update_texture() ;

/** The texture property_update_region() is an update for.
   * 
   * @newin{4,14}
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Texture> > property_update_texture() const;


  // There are no signals or public vfuncs.


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


};

} // namespace Gdk


namespace Glib
{
  /** A Glib::wrap() method for this object.
   *
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gdk::DmabufTextureBuilder
   */
  GDKMM_API
  Glib::RefPtr<Gdk::DmabufTextureBuilder> wrap(GdkDmabufTextureBuilder* object, bool take_copy = false);
}


#endif /* _GDKMM_DMABUFTEXTUREBUILDER_H */

