//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBJsonBase_Sina.h"

#import "SBJsonParser_Sina.h"
#import "SBJsonWriter_Sina.h"

@class SBJsonParser_Sina, SBJsonWriter_Sina;

__attribute__((visibility("hidden")))
@interface SBJSON_Sina : SBJsonBase_Sina <SBJsonParser_Sina, SBJsonWriter_Sina>
{
    SBJsonParser_Sina *jsonParser;
    SBJsonWriter_Sina *jsonWriter;
}

@property BOOL sortKeys;
@property BOOL humanReadable;
- (void)setMaxDepth:(unsigned int)arg1;
- (unsigned int)maxDepth;
- (id)objectWithString:(id)arg1 error:(id *)arg2;
- (id)fragmentWithString:(id)arg1 error:(id *)arg2;
- (id)objectWithString:(id)arg1 allowScalar:(BOOL)arg2 error:(id *)arg3;
- (id)objectWithString:(id)arg1;
- (id)stringWithObject:(id)arg1 error:(id *)arg2;
- (id)stringWithFragment:(id)arg1 error:(id *)arg2;
- (id)stringWithObject:(id)arg1 allowScalar:(BOOL)arg2 error:(id *)arg3;
- (id)stringWithObject:(id)arg1;
- (void)dealloc;
- (id)init;

@end

