//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@interface EDAMAdImpressions : NSObject <NSCoding>
{
    int __adId;
    int __impressionCount;
    int __impressionTime;
    BOOL __adId_isset;
    BOOL __impressionCount_isset;
    BOOL __impressionTime_isset;
}

- (id)description;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetImpressionTime;
- (BOOL)impressionTimeIsSet;
@property(nonatomic, getter=impressionTime, setter=setImpressionTime:) int impressionTime; // @dynamic impressionTime;
- (void)unsetImpressionCount;
- (BOOL)impressionCountIsSet;
@property(nonatomic, getter=impressionCount, setter=setImpressionCount:) int impressionCount; // @dynamic impressionCount;
- (void)unsetAdId;
- (BOOL)adIdIsSet;
@property(nonatomic, getter=adId, setter=setAdId:) int adId; // @dynamic adId;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAdId:(int)arg1 impressionCount:(int)arg2 impressionTime:(int)arg3;

@end
