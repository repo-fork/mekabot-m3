// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: dynamatics.proto

#ifndef PROTOBUF_dynamatics_2eproto__INCLUDED
#define PROTOBUF_dynamatics_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "component_base.pb.h"
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_dynamatics_2eproto();
void protobuf_AssignDesc_dynamatics_2eproto();
void protobuf_ShutdownFile_dynamatics_2eproto();

class M3DynamaticsStatus;
class M3DynamaticsParam;
class M3DynamaticsCommand;

// ===================================================================

class M3DynamaticsStatus : public ::google::protobuf::Message {
 public:
  M3DynamaticsStatus();
  virtual ~M3DynamaticsStatus();

  M3DynamaticsStatus(const M3DynamaticsStatus& from);

  inline M3DynamaticsStatus& operator=(const M3DynamaticsStatus& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const M3DynamaticsStatus& default_instance();

  void Swap(M3DynamaticsStatus* other);

  // implements Message ----------------------------------------------

  M3DynamaticsStatus* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const M3DynamaticsStatus& from);
  void MergeFrom(const M3DynamaticsStatus& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional .M3BaseStatus base = 1;
  inline bool has_base() const;
  inline void clear_base();
  static const int kBaseFieldNumber = 1;
  inline const ::M3BaseStatus& base() const;
  inline ::M3BaseStatus* mutable_base();
  inline ::M3BaseStatus* release_base();
  inline void set_allocated_base(::M3BaseStatus* base);

  // repeated double end_pos = 2;
  inline int end_pos_size() const;
  inline void clear_end_pos();
  static const int kEndPosFieldNumber = 2;
  inline double end_pos(int index) const;
  inline void set_end_pos(int index, double value);
  inline void add_end_pos(double value);
  inline const ::google::protobuf::RepeatedField< double >&
      end_pos() const;
  inline ::google::protobuf::RepeatedField< double >*
      mutable_end_pos();

  // repeated double end_rot = 3;
  inline int end_rot_size() const;
  inline void clear_end_rot();
  static const int kEndRotFieldNumber = 3;
  inline double end_rot(int index) const;
  inline void set_end_rot(int index, double value);
  inline void add_end_rot(double value);
  inline const ::google::protobuf::RepeatedField< double >&
      end_rot() const;
  inline ::google::protobuf::RepeatedField< double >*
      mutable_end_rot();

  // repeated double J = 4;
  inline int j_size() const;
  inline void clear_j();
  static const int kJFieldNumber = 4;
  inline double j(int index) const;
  inline void set_j(int index, double value);
  inline void add_j(double value);
  inline const ::google::protobuf::RepeatedField< double >&
      j() const;
  inline ::google::protobuf::RepeatedField< double >*
      mutable_j();

  // repeated double G = 5;
  inline int g_size() const;
  inline void clear_g();
  static const int kGFieldNumber = 5;
  inline double g(int index) const;
  inline void set_g(int index, double value);
  inline void add_g(double value);
  inline const ::google::protobuf::RepeatedField< double >&
      g() const;
  inline ::google::protobuf::RepeatedField< double >*
      mutable_g();

  // repeated double end_twist = 6;
  inline int end_twist_size() const;
  inline void clear_end_twist();
  static const int kEndTwistFieldNumber = 6;
  inline double end_twist(int index) const;
  inline void set_end_twist(int index, double value);
  inline void add_end_twist(double value);
  inline const ::google::protobuf::RepeatedField< double >&
      end_twist() const;
  inline ::google::protobuf::RepeatedField< double >*
      mutable_end_twist();

  // repeated double base_wrench = 7;
  inline int base_wrench_size() const;
  inline void clear_base_wrench();
  static const int kBaseWrenchFieldNumber = 7;
  inline double base_wrench(int index) const;
  inline void set_base_wrench(int index, double value);
  inline void add_base_wrench(double value);
  inline const ::google::protobuf::RepeatedField< double >&
      base_wrench() const;
  inline ::google::protobuf::RepeatedField< double >*
      mutable_base_wrench();

  // repeated double child_wrench = 8;
  inline int child_wrench_size() const;
  inline void clear_child_wrench();
  static const int kChildWrenchFieldNumber = 8;
  inline double child_wrench(int index) const;
  inline void set_child_wrench(int index, double value);
  inline void add_child_wrench(double value);
  inline const ::google::protobuf::RepeatedField< double >&
      child_wrench() const;
  inline ::google::protobuf::RepeatedField< double >*
      mutable_child_wrench();

  // @@protoc_insertion_point(class_scope:M3DynamaticsStatus)
 private:
  inline void set_has_base();
  inline void clear_has_base();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::M3BaseStatus* base_;
  ::google::protobuf::RepeatedField< double > end_pos_;
  ::google::protobuf::RepeatedField< double > end_rot_;
  ::google::protobuf::RepeatedField< double > j_;
  ::google::protobuf::RepeatedField< double > g_;
  ::google::protobuf::RepeatedField< double > end_twist_;
  ::google::protobuf::RepeatedField< double > base_wrench_;
  ::google::protobuf::RepeatedField< double > child_wrench_;
  friend void  protobuf_AddDesc_dynamatics_2eproto();
  friend void protobuf_AssignDesc_dynamatics_2eproto();
  friend void protobuf_ShutdownFile_dynamatics_2eproto();

  void InitAsDefaultInstance();
  static M3DynamaticsStatus* default_instance_;
};
// -------------------------------------------------------------------

class M3DynamaticsParam : public ::google::protobuf::Message {
 public:
  M3DynamaticsParam();
  virtual ~M3DynamaticsParam();

  M3DynamaticsParam(const M3DynamaticsParam& from);

  inline M3DynamaticsParam& operator=(const M3DynamaticsParam& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const M3DynamaticsParam& default_instance();

  void Swap(M3DynamaticsParam* other);

  // implements Message ----------------------------------------------

  M3DynamaticsParam* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const M3DynamaticsParam& from);
  void MergeFrom(const M3DynamaticsParam& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional double payload_mass = 1;
  inline bool has_payload_mass() const;
  inline void clear_payload_mass();
  static const int kPayloadMassFieldNumber = 1;
  inline double payload_mass() const;
  inline void set_payload_mass(double value);

  // repeated double payload_com = 2;
  inline int payload_com_size() const;
  inline void clear_payload_com();
  static const int kPayloadComFieldNumber = 2;
  inline double payload_com(int index) const;
  inline void set_payload_com(int index, double value);
  inline void add_payload_com(double value);
  inline const ::google::protobuf::RepeatedField< double >&
      payload_com() const;
  inline ::google::protobuf::RepeatedField< double >*
      mutable_payload_com();

  // repeated double payload_inertia = 3;
  inline int payload_inertia_size() const;
  inline void clear_payload_inertia();
  static const int kPayloadInertiaFieldNumber = 3;
  inline double payload_inertia(int index) const;
  inline void set_payload_inertia(int index, double value);
  inline void add_payload_inertia(double value);
  inline const ::google::protobuf::RepeatedField< double >&
      payload_inertia() const;
  inline ::google::protobuf::RepeatedField< double >*
      mutable_payload_inertia();

  // optional bool use_velocities = 4;
  inline bool has_use_velocities() const;
  inline void clear_use_velocities();
  static const int kUseVelocitiesFieldNumber = 4;
  inline bool use_velocities() const;
  inline void set_use_velocities(bool value);

  // optional bool use_accelerations = 5;
  inline bool has_use_accelerations() const;
  inline void clear_use_accelerations();
  static const int kUseAccelerationsFieldNumber = 5;
  inline bool use_accelerations() const;
  inline void set_use_accelerations(bool value);

  // @@protoc_insertion_point(class_scope:M3DynamaticsParam)
 private:
  inline void set_has_payload_mass();
  inline void clear_has_payload_mass();
  inline void set_has_use_velocities();
  inline void clear_has_use_velocities();
  inline void set_has_use_accelerations();
  inline void clear_has_use_accelerations();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  double payload_mass_;
  ::google::protobuf::RepeatedField< double > payload_com_;
  ::google::protobuf::RepeatedField< double > payload_inertia_;
  bool use_velocities_;
  bool use_accelerations_;
  friend void  protobuf_AddDesc_dynamatics_2eproto();
  friend void protobuf_AssignDesc_dynamatics_2eproto();
  friend void protobuf_ShutdownFile_dynamatics_2eproto();

  void InitAsDefaultInstance();
  static M3DynamaticsParam* default_instance_;
};
// -------------------------------------------------------------------

class M3DynamaticsCommand : public ::google::protobuf::Message {
 public:
  M3DynamaticsCommand();
  virtual ~M3DynamaticsCommand();

  M3DynamaticsCommand(const M3DynamaticsCommand& from);

  inline M3DynamaticsCommand& operator=(const M3DynamaticsCommand& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const M3DynamaticsCommand& default_instance();

  void Swap(M3DynamaticsCommand* other);

  // implements Message ----------------------------------------------

  M3DynamaticsCommand* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const M3DynamaticsCommand& from);
  void MergeFrom(const M3DynamaticsCommand& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional double test = 1;
  inline bool has_test() const;
  inline void clear_test();
  static const int kTestFieldNumber = 1;
  inline double test() const;
  inline void set_test(double value);

  // @@protoc_insertion_point(class_scope:M3DynamaticsCommand)
 private:
  inline void set_has_test();
  inline void clear_has_test();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  double test_;
  friend void  protobuf_AddDesc_dynamatics_2eproto();
  friend void protobuf_AssignDesc_dynamatics_2eproto();
  friend void protobuf_ShutdownFile_dynamatics_2eproto();

  void InitAsDefaultInstance();
  static M3DynamaticsCommand* default_instance_;
};
// ===================================================================


// ===================================================================

// M3DynamaticsStatus

// optional .M3BaseStatus base = 1;
inline bool M3DynamaticsStatus::has_base() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void M3DynamaticsStatus::set_has_base() {
  _has_bits_[0] |= 0x00000001u;
}
inline void M3DynamaticsStatus::clear_has_base() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void M3DynamaticsStatus::clear_base() {
  if (base_ != NULL) base_->::M3BaseStatus::Clear();
  clear_has_base();
}
inline const ::M3BaseStatus& M3DynamaticsStatus::base() const {
  // @@protoc_insertion_point(field_get:M3DynamaticsStatus.base)
  return base_ != NULL ? *base_ : *default_instance_->base_;
}
inline ::M3BaseStatus* M3DynamaticsStatus::mutable_base() {
  set_has_base();
  if (base_ == NULL) base_ = new ::M3BaseStatus;
  // @@protoc_insertion_point(field_mutable:M3DynamaticsStatus.base)
  return base_;
}
inline ::M3BaseStatus* M3DynamaticsStatus::release_base() {
  clear_has_base();
  ::M3BaseStatus* temp = base_;
  base_ = NULL;
  return temp;
}
inline void M3DynamaticsStatus::set_allocated_base(::M3BaseStatus* base) {
  delete base_;
  base_ = base;
  if (base) {
    set_has_base();
  } else {
    clear_has_base();
  }
  // @@protoc_insertion_point(field_set_allocated:M3DynamaticsStatus.base)
}

// repeated double end_pos = 2;
inline int M3DynamaticsStatus::end_pos_size() const {
  return end_pos_.size();
}
inline void M3DynamaticsStatus::clear_end_pos() {
  end_pos_.Clear();
}
inline double M3DynamaticsStatus::end_pos(int index) const {
  // @@protoc_insertion_point(field_get:M3DynamaticsStatus.end_pos)
  return end_pos_.Get(index);
}
inline void M3DynamaticsStatus::set_end_pos(int index, double value) {
  end_pos_.Set(index, value);
  // @@protoc_insertion_point(field_set:M3DynamaticsStatus.end_pos)
}
inline void M3DynamaticsStatus::add_end_pos(double value) {
  end_pos_.Add(value);
  // @@protoc_insertion_point(field_add:M3DynamaticsStatus.end_pos)
}
inline const ::google::protobuf::RepeatedField< double >&
M3DynamaticsStatus::end_pos() const {
  // @@protoc_insertion_point(field_list:M3DynamaticsStatus.end_pos)
  return end_pos_;
}
inline ::google::protobuf::RepeatedField< double >*
M3DynamaticsStatus::mutable_end_pos() {
  // @@protoc_insertion_point(field_mutable_list:M3DynamaticsStatus.end_pos)
  return &end_pos_;
}

// repeated double end_rot = 3;
inline int M3DynamaticsStatus::end_rot_size() const {
  return end_rot_.size();
}
inline void M3DynamaticsStatus::clear_end_rot() {
  end_rot_.Clear();
}
inline double M3DynamaticsStatus::end_rot(int index) const {
  // @@protoc_insertion_point(field_get:M3DynamaticsStatus.end_rot)
  return end_rot_.Get(index);
}
inline void M3DynamaticsStatus::set_end_rot(int index, double value) {
  end_rot_.Set(index, value);
  // @@protoc_insertion_point(field_set:M3DynamaticsStatus.end_rot)
}
inline void M3DynamaticsStatus::add_end_rot(double value) {
  end_rot_.Add(value);
  // @@protoc_insertion_point(field_add:M3DynamaticsStatus.end_rot)
}
inline const ::google::protobuf::RepeatedField< double >&
M3DynamaticsStatus::end_rot() const {
  // @@protoc_insertion_point(field_list:M3DynamaticsStatus.end_rot)
  return end_rot_;
}
inline ::google::protobuf::RepeatedField< double >*
M3DynamaticsStatus::mutable_end_rot() {
  // @@protoc_insertion_point(field_mutable_list:M3DynamaticsStatus.end_rot)
  return &end_rot_;
}

// repeated double J = 4;
inline int M3DynamaticsStatus::j_size() const {
  return j_.size();
}
inline void M3DynamaticsStatus::clear_j() {
  j_.Clear();
}
inline double M3DynamaticsStatus::j(int index) const {
  // @@protoc_insertion_point(field_get:M3DynamaticsStatus.J)
  return j_.Get(index);
}
inline void M3DynamaticsStatus::set_j(int index, double value) {
  j_.Set(index, value);
  // @@protoc_insertion_point(field_set:M3DynamaticsStatus.J)
}
inline void M3DynamaticsStatus::add_j(double value) {
  j_.Add(value);
  // @@protoc_insertion_point(field_add:M3DynamaticsStatus.J)
}
inline const ::google::protobuf::RepeatedField< double >&
M3DynamaticsStatus::j() const {
  // @@protoc_insertion_point(field_list:M3DynamaticsStatus.J)
  return j_;
}
inline ::google::protobuf::RepeatedField< double >*
M3DynamaticsStatus::mutable_j() {
  // @@protoc_insertion_point(field_mutable_list:M3DynamaticsStatus.J)
  return &j_;
}

// repeated double G = 5;
inline int M3DynamaticsStatus::g_size() const {
  return g_.size();
}
inline void M3DynamaticsStatus::clear_g() {
  g_.Clear();
}
inline double M3DynamaticsStatus::g(int index) const {
  // @@protoc_insertion_point(field_get:M3DynamaticsStatus.G)
  return g_.Get(index);
}
inline void M3DynamaticsStatus::set_g(int index, double value) {
  g_.Set(index, value);
  // @@protoc_insertion_point(field_set:M3DynamaticsStatus.G)
}
inline void M3DynamaticsStatus::add_g(double value) {
  g_.Add(value);
  // @@protoc_insertion_point(field_add:M3DynamaticsStatus.G)
}
inline const ::google::protobuf::RepeatedField< double >&
M3DynamaticsStatus::g() const {
  // @@protoc_insertion_point(field_list:M3DynamaticsStatus.G)
  return g_;
}
inline ::google::protobuf::RepeatedField< double >*
M3DynamaticsStatus::mutable_g() {
  // @@protoc_insertion_point(field_mutable_list:M3DynamaticsStatus.G)
  return &g_;
}

// repeated double end_twist = 6;
inline int M3DynamaticsStatus::end_twist_size() const {
  return end_twist_.size();
}
inline void M3DynamaticsStatus::clear_end_twist() {
  end_twist_.Clear();
}
inline double M3DynamaticsStatus::end_twist(int index) const {
  // @@protoc_insertion_point(field_get:M3DynamaticsStatus.end_twist)
  return end_twist_.Get(index);
}
inline void M3DynamaticsStatus::set_end_twist(int index, double value) {
  end_twist_.Set(index, value);
  // @@protoc_insertion_point(field_set:M3DynamaticsStatus.end_twist)
}
inline void M3DynamaticsStatus::add_end_twist(double value) {
  end_twist_.Add(value);
  // @@protoc_insertion_point(field_add:M3DynamaticsStatus.end_twist)
}
inline const ::google::protobuf::RepeatedField< double >&
M3DynamaticsStatus::end_twist() const {
  // @@protoc_insertion_point(field_list:M3DynamaticsStatus.end_twist)
  return end_twist_;
}
inline ::google::protobuf::RepeatedField< double >*
M3DynamaticsStatus::mutable_end_twist() {
  // @@protoc_insertion_point(field_mutable_list:M3DynamaticsStatus.end_twist)
  return &end_twist_;
}

// repeated double base_wrench = 7;
inline int M3DynamaticsStatus::base_wrench_size() const {
  return base_wrench_.size();
}
inline void M3DynamaticsStatus::clear_base_wrench() {
  base_wrench_.Clear();
}
inline double M3DynamaticsStatus::base_wrench(int index) const {
  // @@protoc_insertion_point(field_get:M3DynamaticsStatus.base_wrench)
  return base_wrench_.Get(index);
}
inline void M3DynamaticsStatus::set_base_wrench(int index, double value) {
  base_wrench_.Set(index, value);
  // @@protoc_insertion_point(field_set:M3DynamaticsStatus.base_wrench)
}
inline void M3DynamaticsStatus::add_base_wrench(double value) {
  base_wrench_.Add(value);
  // @@protoc_insertion_point(field_add:M3DynamaticsStatus.base_wrench)
}
inline const ::google::protobuf::RepeatedField< double >&
M3DynamaticsStatus::base_wrench() const {
  // @@protoc_insertion_point(field_list:M3DynamaticsStatus.base_wrench)
  return base_wrench_;
}
inline ::google::protobuf::RepeatedField< double >*
M3DynamaticsStatus::mutable_base_wrench() {
  // @@protoc_insertion_point(field_mutable_list:M3DynamaticsStatus.base_wrench)
  return &base_wrench_;
}

// repeated double child_wrench = 8;
inline int M3DynamaticsStatus::child_wrench_size() const {
  return child_wrench_.size();
}
inline void M3DynamaticsStatus::clear_child_wrench() {
  child_wrench_.Clear();
}
inline double M3DynamaticsStatus::child_wrench(int index) const {
  // @@protoc_insertion_point(field_get:M3DynamaticsStatus.child_wrench)
  return child_wrench_.Get(index);
}
inline void M3DynamaticsStatus::set_child_wrench(int index, double value) {
  child_wrench_.Set(index, value);
  // @@protoc_insertion_point(field_set:M3DynamaticsStatus.child_wrench)
}
inline void M3DynamaticsStatus::add_child_wrench(double value) {
  child_wrench_.Add(value);
  // @@protoc_insertion_point(field_add:M3DynamaticsStatus.child_wrench)
}
inline const ::google::protobuf::RepeatedField< double >&
M3DynamaticsStatus::child_wrench() const {
  // @@protoc_insertion_point(field_list:M3DynamaticsStatus.child_wrench)
  return child_wrench_;
}
inline ::google::protobuf::RepeatedField< double >*
M3DynamaticsStatus::mutable_child_wrench() {
  // @@protoc_insertion_point(field_mutable_list:M3DynamaticsStatus.child_wrench)
  return &child_wrench_;
}

// -------------------------------------------------------------------

// M3DynamaticsParam

// optional double payload_mass = 1;
inline bool M3DynamaticsParam::has_payload_mass() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void M3DynamaticsParam::set_has_payload_mass() {
  _has_bits_[0] |= 0x00000001u;
}
inline void M3DynamaticsParam::clear_has_payload_mass() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void M3DynamaticsParam::clear_payload_mass() {
  payload_mass_ = 0;
  clear_has_payload_mass();
}
inline double M3DynamaticsParam::payload_mass() const {
  // @@protoc_insertion_point(field_get:M3DynamaticsParam.payload_mass)
  return payload_mass_;
}
inline void M3DynamaticsParam::set_payload_mass(double value) {
  set_has_payload_mass();
  payload_mass_ = value;
  // @@protoc_insertion_point(field_set:M3DynamaticsParam.payload_mass)
}

// repeated double payload_com = 2;
inline int M3DynamaticsParam::payload_com_size() const {
  return payload_com_.size();
}
inline void M3DynamaticsParam::clear_payload_com() {
  payload_com_.Clear();
}
inline double M3DynamaticsParam::payload_com(int index) const {
  // @@protoc_insertion_point(field_get:M3DynamaticsParam.payload_com)
  return payload_com_.Get(index);
}
inline void M3DynamaticsParam::set_payload_com(int index, double value) {
  payload_com_.Set(index, value);
  // @@protoc_insertion_point(field_set:M3DynamaticsParam.payload_com)
}
inline void M3DynamaticsParam::add_payload_com(double value) {
  payload_com_.Add(value);
  // @@protoc_insertion_point(field_add:M3DynamaticsParam.payload_com)
}
inline const ::google::protobuf::RepeatedField< double >&
M3DynamaticsParam::payload_com() const {
  // @@protoc_insertion_point(field_list:M3DynamaticsParam.payload_com)
  return payload_com_;
}
inline ::google::protobuf::RepeatedField< double >*
M3DynamaticsParam::mutable_payload_com() {
  // @@protoc_insertion_point(field_mutable_list:M3DynamaticsParam.payload_com)
  return &payload_com_;
}

// repeated double payload_inertia = 3;
inline int M3DynamaticsParam::payload_inertia_size() const {
  return payload_inertia_.size();
}
inline void M3DynamaticsParam::clear_payload_inertia() {
  payload_inertia_.Clear();
}
inline double M3DynamaticsParam::payload_inertia(int index) const {
  // @@protoc_insertion_point(field_get:M3DynamaticsParam.payload_inertia)
  return payload_inertia_.Get(index);
}
inline void M3DynamaticsParam::set_payload_inertia(int index, double value) {
  payload_inertia_.Set(index, value);
  // @@protoc_insertion_point(field_set:M3DynamaticsParam.payload_inertia)
}
inline void M3DynamaticsParam::add_payload_inertia(double value) {
  payload_inertia_.Add(value);
  // @@protoc_insertion_point(field_add:M3DynamaticsParam.payload_inertia)
}
inline const ::google::protobuf::RepeatedField< double >&
M3DynamaticsParam::payload_inertia() const {
  // @@protoc_insertion_point(field_list:M3DynamaticsParam.payload_inertia)
  return payload_inertia_;
}
inline ::google::protobuf::RepeatedField< double >*
M3DynamaticsParam::mutable_payload_inertia() {
  // @@protoc_insertion_point(field_mutable_list:M3DynamaticsParam.payload_inertia)
  return &payload_inertia_;
}

// optional bool use_velocities = 4;
inline bool M3DynamaticsParam::has_use_velocities() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void M3DynamaticsParam::set_has_use_velocities() {
  _has_bits_[0] |= 0x00000008u;
}
inline void M3DynamaticsParam::clear_has_use_velocities() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void M3DynamaticsParam::clear_use_velocities() {
  use_velocities_ = false;
  clear_has_use_velocities();
}
inline bool M3DynamaticsParam::use_velocities() const {
  // @@protoc_insertion_point(field_get:M3DynamaticsParam.use_velocities)
  return use_velocities_;
}
inline void M3DynamaticsParam::set_use_velocities(bool value) {
  set_has_use_velocities();
  use_velocities_ = value;
  // @@protoc_insertion_point(field_set:M3DynamaticsParam.use_velocities)
}

// optional bool use_accelerations = 5;
inline bool M3DynamaticsParam::has_use_accelerations() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void M3DynamaticsParam::set_has_use_accelerations() {
  _has_bits_[0] |= 0x00000010u;
}
inline void M3DynamaticsParam::clear_has_use_accelerations() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void M3DynamaticsParam::clear_use_accelerations() {
  use_accelerations_ = false;
  clear_has_use_accelerations();
}
inline bool M3DynamaticsParam::use_accelerations() const {
  // @@protoc_insertion_point(field_get:M3DynamaticsParam.use_accelerations)
  return use_accelerations_;
}
inline void M3DynamaticsParam::set_use_accelerations(bool value) {
  set_has_use_accelerations();
  use_accelerations_ = value;
  // @@protoc_insertion_point(field_set:M3DynamaticsParam.use_accelerations)
}

// -------------------------------------------------------------------

// M3DynamaticsCommand

// optional double test = 1;
inline bool M3DynamaticsCommand::has_test() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void M3DynamaticsCommand::set_has_test() {
  _has_bits_[0] |= 0x00000001u;
}
inline void M3DynamaticsCommand::clear_has_test() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void M3DynamaticsCommand::clear_test() {
  test_ = 0;
  clear_has_test();
}
inline double M3DynamaticsCommand::test() const {
  // @@protoc_insertion_point(field_get:M3DynamaticsCommand.test)
  return test_;
}
inline void M3DynamaticsCommand::set_test(double value) {
  set_has_test();
  test_ = value;
  // @@protoc_insertion_point(field_set:M3DynamaticsCommand.test)
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_dynamatics_2eproto__INCLUDED