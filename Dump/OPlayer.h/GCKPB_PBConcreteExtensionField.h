//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GCKPB_PBExtensionField.h"

@class GCKPB_PBDescriptor, GCKPB_PBExtensionDescriptor;

__attribute__((visibility("hidden")))
@interface GCKPB_PBConcreteExtensionField : NSObject <GCKPB_PBExtensionField>
{
    int type_;
    int fieldNumber_;
    CDUnion_d66862bb defaultPBValue_;
    Class messageOrGroupClass_;
    BOOL isRepeated_;
    BOOL isPacked_;
    BOOL isMessageSetWireFormat_;
    GCKPB_PBExtensionDescriptor *descriptor_;
    GCKPB_PBDescriptor *containingType_;
}

@property(readonly, nonatomic) GCKPB_PBExtensionDescriptor *descriptor; // @synthesize descriptor=descriptor_;
@property(readonly, nonatomic) GCKPB_PBDescriptor *containingType; // @synthesize containingType=containingType_;
@property(readonly, nonatomic) BOOL isRepeated; // @synthesize isRepeated=isRepeated_;
@property(readonly, nonatomic) int fieldNumber; // @synthesize fieldNumber=fieldNumber_;
- (void)mergeFromCodedInputStream:(id)arg1 unknownFields:(id)arg2 extensionRegistry:(id)arg3 builder:(id)arg4 tag:(int)arg5;
- (id)readSingleValueFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (void)mergeMessageSetExtentionFromCodedInputStream:(id)arg1 unknownFields:(id)arg2;
- (id)description;
- (unsigned int)computeSerializedSizeIncludingTag:(id)arg1;
- (unsigned int)computePBSerializedSizesIncludingTags:(id)arg1;
- (void)writeValue:(id)arg1 includingTagToCodedOutputStream:(id)arg2;
- (void)writePBValues:(id)arg1 includingTagsToCodedOutputStream:(id)arg2;
@property(readonly, nonatomic) CDUnion_d66862bb defaultPBValue;
@property(readonly, nonatomic) id defaultValue;
- (unsigned int)computePBSerializedSizeIncludingTag:(CDUnion_d66862bb)arg1;
- (unsigned int)computePBSerializedSizeNoTag:(CDUnion_d66862bb)arg1;
- (void)writePBValue:(CDUnion_d66862bb)arg1 noTagToCodedOutputStream:(id)arg2;
- (void)writePBValue:(CDUnion_d66862bb)arg1 includingTagToCodedOutputStream:(id)arg2;
@property(readonly, nonatomic) int wireType;
- (void)dealloc;
- (id)initWithDescription:(struct GCKPB_PBExtensionDescription *)arg1;

@end

