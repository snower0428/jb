//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MTMaterialSpecialHeader, NSArray, NSDictionary;

@protocol MTMaterialRequestDelegate <NSObject>

@optional
- (void)requestFailed;
- (void)requestMaterialDetailsFinishedWithAdverts:(NSDictionary *)arg1 details:(NSArray *)arg2 specialHeaderMode:(MTMaterialSpecialHeader *)arg3;
- (void)requestMaterialClassifyFinishedWithBanners:(NSArray *)arg1 classifies:(NSArray *)arg2;
@end

