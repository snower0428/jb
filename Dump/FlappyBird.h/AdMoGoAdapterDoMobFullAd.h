//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AdMoGoAdNetworkAdapter.h"

#import "DMInterstitialAdControllerDelegate.h"

@class DMInterstitialAdController, NSTimer;

__attribute__((visibility("hidden")))
@interface AdMoGoAdapterDoMobFullAd : AdMoGoAdNetworkAdapter <DMInterstitialAdControllerDelegate>
{
    BOOL isStop;
    DMInterstitialAdController *_dmInterstitial;
    NSTimer *timer;
    BOOL isRequest;
    BOOL isStopTimer;
}

+ (void)load;
+ (int)networkType;
- (void)loadAdTimeOut:(id)arg1;
- (void)stopTimer;
- (void)dmInterstitialDidClicked:(id)arg1;
- (void)dmInterstitialApplicationWillEnterBackground:(id)arg1;
- (void)dmInterstitialDidDismissModalView:(id)arg1;
- (void)dmInterstitialWillPresentModalView:(id)arg1;
- (void)dmInterstitialDidDismissScreen:(id)arg1;
- (void)dmInterstitialWillPresentScreen:(id)arg1;
- (void)dmInterstitialFailToLoadAd:(id)arg1 withError:(id)arg2;
- (void)dmInterstitialSuccessToLoadAd:(id)arg1;
- (void)presentInterstitial;
- (BOOL)isReadyPresentInterstitial;
- (void)dealloc;
- (void)stopAd;
- (void)stopBeingDelegate;
- (void)getAd;

@end
