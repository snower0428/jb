//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CJSONSerializer.h"

@class NSDictionary, NSSet;

__attribute__((visibility("hidden")))
@interface CFilteringJSONSerializer : CJSONSerializer
{
    NSSet *tests;
    NSDictionary *convertersByName;
}

@property(retain, nonatomic) NSDictionary *convertersByName; // @synthesize convertersByName;
@property(retain, nonatomic) NSSet *tests; // @synthesize tests;
- (void)addConverter:(CDUnknownBlockType)arg1 forName:(id)arg2;
- (void)addTest:(CDUnknownBlockType)arg1;
- (id)serializeObject:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)init;

@end

