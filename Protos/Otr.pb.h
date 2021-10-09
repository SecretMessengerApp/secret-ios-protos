// Generated by the protocol buffer compiler.  DO NOT EDIT!

#import <ProtocolBuffers/ProtocolBuffers.h>

// @@protoc_insertion_point(imports)

@class DescriptorProto;
@class DescriptorProtoBuilder;
@class DescriptorProtoExtensionRange;
@class DescriptorProtoExtensionRangeBuilder;
@class EnumDescriptorProto;
@class EnumDescriptorProtoBuilder;
@class EnumOptions;
@class EnumOptionsBuilder;
@class EnumValueDescriptorProto;
@class EnumValueDescriptorProtoBuilder;
@class EnumValueOptions;
@class EnumValueOptionsBuilder;
@class FieldDescriptorProto;
@class FieldDescriptorProtoBuilder;
@class FieldOptions;
@class FieldOptionsBuilder;
@class FileDescriptorProto;
@class FileDescriptorProtoBuilder;
@class FileDescriptorSet;
@class FileDescriptorSetBuilder;
@class FileOptions;
@class FileOptionsBuilder;
@class MessageOptions;
@class MessageOptionsBuilder;
@class MethodDescriptorProto;
@class MethodDescriptorProtoBuilder;
@class MethodOptions;
@class MethodOptionsBuilder;
@class ObjectiveCFileOptions;
@class ObjectiveCFileOptionsBuilder;
@class OneofDescriptorProto;
@class OneofDescriptorProtoBuilder;
@class ServiceDescriptorProto;
@class ServiceDescriptorProtoBuilder;
@class ServiceOptions;
@class ServiceOptionsBuilder;
@class SourceCodeInfo;
@class SourceCodeInfoBuilder;
@class SourceCodeInfoLocation;
@class SourceCodeInfoLocationBuilder;
@class UninterpretedOption;
@class UninterpretedOptionBuilder;
@class UninterpretedOptionNamePart;
@class UninterpretedOptionNamePartBuilder;
@class ZMClientEntry;
@class ZMClientEntryBuilder;
@class ZMClientId;
@class ZMClientIdBuilder;
@class ZMNewOtrMessage;
@class ZMNewOtrMessageBuilder;
@class ZMOtrAssetMeta;
@class ZMOtrAssetMetaBuilder;
@class ZMUserEntry;
@class ZMUserEntryBuilder;
@class ZMUserId;
@class ZMUserIdBuilder;



@interface ZMOtrRoot : NSObject {
}
+ (PBExtensionRegistry*) extensionRegistry;
+ (void) registerAllExtensions:(PBMutableExtensionRegistry*) registry;
@end

#define UserId_uuid @"uuid"
@interface ZMUserId : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasUuid_:1;
  NSData* uuid;
}
- (BOOL) hasUuid;
@property (readonly, strong) NSData* uuid;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (ZMUserIdBuilder*) builder;
+ (ZMUserIdBuilder*) builder;
+ (ZMUserIdBuilder*) builderWithPrototype:(ZMUserId*) prototype;
- (ZMUserIdBuilder*) toBuilder;

+ (ZMUserId*) parseFromData:(NSData*) data;
+ (ZMUserId*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (ZMUserId*) parseFromInputStream:(NSInputStream*) input;
+ (ZMUserId*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (ZMUserId*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (ZMUserId*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface ZMUserIdBuilder : PBGeneratedMessageBuilder {
@private
  ZMUserId* resultUserId;
}

- (ZMUserId*) defaultInstance;

- (ZMUserIdBuilder*) clear;
- (ZMUserIdBuilder*) clone;

- (ZMUserId*) build;
- (ZMUserId*) buildPartial;

- (ZMUserIdBuilder*) mergeFrom:(ZMUserId*) other;
- (ZMUserIdBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (ZMUserIdBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasUuid;
- (NSData*) uuid;
- (ZMUserIdBuilder*) setUuid:(NSData*) value;
- (ZMUserIdBuilder*) clearUuid;
@end

#define ClientId_client @"client"
@interface ZMClientId : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasClient_:1;
  UInt64 client;
}
- (BOOL) hasClient;
@property (readonly) UInt64 client;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (ZMClientIdBuilder*) builder;
+ (ZMClientIdBuilder*) builder;
+ (ZMClientIdBuilder*) builderWithPrototype:(ZMClientId*) prototype;
- (ZMClientIdBuilder*) toBuilder;

+ (ZMClientId*) parseFromData:(NSData*) data;
+ (ZMClientId*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (ZMClientId*) parseFromInputStream:(NSInputStream*) input;
+ (ZMClientId*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (ZMClientId*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (ZMClientId*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface ZMClientIdBuilder : PBGeneratedMessageBuilder {
@private
  ZMClientId* resultClientId;
}

- (ZMClientId*) defaultInstance;

- (ZMClientIdBuilder*) clear;
- (ZMClientIdBuilder*) clone;

- (ZMClientId*) build;
- (ZMClientId*) buildPartial;

- (ZMClientIdBuilder*) mergeFrom:(ZMClientId*) other;
- (ZMClientIdBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (ZMClientIdBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasClient;
- (UInt64) client;
- (ZMClientIdBuilder*) setClient:(UInt64) value;
- (ZMClientIdBuilder*) clearClient;
@end

#define ClientEntry_client @"client"
#define ClientEntry_text @"text"
@interface ZMClientEntry : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasClient_:1;
  BOOL hasText_:1;
  ZMClientId* client;
  NSData* text;
}
- (BOOL) hasClient;
- (BOOL) hasText;
@property (readonly, strong) ZMClientId* client;
@property (readonly, strong) NSData* text;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (ZMClientEntryBuilder*) builder;
+ (ZMClientEntryBuilder*) builder;
+ (ZMClientEntryBuilder*) builderWithPrototype:(ZMClientEntry*) prototype;
- (ZMClientEntryBuilder*) toBuilder;

+ (ZMClientEntry*) parseFromData:(NSData*) data;
+ (ZMClientEntry*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (ZMClientEntry*) parseFromInputStream:(NSInputStream*) input;
+ (ZMClientEntry*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (ZMClientEntry*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (ZMClientEntry*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface ZMClientEntryBuilder : PBGeneratedMessageBuilder {
@private
  ZMClientEntry* resultClientEntry;
}

- (ZMClientEntry*) defaultInstance;

- (ZMClientEntryBuilder*) clear;
- (ZMClientEntryBuilder*) clone;

- (ZMClientEntry*) build;
- (ZMClientEntry*) buildPartial;

- (ZMClientEntryBuilder*) mergeFrom:(ZMClientEntry*) other;
- (ZMClientEntryBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (ZMClientEntryBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasClient;
- (ZMClientId*) client;
- (ZMClientEntryBuilder*) setClient:(ZMClientId*) value;
- (ZMClientEntryBuilder*) setClientBuilder:(ZMClientIdBuilder*) builderForValue;
- (ZMClientEntryBuilder*) mergeClient:(ZMClientId*) value;
- (ZMClientEntryBuilder*) clearClient;

- (BOOL) hasText;
- (NSData*) text;
- (ZMClientEntryBuilder*) setText:(NSData*) value;
- (ZMClientEntryBuilder*) clearText;
@end

#define UserEntry_user @"user"
#define UserEntry_clients @"clients"
@interface ZMUserEntry : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasUser_:1;
  ZMUserId* user;
  NSMutableArray * clientsArray;
}
- (BOOL) hasUser;
@property (readonly, strong) ZMUserId* user;
@property (readonly, strong) NSArray<ZMClientEntry*> * clients;
- (ZMClientEntry*)clientsAtIndex:(NSUInteger)index;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (ZMUserEntryBuilder*) builder;
+ (ZMUserEntryBuilder*) builder;
+ (ZMUserEntryBuilder*) builderWithPrototype:(ZMUserEntry*) prototype;
- (ZMUserEntryBuilder*) toBuilder;

+ (ZMUserEntry*) parseFromData:(NSData*) data;
+ (ZMUserEntry*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (ZMUserEntry*) parseFromInputStream:(NSInputStream*) input;
+ (ZMUserEntry*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (ZMUserEntry*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (ZMUserEntry*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface ZMUserEntryBuilder : PBGeneratedMessageBuilder {
@private
  ZMUserEntry* resultUserEntry;
}

- (ZMUserEntry*) defaultInstance;

- (ZMUserEntryBuilder*) clear;
- (ZMUserEntryBuilder*) clone;

- (ZMUserEntry*) build;
- (ZMUserEntry*) buildPartial;

- (ZMUserEntryBuilder*) mergeFrom:(ZMUserEntry*) other;
- (ZMUserEntryBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (ZMUserEntryBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasUser;
- (ZMUserId*) user;
- (ZMUserEntryBuilder*) setUser:(ZMUserId*) value;
- (ZMUserEntryBuilder*) setUserBuilder:(ZMUserIdBuilder*) builderForValue;
- (ZMUserEntryBuilder*) mergeUser:(ZMUserId*) value;
- (ZMUserEntryBuilder*) clearUser;

- (NSMutableArray<ZMClientEntry*> *)clients;
- (ZMClientEntry*)clientsAtIndex:(NSUInteger)index;
- (ZMUserEntryBuilder *)addClients:(ZMClientEntry*)value;
- (ZMUserEntryBuilder *)setClientsArray:(NSArray<ZMClientEntry*> *)array;
- (ZMUserEntryBuilder *)clearClients;
@end

#define NewOtrMessage_sender @"sender"
#define NewOtrMessage_recipients @"recipients"
#define NewOtrMessage_native_push @"nativePush"
#define NewOtrMessage_blob @"blob"
#define NewOtrMessage_unblock @"unblock"
#define NewOtrMessage_video @"video"
#define NewOtrMessage_call_user_id @"callUserId"
#define NewOtrMessage_call_user_name @"callUserName"
#define NewOtrMessage_call_conversation_id @"callConversationId"
#define NewOtrMessage_call_type @"callType"
@interface ZMNewOtrMessage : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasNativePush_:1;
  BOOL hasUnblock_:1;
  BOOL hasVideo_:1;
  BOOL hasCallUserId_:1;
  BOOL hasCallUserName_:1;
  BOOL hasCallConversationId_:1;
  BOOL hasCallType_:1;
  BOOL hasSender_:1;
  BOOL hasBlob_:1;
  BOOL nativePush_:1;
  BOOL unblock_:1;
  BOOL video_:1;
  NSString* callUserId;
  NSString* callUserName;
  NSString* callConversationId;
  NSString* callType;
  ZMClientId* sender;
  NSData* blob;
  NSMutableArray * recipientsArray;
}
- (BOOL) hasSender;
- (BOOL) hasNativePush;
- (BOOL) hasBlob;
- (BOOL) hasUnblock;
- (BOOL) hasVideo;
- (BOOL) hasCallUserId;
- (BOOL) hasCallUserName;
- (BOOL) hasCallConversationId;
- (BOOL) hasCallType;
@property (readonly, strong) ZMClientId* sender;
@property (readonly, strong) NSArray<ZMUserEntry*> * recipients;
- (BOOL) nativePush;
@property (readonly, strong) NSData* blob;
- (BOOL) unblock;
- (BOOL) video;
@property (readonly, strong) NSString* callUserId;
@property (readonly, strong) NSString* callUserName;
@property (readonly, strong) NSString* callConversationId;
@property (readonly, strong) NSString* callType;
- (ZMUserEntry*)recipientsAtIndex:(NSUInteger)index;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (ZMNewOtrMessageBuilder*) builder;
+ (ZMNewOtrMessageBuilder*) builder;
+ (ZMNewOtrMessageBuilder*) builderWithPrototype:(ZMNewOtrMessage*) prototype;
- (ZMNewOtrMessageBuilder*) toBuilder;

+ (ZMNewOtrMessage*) parseFromData:(NSData*) data;
+ (ZMNewOtrMessage*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (ZMNewOtrMessage*) parseFromInputStream:(NSInputStream*) input;
+ (ZMNewOtrMessage*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (ZMNewOtrMessage*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (ZMNewOtrMessage*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface ZMNewOtrMessageBuilder : PBGeneratedMessageBuilder {
@private
  ZMNewOtrMessage* resultNewOtrMessage;
}

- (ZMNewOtrMessage*) defaultInstance;

- (ZMNewOtrMessageBuilder*) clear;
- (ZMNewOtrMessageBuilder*) clone;

- (ZMNewOtrMessage*) build;
- (ZMNewOtrMessage*) buildPartial;

- (ZMNewOtrMessageBuilder*) mergeFrom:(ZMNewOtrMessage*) other;
- (ZMNewOtrMessageBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (ZMNewOtrMessageBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasSender;
- (ZMClientId*) sender;
- (ZMNewOtrMessageBuilder*) setSender:(ZMClientId*) value;
- (ZMNewOtrMessageBuilder*) setSenderBuilder:(ZMClientIdBuilder*) builderForValue;
- (ZMNewOtrMessageBuilder*) mergeSender:(ZMClientId*) value;
- (ZMNewOtrMessageBuilder*) clearSender;

- (NSMutableArray<ZMUserEntry*> *)recipients;
- (ZMUserEntry*)recipientsAtIndex:(NSUInteger)index;
- (ZMNewOtrMessageBuilder *)addRecipients:(ZMUserEntry*)value;
- (ZMNewOtrMessageBuilder *)setRecipientsArray:(NSArray<ZMUserEntry*> *)array;
- (ZMNewOtrMessageBuilder *)clearRecipients;

- (BOOL) hasNativePush;
- (BOOL) nativePush;
- (ZMNewOtrMessageBuilder*) setNativePush:(BOOL) value;
- (ZMNewOtrMessageBuilder*) clearNativePush;

- (BOOL) hasBlob;
- (NSData*) blob;
- (ZMNewOtrMessageBuilder*) setBlob:(NSData*) value;
- (ZMNewOtrMessageBuilder*) clearBlob;

- (BOOL) hasUnblock;
- (BOOL) unblock;
- (ZMNewOtrMessageBuilder*) setUnblock:(BOOL) value;
- (ZMNewOtrMessageBuilder*) clearUnblock;

- (BOOL) hasVideo;
- (BOOL) video;
- (ZMNewOtrMessageBuilder*) setVideo:(BOOL) value;
- (ZMNewOtrMessageBuilder*) clearVideo;

- (BOOL) hasCallUserId;
- (NSString*) callUserId;
- (ZMNewOtrMessageBuilder*) setCallUserId:(NSString*) value;
- (ZMNewOtrMessageBuilder*) clearCallUserId;

- (BOOL) hasCallUserName;
- (NSString*) callUserName;
- (ZMNewOtrMessageBuilder*) setCallUserName:(NSString*) value;
- (ZMNewOtrMessageBuilder*) clearCallUserName;

- (BOOL) hasCallConversationId;
- (NSString*) callConversationId;
- (ZMNewOtrMessageBuilder*) setCallConversationId:(NSString*) value;
- (ZMNewOtrMessageBuilder*) clearCallConversationId;

- (BOOL) hasCallType;
- (NSString*) callType;
- (ZMNewOtrMessageBuilder*) setCallType:(NSString*) value;
- (ZMNewOtrMessageBuilder*) clearCallType;
@end

#define OtrAssetMeta_sender @"sender"
#define OtrAssetMeta_recipients @"recipients"
#define OtrAssetMeta_isInline @"isInline"
#define OtrAssetMeta_native_push @"nativePush"
@interface ZMOtrAssetMeta : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasIsInline_:1;
  BOOL hasNativePush_:1;
  BOOL hasSender_:1;
  BOOL isInline_:1;
  BOOL nativePush_:1;
  ZMClientId* sender;
  NSMutableArray * recipientsArray;
}
- (BOOL) hasSender;
- (BOOL) hasIsInline;
- (BOOL) hasNativePush;
@property (readonly, strong) ZMClientId* sender;
@property (readonly, strong) NSArray<ZMUserEntry*> * recipients;
- (BOOL) isInline;
- (BOOL) nativePush;
- (ZMUserEntry*)recipientsAtIndex:(NSUInteger)index;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (ZMOtrAssetMetaBuilder*) builder;
+ (ZMOtrAssetMetaBuilder*) builder;
+ (ZMOtrAssetMetaBuilder*) builderWithPrototype:(ZMOtrAssetMeta*) prototype;
- (ZMOtrAssetMetaBuilder*) toBuilder;

+ (ZMOtrAssetMeta*) parseFromData:(NSData*) data;
+ (ZMOtrAssetMeta*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (ZMOtrAssetMeta*) parseFromInputStream:(NSInputStream*) input;
+ (ZMOtrAssetMeta*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (ZMOtrAssetMeta*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (ZMOtrAssetMeta*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface ZMOtrAssetMetaBuilder : PBGeneratedMessageBuilder {
@private
  ZMOtrAssetMeta* resultOtrAssetMeta;
}

- (ZMOtrAssetMeta*) defaultInstance;

- (ZMOtrAssetMetaBuilder*) clear;
- (ZMOtrAssetMetaBuilder*) clone;

- (ZMOtrAssetMeta*) build;
- (ZMOtrAssetMeta*) buildPartial;

- (ZMOtrAssetMetaBuilder*) mergeFrom:(ZMOtrAssetMeta*) other;
- (ZMOtrAssetMetaBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (ZMOtrAssetMetaBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasSender;
- (ZMClientId*) sender;
- (ZMOtrAssetMetaBuilder*) setSender:(ZMClientId*) value;
- (ZMOtrAssetMetaBuilder*) setSenderBuilder:(ZMClientIdBuilder*) builderForValue;
- (ZMOtrAssetMetaBuilder*) mergeSender:(ZMClientId*) value;
- (ZMOtrAssetMetaBuilder*) clearSender;

- (NSMutableArray<ZMUserEntry*> *)recipients;
- (ZMUserEntry*)recipientsAtIndex:(NSUInteger)index;
- (ZMOtrAssetMetaBuilder *)addRecipients:(ZMUserEntry*)value;
- (ZMOtrAssetMetaBuilder *)setRecipientsArray:(NSArray<ZMUserEntry*> *)array;
- (ZMOtrAssetMetaBuilder *)clearRecipients;

- (BOOL) hasIsInline;
- (BOOL) isInline;
- (ZMOtrAssetMetaBuilder*) setIsInline:(BOOL) value;
- (ZMOtrAssetMetaBuilder*) clearIsInline;

- (BOOL) hasNativePush;
- (BOOL) nativePush;
- (ZMOtrAssetMetaBuilder*) setNativePush:(BOOL) value;
- (ZMOtrAssetMetaBuilder*) clearNativePush;
@end


// @@protoc_insertion_point(global_scope)