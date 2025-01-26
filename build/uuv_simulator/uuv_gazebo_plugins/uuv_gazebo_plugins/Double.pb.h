// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Double.proto

#ifndef PROTOBUF_Double_2eproto__INCLUDED
#define PROTOBUF_Double_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace uuv_gazebo_plugins_msgs {
namespace msgs {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_Double_2eproto();
void protobuf_AssignDesc_Double_2eproto();
void protobuf_ShutdownFile_Double_2eproto();

class Double;

// ===================================================================

class Double : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:uuv_gazebo_plugins_msgs.msgs.Double) */ {
 public:
  Double();
  virtual ~Double();

  Double(const Double& from);

  inline Double& operator=(const Double& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Double& default_instance();

  void Swap(Double* other);

  // implements Message ----------------------------------------------

  inline Double* New() const { return New(NULL); }

  Double* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Double& from);
  void MergeFrom(const Double& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Double* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required double value = 1 [default = 0];
  bool has_value() const;
  void clear_value();
  static const int kValueFieldNumber = 1;
  double value() const;
  void set_value(double value);

  // @@protoc_insertion_point(class_scope:uuv_gazebo_plugins_msgs.msgs.Double)
 private:
  inline void set_has_value();
  inline void clear_has_value();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  double value_;
  friend void  protobuf_AddDesc_Double_2eproto();
  friend void protobuf_AssignDesc_Double_2eproto();
  friend void protobuf_ShutdownFile_Double_2eproto();

  void InitAsDefaultInstance();
  static Double* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Double

// required double value = 1 [default = 0];
inline bool Double::has_value() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Double::set_has_value() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Double::clear_has_value() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Double::clear_value() {
  value_ = 0;
  clear_has_value();
}
inline double Double::value() const {
  // @@protoc_insertion_point(field_get:uuv_gazebo_plugins_msgs.msgs.Double.value)
  return value_;
}
inline void Double::set_value(double value) {
  set_has_value();
  value_ = value;
  // @@protoc_insertion_point(field_set:uuv_gazebo_plugins_msgs.msgs.Double.value)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace uuv_gazebo_plugins_msgs

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_Double_2eproto__INCLUDED
