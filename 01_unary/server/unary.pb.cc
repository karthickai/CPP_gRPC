// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: unary.proto

#include "unary.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
namespace unary {
class TranslateRequestDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<TranslateRequest> _instance;
} _TranslateRequest_default_instance_;
class TranslateReplyDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<TranslateReply> _instance;
} _TranslateReply_default_instance_;
}  // namespace unary
static void InitDefaultsscc_info_TranslateReply_unary_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::unary::_TranslateReply_default_instance_;
    new (ptr) ::unary::TranslateReply();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::unary::TranslateReply::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_TranslateReply_unary_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_TranslateReply_unary_2eproto}, {}};

static void InitDefaultsscc_info_TranslateRequest_unary_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::unary::_TranslateRequest_default_instance_;
    new (ptr) ::unary::TranslateRequest();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::unary::TranslateRequest::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_TranslateRequest_unary_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_TranslateRequest_unary_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_unary_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_unary_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_unary_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_unary_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::unary::TranslateRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::unary::TranslateRequest, originalmsg_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::unary::TranslateReply, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::unary::TranslateReply, translatedmsg_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::unary::TranslateRequest)},
  { 6, -1, sizeof(::unary::TranslateReply)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::unary::_TranslateRequest_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::unary::_TranslateReply_default_instance_),
};

const char descriptor_table_protodef_unary_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\013unary.proto\022\005unary\"\'\n\020TranslateRequest"
  "\022\023\n\013originalMsg\030\001 \001(\t\"\'\n\016TranslateReply\022"
  "\025\n\rtranslatedMsg\030\001 \001(\t2M\n\tTranslate\022@\n\014T"
  "ranslateMsg\022\027.unary.TranslateRequest\032\025.u"
  "nary.TranslateReply\"\000b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_unary_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_unary_2eproto_sccs[2] = {
  &scc_info_TranslateReply_unary_2eproto.base,
  &scc_info_TranslateRequest_unary_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_unary_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_unary_2eproto = {
  false, false, descriptor_table_protodef_unary_2eproto, "unary.proto", 189,
  &descriptor_table_unary_2eproto_once, descriptor_table_unary_2eproto_sccs, descriptor_table_unary_2eproto_deps, 2, 0,
  schemas, file_default_instances, TableStruct_unary_2eproto::offsets,
  file_level_metadata_unary_2eproto, 2, file_level_enum_descriptors_unary_2eproto, file_level_service_descriptors_unary_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_unary_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_unary_2eproto)), true);
namespace unary {

// ===================================================================

void TranslateRequest::InitAsDefaultInstance() {
}
class TranslateRequest::_Internal {
 public:
};

TranslateRequest::TranslateRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:unary.TranslateRequest)
}
TranslateRequest::TranslateRequest(const TranslateRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  originalmsg_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_originalmsg().empty()) {
    originalmsg_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_originalmsg(),
      GetArena());
  }
  // @@protoc_insertion_point(copy_constructor:unary.TranslateRequest)
}

void TranslateRequest::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_TranslateRequest_unary_2eproto.base);
  originalmsg_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

TranslateRequest::~TranslateRequest() {
  // @@protoc_insertion_point(destructor:unary.TranslateRequest)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void TranslateRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  originalmsg_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void TranslateRequest::ArenaDtor(void* object) {
  TranslateRequest* _this = reinterpret_cast< TranslateRequest* >(object);
  (void)_this;
}
void TranslateRequest::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void TranslateRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const TranslateRequest& TranslateRequest::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_TranslateRequest_unary_2eproto.base);
  return *internal_default_instance();
}


void TranslateRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:unary.TranslateRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  originalmsg_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* TranslateRequest::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string originalMsg = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_originalmsg();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "unary.TranslateRequest.originalMsg"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* TranslateRequest::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:unary.TranslateRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string originalMsg = 1;
  if (this->originalmsg().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_originalmsg().data(), static_cast<int>(this->_internal_originalmsg().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "unary.TranslateRequest.originalMsg");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_originalmsg(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:unary.TranslateRequest)
  return target;
}

size_t TranslateRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:unary.TranslateRequest)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string originalMsg = 1;
  if (this->originalmsg().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_originalmsg());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void TranslateRequest::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:unary.TranslateRequest)
  GOOGLE_DCHECK_NE(&from, this);
  const TranslateRequest* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<TranslateRequest>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:unary.TranslateRequest)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:unary.TranslateRequest)
    MergeFrom(*source);
  }
}

void TranslateRequest::MergeFrom(const TranslateRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:unary.TranslateRequest)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.originalmsg().size() > 0) {
    _internal_set_originalmsg(from._internal_originalmsg());
  }
}

void TranslateRequest::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:unary.TranslateRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TranslateRequest::CopyFrom(const TranslateRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:unary.TranslateRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TranslateRequest::IsInitialized() const {
  return true;
}

void TranslateRequest::InternalSwap(TranslateRequest* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  originalmsg_.Swap(&other->originalmsg_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}

::PROTOBUF_NAMESPACE_ID::Metadata TranslateRequest::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void TranslateReply::InitAsDefaultInstance() {
}
class TranslateReply::_Internal {
 public:
};

TranslateReply::TranslateReply(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:unary.TranslateReply)
}
TranslateReply::TranslateReply(const TranslateReply& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  translatedmsg_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_translatedmsg().empty()) {
    translatedmsg_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_translatedmsg(),
      GetArena());
  }
  // @@protoc_insertion_point(copy_constructor:unary.TranslateReply)
}

void TranslateReply::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_TranslateReply_unary_2eproto.base);
  translatedmsg_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

TranslateReply::~TranslateReply() {
  // @@protoc_insertion_point(destructor:unary.TranslateReply)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void TranslateReply::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  translatedmsg_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void TranslateReply::ArenaDtor(void* object) {
  TranslateReply* _this = reinterpret_cast< TranslateReply* >(object);
  (void)_this;
}
void TranslateReply::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void TranslateReply::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const TranslateReply& TranslateReply::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_TranslateReply_unary_2eproto.base);
  return *internal_default_instance();
}


void TranslateReply::Clear() {
// @@protoc_insertion_point(message_clear_start:unary.TranslateReply)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  translatedmsg_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* TranslateReply::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string translatedMsg = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_translatedmsg();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "unary.TranslateReply.translatedMsg"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* TranslateReply::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:unary.TranslateReply)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string translatedMsg = 1;
  if (this->translatedmsg().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_translatedmsg().data(), static_cast<int>(this->_internal_translatedmsg().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "unary.TranslateReply.translatedMsg");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_translatedmsg(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:unary.TranslateReply)
  return target;
}

size_t TranslateReply::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:unary.TranslateReply)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string translatedMsg = 1;
  if (this->translatedmsg().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_translatedmsg());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void TranslateReply::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:unary.TranslateReply)
  GOOGLE_DCHECK_NE(&from, this);
  const TranslateReply* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<TranslateReply>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:unary.TranslateReply)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:unary.TranslateReply)
    MergeFrom(*source);
  }
}

void TranslateReply::MergeFrom(const TranslateReply& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:unary.TranslateReply)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.translatedmsg().size() > 0) {
    _internal_set_translatedmsg(from._internal_translatedmsg());
  }
}

void TranslateReply::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:unary.TranslateReply)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TranslateReply::CopyFrom(const TranslateReply& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:unary.TranslateReply)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TranslateReply::IsInitialized() const {
  return true;
}

void TranslateReply::InternalSwap(TranslateReply* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  translatedmsg_.Swap(&other->translatedmsg_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}

::PROTOBUF_NAMESPACE_ID::Metadata TranslateReply::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace unary
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::unary::TranslateRequest* Arena::CreateMaybeMessage< ::unary::TranslateRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::unary::TranslateRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::unary::TranslateReply* Arena::CreateMaybeMessage< ::unary::TranslateReply >(Arena* arena) {
  return Arena::CreateMessageInternal< ::unary::TranslateReply >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
