//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray;

@interface UMUFPSBJsonBase : NSObject
{
    NSMutableArray *errorTrace;
    unsigned int depth;
    unsigned int maxDepth;
}

@property unsigned int maxDepth; // @synthesize maxDepth;
@property(readonly) NSArray *errorTrace; // @synthesize errorTrace;
- (void)clearErrorTrace;
- (void)addErrorWithCode:(unsigned int)arg1 description:(id)arg2;
- (void)dealloc;
- (id)init;

@end

