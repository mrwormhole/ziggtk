// Generated by gmmproc 2.80.0 -- DO NOT MODIFY!
#ifndef _GIOMM_ZLIBCOMPRESSOR_H
#define _GIOMM_ZLIBCOMPRESSOR_H

#include <giommconfig.h>


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright (C) 2012 The giomm Development Team
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
 * License along with this library.  If not, see <http://www.gnu.org/licenses/>.
 */


#include <glibmm/object.h>
#include <giomm/converter.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GZlibCompressor = struct _GZlibCompressor;
using GZlibCompressorClass = struct _GZlibCompressorClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gio
{ class GIOMM_API ZlibCompressor_Class; } // namespace Gio
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gio
{

/** @addtogroup giommEnums giomm Enums and Flags */

/** 
 *  @var ZlibCompressorFormat ZLIB
 * Deflate compression with zlib header.
 * 
 *  @var ZlibCompressorFormat GZIP
 * Gzip file format.
 * 
 *  @var ZlibCompressorFormat RAW
 * Deflate compression with no header.
 * 
 *  @enum ZlibCompressorFormat
 * 
 * Used to select the type of data format to use for ZlibDecompressor
 * and ZlibCompressor.
 * 
 * @newin{2,24}
 *
 * @ingroup giommEnums
 */
enum class ZlibCompressorFormat
{
  ZLIB,
  GZIP,
  RAW
};


} // namespace Gio

#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class GIOMM_API Value<Gio::ZlibCompressorFormat> : public Glib::Value_Enum<Gio::ZlibCompressorFormat>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

namespace Gio
{


class GIOMM_API FileInfo;

/** ZlibCompressor - Zlib compressor.
 * ZlibCompressor is an implementation of Converter that compresses data using
 * zlib.
 * @newin{2,34}
 */

class GIOMM_API ZlibCompressor : public Glib::Object, public Converter
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  using CppObjectType = ZlibCompressor;
  using CppClassType = ZlibCompressor_Class;
  using BaseObjectType = GZlibCompressor;
  using BaseClassType = GZlibCompressorClass;

  // noncopyable
  ZlibCompressor(const ZlibCompressor&) = delete;
  ZlibCompressor& operator=(const ZlibCompressor&) = delete;

private:  friend class ZlibCompressor_Class;
  static CppClassType zlibcompressor_class_;

protected:
  explicit ZlibCompressor(const Glib::ConstructParams& construct_params);
  explicit ZlibCompressor(GZlibCompressor* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  ZlibCompressor(ZlibCompressor&& src) noexcept;
  ZlibCompressor& operator=(ZlibCompressor&& src) noexcept;

  ~ZlibCompressor() noexcept override;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GZlibCompressor*       gobj()       { return reinterpret_cast<GZlibCompressor*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GZlibCompressor* gobj() const { return reinterpret_cast<GZlibCompressor*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GZlibCompressor* gobj_copy();

private:

  
protected:
    explicit ZlibCompressor(ZlibCompressorFormat format, int level);


public:
  
  /** Creates a new ZlibCompressor.
   * 
   * @newin{2,24}
   * 
   * @param format The format to use for the compressed data.
   * @param level Compression level (0-9), -1 for default.
   * @return A new ZlibCompressor.
   */

  
  static Glib::RefPtr<ZlibCompressor> create(ZlibCompressorFormat format, int level);


  /** Returns the ZlibCompressor::property_file_info() property.
   * 
   * @newin{2,26}
   * 
   * @return A FileInfo, or <tt>nullptr</tt>.
   */
  Glib::RefPtr<FileInfo> get_file_info();
  
  /** Returns the ZlibCompressor::property_file_info() property.
   * 
   * @newin{2,26}
   * 
   * @return A FileInfo, or <tt>nullptr</tt>.
   */
  Glib::RefPtr<const FileInfo> get_file_info() const;

  
  /** Sets @a file_info in @a compressor. If non-<tt>nullptr</tt>, and @a compressor's
   * ZlibCompressor::property_format() property is Gio::ZlibCompressorFormat::GZIP,
   * it will be used to set the file name and modification time in
   * the GZIP header of the compressed data.
   * 
   * @note it is an error to call this function while a compression is in
   * progress; it may only be called immediately after creation of @a compressor,
   * or after resetting it with g_converter_reset().
   * 
   * @newin{2,26}
   * 
   * @param file_info A FileInfo.
   */
  void set_file_info(const Glib::RefPtr<FileInfo>& file_info);

  /** If set to a non-<tt>nullptr</tt> FileInfo object, and ZlibCompressor::property_format() is
   * Gio::ZlibCompressorFormat::GZIP, the compressor will write the file name
   * and modification time from the file info to the GZIP header.
   * 
   * @newin{2,26}
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::RefPtr<FileInfo> > property_file_info() ;

/** If set to a non-<tt>nullptr</tt> FileInfo object, and ZlibCompressor::property_format() is
   * Gio::ZlibCompressorFormat::GZIP, the compressor will write the file name
   * and modification time from the file info to the GZIP header.
   * 
   * @newin{2,26}
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<FileInfo> > property_file_info() const;

  /** The format of the compressed data.
   * 
   * @newin{2,24}
   *
   * Default value: Gio::ZlibCompressorFormat::ZLIB
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< ZlibCompressorFormat > property_format() const;


  /** The level of compression from `0` (no compression) to `9` (most
   * compression). `-1` for the default level.
   * 
   * @newin{2,24}
   *
   * Default value: -1
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< int > property_level() const;


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


};

} // namespace Gio


namespace Glib
{
  /** A Glib::wrap() method for this object.
   *
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gio::ZlibCompressor
   */
  GIOMM_API
  Glib::RefPtr<Gio::ZlibCompressor> wrap(GZlibCompressor* object, bool take_copy = false);
}


#endif /* _GIOMM_ZLIBCOMPRESSOR_H */

