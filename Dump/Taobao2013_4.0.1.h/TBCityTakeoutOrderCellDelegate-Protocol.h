//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol TBCityTakeoutOrderCellDelegate <NSObject>

@optional
- (void)reviewOrder:(NSString *)arg1;
- (void)refundOrder:(NSString *)arg1;
- (void)receiveOrder:(NSString *)arg1;
- (void)payOrder:(NSString *)arg1;
- (void)cancelOrder:(NSString *)arg1;
@end
