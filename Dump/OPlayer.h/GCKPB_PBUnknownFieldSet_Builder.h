//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GCKPB_PBUnknownFieldSet.h"

__attribute__((visibility("hidden")))
@interface GCKPB_PBUnknownFieldSet_Builder : GCKPB_PBUnknownFieldSet
{
}

+ (BOOL)isFieldTag:(int)arg1;
- (void)mergeFromCodedInputStream:(id)arg1;
- (BOOL)mergeFieldFrom:(int)arg1 input:(id)arg2;
- (void)mergeVarintField:(int)arg1 value:(int)arg2;
- (void)mergeFromData:(id)arg1;
- (void)mergeUnknownFields:(id)arg1;
- (void)mergeField:(id)arg1;
- (id)getFieldBuilder:(int)arg1 create:(BOOL)arg2;
- (void)addField:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFields:(id)arg1;

@end
