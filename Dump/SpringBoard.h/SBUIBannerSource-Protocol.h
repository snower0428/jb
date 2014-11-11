//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBUIBannerItem, UIView<SBUIBannerItemView>;

@protocol SBUIBannerSource <NSObject>
- (UIView<SBUIBannerItemView> *)newBannerViewForItem:(SBUIBannerItem *)arg1;
- (void)removeAllBannerItems;
- (SBUIBannerItem *)dequeueNextBannerItem;
- (SBUIBannerItem *)peekNextBannerItem;

@optional
- (void)bannerViewDidDismiss:(UIView<SBUIBannerItemView> *)arg1 forReason:(int)arg2;
- (void)bannerViewWillDismiss:(UIView<SBUIBannerItemView> *)arg1 forReason:(int)arg2;
- (void)bannerViewDidAppear:(UIView<SBUIBannerItemView> *)arg1;
- (void)bannerViewWillAppear:(UIView<SBUIBannerItemView> *)arg1;
@end

