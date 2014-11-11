//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AdMoGoAdNetworkAdapter.h"

#import "BaiduMobAdViewDelegate.h"

@class BaiduMobAdView, NSTimer;

__attribute__((visibility("hidden")))
@interface AdMoGoAdapterBaiduMobAd : AdMoGoAdNetworkAdapter <BaiduMobAdViewDelegate>
{
    NSTimer *timer;
    BOOL isStop;
    BaiduMobAdView *sBaiduAdview;
    BOOL isLocationOn;
}

+ (void)load;
+ (int)networkType;
- (void)loadAdTimeOut:(id)arg1;
- (void)failedDisplayAd:(int)arg1;
- (void)didDismissLandingPage;
- (void)didAdClicked;
- (void)didAdImpressed;
- (void)willDisplayAd:(id)arg1;
- (void)stopAd;
- (BOOL)enableLocation;
- (id)channelId;
- (id)appSpec;
- (id)publisherId;
- (void)dealloc;
- (void)stopTimer;
- (void)stopBeingDelegate;
- (void)getAd;

@end
