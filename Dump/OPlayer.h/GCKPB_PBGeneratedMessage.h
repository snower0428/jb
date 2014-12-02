//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GCKPB_PBRootObject.h"

#import "GCKPB_PBMessage.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"

@class GCKPB_PBUnknownFieldSet, GCKPB_PBUnknownFieldSet_Builder, NSDictionary, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface GCKPB_PBGeneratedMessage : GCKPB_PBRootObject <GCKPB_PBMessage, NSCoding, NSCopying, NSMutableCopying>
{
    struct PBGeneratedMessage_Storage *messageStorage_;
    GCKPB_PBUnknownFieldSet_Builder *unknownFields_;
    NSMutableDictionary *extensionMap_;
    NSMutableDictionary *extensionRegistry_;
}

+ (BOOL)accessInstanceVariablesDirectly;
+ (BOOL)resolveInstanceMethod:(SEL)arg1;
+ (id)builderWithPrototype:(id)arg1;
+ (id)builder;
+ (id)parseDelimitedFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
+ (id)parseDelimitedFromCodedInputStream:(id)arg1;
+ (id)parseFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
+ (id)parseFromCodedInputStream:(id)arg1;
+ (id)parseFromInputStream:(id)arg1 extensionRegistry:(id)arg2;
+ (id)parseFromInputStream:(id)arg1;
+ (id)parseFromData:(id)arg1 extensionRegistry:(id)arg2;
+ (id)parseFromData:(id)arg1;
+ (id)defaultInstance;
+ (id)descriptor;
+ (id)allocAsDefaultInstance;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)initialize;
@property(retain, nonatomic) NSDictionary *extensionRegistry; // @synthesize extensionRegistry=extensionRegistry_;
@property(retain, nonatomic) GCKPB_PBUnknownFieldSet *unknownFields; // @synthesize unknownFields=unknownFields_;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned int)serializedSize;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)mergeFrom:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (BOOL)parseUnknownField:(id)arg1 extensionRegistry:(id)arg2 tag:(int)arg3;
- (id)mergeUnknownFields:(id)arg1;
- (id)mutableUnknownFields;
- (id)buildPartial;
- (id)build;
- (id)toBuilder;
- (id)builder;
- (id)mergeDelimitedFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (id)mergeDelimitedFromCodedInputStream:(id)arg1;
- (id)mergeFromInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (id)mergeFromInputStream:(id)arg1;
- (id)mergeFromData:(id)arg1 extensionRegistry:(id)arg2;
- (id)mergeFromData:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (id)clearExtension:(id)arg1;
- (id)setExtension:(id)arg1 index:(unsigned int)arg2 value:(id)arg3;
- (id)addExtension:(id)arg1 value:(id)arg2;
- (id)setExtension:(id)arg1 value:(id)arg2;
- (unsigned int)extensionsSerializedSize;
- (id)extensionsDescriptionForRange:(id)arg1;
- (void)writeExtensionsToCodedOutputStream:(id)arg1 range:(id)arg2;
- (id)extensionsCurrentlySet;
- (BOOL)hasExtension:(id)arg1;
- (void)ensureExtensionIsRegistered:(id)arg1;
- (id)getExtension:(id)arg1;
- (BOOL)isInitialized:(id)arg1;
- (void)writeField:(id)arg1 toCodedOutputStream:(id)arg2;
- (void)writeDelimitedToCodedOutputStream:(id)arg1;
- (void)writeDelimitedToOutputStream:(id)arg1;
- (void)writeToCodedOutputStream:(id)arg1;
- (void)writeToOutputStream:(id)arg1;
- (id)delimitedData;
- (id)data;
- (id)defaultInstance;
- (id)descriptor;
@property(readonly, nonatomic, getter=isInitialized) BOOL initialized;
- (void)internalClear;
- (void)clear;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyFieldsInto:(id)arg1 zone:(struct _NSZone *)arg2 mutable:(BOOL)arg3;
- (void)dealloc;
- (id)initAsDefaultInstance;
- (id)init;

@end

