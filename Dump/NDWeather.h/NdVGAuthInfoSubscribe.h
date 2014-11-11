//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NdVGAuthInfoBase.h"

@class NSString;

@interface NdVGAuthInfoSubscribe : NdVGAuthInfoBase
{
    int nRemainCnt;
    NSString *strStartTime;
    NSString *strEndTime;
}

@property(retain, nonatomic) NSString *strEndTime; // @synthesize strEndTime;
@property(retain, nonatomic) NSString *strStartTime; // @synthesize strStartTime;
@property(nonatomic) int nRemainCnt; // @synthesize nRemainCnt;
- (id)description;
- (id)dateWithEndTime;
- (id)dateWithStartTime;
- (id)dateFromString:(id)arg1;
- (BOOL)isRemainCountInfinite;
- (void)dealloc;
- (id)init;

@end

