//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol GCKPB_PBFieldDescriptor <NSObject>
@property(readonly, nonatomic, getter=isMessage) BOOL message;
@property(readonly, nonatomic, getter=isPackable) BOOL packable;
@property(readonly, nonatomic, getter=isRepeated) BOOL repeated;
@property(readonly, nonatomic, getter=isOptional) BOOL optional;
@property(readonly, nonatomic, getter=isRequired) BOOL required;
@property(readonly, nonatomic) CDUnion_d66862bb defaultValue;
@property(readonly, nonatomic) BOOL hasDefaultValue;
@property(readonly, nonatomic) int type;
@property(readonly, nonatomic) unsigned int number;
@property(readonly, nonatomic) NSString *name;
- (BOOL)isValidEnumValue:(int)arg1;
@end
