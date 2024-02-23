// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: rpcheader.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_rpcheader_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_rpcheader_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3012000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3012004 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_rpcheader_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_rpcheader_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_rpcheader_2eproto;
namespace RPC {
class RpcHeader;
class RpcHeaderDefaultTypeInternal;
extern RpcHeaderDefaultTypeInternal _RpcHeader_default_instance_;
}  // namespace RPC
PROTOBUF_NAMESPACE_OPEN
template<> ::RPC::RpcHeader* Arena::CreateMaybeMessage<::RPC::RpcHeader>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace RPC {

// ===================================================================

class RpcHeader PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:RPC.RpcHeader) */ {
 public:
  inline RpcHeader() : RpcHeader(nullptr) {};
  virtual ~RpcHeader();

  RpcHeader(const RpcHeader& from);
  RpcHeader(RpcHeader&& from) noexcept
    : RpcHeader() {
    *this = ::std::move(from);
  }

  inline RpcHeader& operator=(const RpcHeader& from) {
    CopyFrom(from);
    return *this;
  }
  inline RpcHeader& operator=(RpcHeader&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const RpcHeader& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const RpcHeader* internal_default_instance() {
    return reinterpret_cast<const RpcHeader*>(
               &_RpcHeader_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(RpcHeader& a, RpcHeader& b) {
    a.Swap(&b);
  }
  inline void Swap(RpcHeader* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(RpcHeader* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline RpcHeader* New() const final {
    return CreateMaybeMessage<RpcHeader>(nullptr);
  }

  RpcHeader* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<RpcHeader>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const RpcHeader& from);
  void MergeFrom(const RpcHeader& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(RpcHeader* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "RPC.RpcHeader";
  }
  protected:
  explicit RpcHeader(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_rpcheader_2eproto);
    return ::descriptor_table_rpcheader_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kServiceNameFieldNumber = 1,
    kMethodNameFieldNumber = 2,
    kArgsSizeFieldNumber = 3,
  };
  // bytes service_name = 1;
  void clear_service_name();
  const std::string& service_name() const;
  void set_service_name(const std::string& value);
  void set_service_name(std::string&& value);
  void set_service_name(const char* value);
  void set_service_name(const void* value, size_t size);
  std::string* mutable_service_name();
  std::string* release_service_name();
  void set_allocated_service_name(std::string* service_name);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_service_name();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_service_name(
      std::string* service_name);
  private:
  const std::string& _internal_service_name() const;
  void _internal_set_service_name(const std::string& value);
  std::string* _internal_mutable_service_name();
  public:

  // bytes method_name = 2;
  void clear_method_name();
  const std::string& method_name() const;
  void set_method_name(const std::string& value);
  void set_method_name(std::string&& value);
  void set_method_name(const char* value);
  void set_method_name(const void* value, size_t size);
  std::string* mutable_method_name();
  std::string* release_method_name();
  void set_allocated_method_name(std::string* method_name);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_method_name();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_method_name(
      std::string* method_name);
  private:
  const std::string& _internal_method_name() const;
  void _internal_set_method_name(const std::string& value);
  std::string* _internal_mutable_method_name();
  public:

  // uint32 args_size = 3;
  void clear_args_size();
  ::PROTOBUF_NAMESPACE_ID::uint32 args_size() const;
  void set_args_size(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_args_size() const;
  void _internal_set_args_size(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // @@protoc_insertion_point(class_scope:RPC.RpcHeader)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr service_name_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr method_name_;
  ::PROTOBUF_NAMESPACE_ID::uint32 args_size_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_rpcheader_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// RpcHeader

// bytes service_name = 1;
inline void RpcHeader::clear_service_name() {
  service_name_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& RpcHeader::service_name() const {
  // @@protoc_insertion_point(field_get:RPC.RpcHeader.service_name)
  return _internal_service_name();
}
inline void RpcHeader::set_service_name(const std::string& value) {
  _internal_set_service_name(value);
  // @@protoc_insertion_point(field_set:RPC.RpcHeader.service_name)
}
inline std::string* RpcHeader::mutable_service_name() {
  // @@protoc_insertion_point(field_mutable:RPC.RpcHeader.service_name)
  return _internal_mutable_service_name();
}
inline const std::string& RpcHeader::_internal_service_name() const {
  return service_name_.Get();
}
inline void RpcHeader::_internal_set_service_name(const std::string& value) {
  
  service_name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void RpcHeader::set_service_name(std::string&& value) {
  
  service_name_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:RPC.RpcHeader.service_name)
}
inline void RpcHeader::set_service_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  service_name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:RPC.RpcHeader.service_name)
}
inline void RpcHeader::set_service_name(const void* value,
    size_t size) {
  
  service_name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:RPC.RpcHeader.service_name)
}
inline std::string* RpcHeader::_internal_mutable_service_name() {
  
  return service_name_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* RpcHeader::release_service_name() {
  // @@protoc_insertion_point(field_release:RPC.RpcHeader.service_name)
  return service_name_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void RpcHeader::set_allocated_service_name(std::string* service_name) {
  if (service_name != nullptr) {
    
  } else {
    
  }
  service_name_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), service_name,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:RPC.RpcHeader.service_name)
}
inline std::string* RpcHeader::unsafe_arena_release_service_name() {
  // @@protoc_insertion_point(field_unsafe_arena_release:RPC.RpcHeader.service_name)
  GOOGLE_DCHECK(GetArena() != nullptr);
  
  return service_name_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void RpcHeader::unsafe_arena_set_allocated_service_name(
    std::string* service_name) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (service_name != nullptr) {
    
  } else {
    
  }
  service_name_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      service_name, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:RPC.RpcHeader.service_name)
}

// bytes method_name = 2;
inline void RpcHeader::clear_method_name() {
  method_name_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& RpcHeader::method_name() const {
  // @@protoc_insertion_point(field_get:RPC.RpcHeader.method_name)
  return _internal_method_name();
}
inline void RpcHeader::set_method_name(const std::string& value) {
  _internal_set_method_name(value);
  // @@protoc_insertion_point(field_set:RPC.RpcHeader.method_name)
}
inline std::string* RpcHeader::mutable_method_name() {
  // @@protoc_insertion_point(field_mutable:RPC.RpcHeader.method_name)
  return _internal_mutable_method_name();
}
inline const std::string& RpcHeader::_internal_method_name() const {
  return method_name_.Get();
}
inline void RpcHeader::_internal_set_method_name(const std::string& value) {
  
  method_name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void RpcHeader::set_method_name(std::string&& value) {
  
  method_name_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:RPC.RpcHeader.method_name)
}
inline void RpcHeader::set_method_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  method_name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:RPC.RpcHeader.method_name)
}
inline void RpcHeader::set_method_name(const void* value,
    size_t size) {
  
  method_name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:RPC.RpcHeader.method_name)
}
inline std::string* RpcHeader::_internal_mutable_method_name() {
  
  return method_name_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* RpcHeader::release_method_name() {
  // @@protoc_insertion_point(field_release:RPC.RpcHeader.method_name)
  return method_name_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void RpcHeader::set_allocated_method_name(std::string* method_name) {
  if (method_name != nullptr) {
    
  } else {
    
  }
  method_name_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), method_name,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:RPC.RpcHeader.method_name)
}
inline std::string* RpcHeader::unsafe_arena_release_method_name() {
  // @@protoc_insertion_point(field_unsafe_arena_release:RPC.RpcHeader.method_name)
  GOOGLE_DCHECK(GetArena() != nullptr);
  
  return method_name_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void RpcHeader::unsafe_arena_set_allocated_method_name(
    std::string* method_name) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (method_name != nullptr) {
    
  } else {
    
  }
  method_name_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      method_name, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:RPC.RpcHeader.method_name)
}

// uint32 args_size = 3;
inline void RpcHeader::clear_args_size() {
  args_size_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 RpcHeader::_internal_args_size() const {
  return args_size_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 RpcHeader::args_size() const {
  // @@protoc_insertion_point(field_get:RPC.RpcHeader.args_size)
  return _internal_args_size();
}
inline void RpcHeader::_internal_set_args_size(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  args_size_ = value;
}
inline void RpcHeader::set_args_size(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_args_size(value);
  // @@protoc_insertion_point(field_set:RPC.RpcHeader.args_size)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace RPC

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_rpcheader_2eproto
