//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BaiduMobVAView;

@protocol BaiduMobVAViewDelegate <NSObject>

@optional
- (void)didVideoFinishWithResult:(id)arg1;
- (void)didDismissLandingPage;
- (void)didBannerClicked:(BaiduMobVAView *)arg1;
- (void)didVideoAdClicked:(BaiduMobVAView *)arg1;
- (void)didVideoDisappear;
- (void)willPlayVideoAd:(BaiduMobVAView *)arg1;
@end

