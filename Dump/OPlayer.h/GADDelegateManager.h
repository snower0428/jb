//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GADBannerView, GADInterstitial;

__attribute__((visibility("hidden")))
@interface GADDelegateManager : NSObject
{
    id <GADBannerViewDelegate> _bannerDelegate;
    GADBannerView *_adView;
    id <GADInterstitialDelegate> _interstitialDelegate;
    GADInterstitial *_interstitial;
    id <GADInterstitialDelegate> _SDKInterstitialDelegate;
    id <GADAppEventDelegate> _appEventDelegate;
    id <GADSwipeableBannerViewDelegate> _swipeDelegate;
    id <GADInAppPurchaseDelegate> _inAppPurchaseDelegate;
}

@property(nonatomic) __weak id <GADInAppPurchaseDelegate> inAppPurchaseDelegate; // @synthesize inAppPurchaseDelegate=_inAppPurchaseDelegate;
@property(nonatomic) __weak id <GADSwipeableBannerViewDelegate> swipeDelegate; // @synthesize swipeDelegate=_swipeDelegate;
@property(nonatomic) __weak id <GADAppEventDelegate> appEventDelegate; // @synthesize appEventDelegate=_appEventDelegate;
@property(retain, nonatomic) id <GADInterstitialDelegate> SDKInterstitialDelegate; // @synthesize SDKInterstitialDelegate=_SDKInterstitialDelegate;
@property(nonatomic) __weak GADInterstitial *interstitial; // @synthesize interstitial=_interstitial;
@property(nonatomic) __weak id <GADInterstitialDelegate> interstitialDelegate; // @synthesize interstitialDelegate=_interstitialDelegate;
@property(nonatomic) __weak GADBannerView *adView; // @synthesize adView=_adView;
@property(nonatomic) __weak id <GADBannerViewDelegate> bannerDelegate; // @synthesize bannerDelegate=_bannerDelegate;
- (void).cxx_destruct;
- (void)didReceiveInAppPurchase:(id)arg1;
- (void)willLeaveApplication;
- (void)didDismissScreen;
- (void)willDismissScreen;
- (void)willPresentScreen;
- (void)interstitial:(id)arg1 didReceiveAppEvent:(id)arg2 withInfo:(id)arg3;
- (void)adView:(id)arg1 didReceiveAppEvent:(id)arg2 withInfo:(id)arg3;
- (void)didFailToReceiveAdWithError:(id)arg1;
- (void)didReceiveAd;
@property(readonly, nonatomic) id <GADInAppPurchaseDelegate> activeInAppPurchaseDelegate;

@end
