//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface TFtvOutResult : NSObject
{
    BOOL bsuc;
    int tFtvQuery;
    NSString *strResultInfo;
}

@property(copy, nonatomic) NSString *strResultInfo; // @synthesize strResultInfo;
@property(nonatomic) int tFtvQuery; // @synthesize tFtvQuery;
@property(nonatomic) BOOL bsuc; // @synthesize bsuc;
- (void)dealloc;
- (id)init;

@end

