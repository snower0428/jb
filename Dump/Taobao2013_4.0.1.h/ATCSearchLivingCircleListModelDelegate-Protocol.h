//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError;

@protocol ATCSearchLivingCircleListModelDelegate <NSObject>

@optional
- (void)circleListRequest:(id)arg1 DidFailWithError:(NSError *)arg2;
- (void)circleListRequestDidFinish:(id)arg1;
@end
