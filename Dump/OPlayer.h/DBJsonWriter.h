//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DBJsonBase.h"

#import "DBJsonWriter.h"

__attribute__((visibility("hidden")))
@interface DBJsonWriter : DBJsonBase <DBJsonWriter>
{
    BOOL sortKeys;
    BOOL humanReadable;
}

+ (void)initialize;
@property BOOL humanReadable; // @synthesize humanReadable;
@property BOOL sortKeys; // @synthesize sortKeys;
- (BOOL)appendString:(id)arg1 into:(id)arg2;
- (BOOL)appendDictionary:(id)arg1 into:(id)arg2;
- (BOOL)appendArray:(id)arg1 into:(id)arg2;
- (BOOL)appendValue:(id)arg1 into:(id)arg2;
- (id)indent;
- (id)stringWithObject:(id)arg1;
- (id)stringWithFragment:(id)arg1;

@end
