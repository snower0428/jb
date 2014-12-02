//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GADMDelegate.h"

@class GADMAdManager, GADMConfig, GADSlot;

__attribute__((visibility("hidden")))
@interface GADMToGADGlue : NSObject <GADMDelegate>
{
    GADSlot *_slot;
    id _mediatedInterstitial;
    GADMAdManager *_mediationManager;
    GADMConfig *_mediationConfig;
}

@property(retain, nonatomic) GADMConfig *mediationConfig; // @synthesize mediationConfig=_mediationConfig;
@property(retain, nonatomic) GADMAdManager *mediationManager; // @synthesize mediationManager=_mediationManager;
@property(nonatomic) __weak id mediatedInterstitial; // @synthesize mediatedInterstitial=_mediatedInterstitial;
@property(nonatomic) __weak GADSlot *slot; // @synthesize slot=_slot;
- (void).cxx_destruct;
- (id)adapterExitCodesParameter;
- (id)adapterDurationsParameter;
- (void)endTimingAdapterWithExitCode:(int)arg1;
- (void)resetTimingAdapters;
- (void)startTimingAdapter;
- (id)networkExtrasFor:(Class)arg1;
- (id)childDirectedTreatment;
- (id)userKeywords;
- (id)userLocation;
- (id)userBirthday;
- (int)userGender;
- (BOOL)gadmTestMode;
- (void)gadmBannerAdRefreshFailedWithError:(id)arg1;
- (void)gadmWillLeaveApplication;
- (void)gadmDidDismissInterstitial;
- (void)gadmWillDismissInterstitial;
- (void)gadmWillPresentInterstitial;
- (void)gadmDidDismissFullScreenModal;
- (void)gadmWillDismissFullScreenModal;
- (void)gadmWillPresentFullScreenModal;
- (void)gadmDidReceiveInterstitial:(id)arg1;
- (void)gadmDidFailToReceiveAdWithError:(id)arg1;
- (void)gadmDidReceiveAd:(id)arg1;
- (id)viewControllerForPresentingModalView;
- (BOOL)hasConsistentMediationConfigForAdType:(id)arg1;
- (void)presentInterstitialFromRootViewController:(id)arg1;
- (BOOL)changeAdTypeTo:(id)arg1;
- (void)requestAdWithType:(id)arg1 mediationConfig:(id)arg2;
- (void)dealloc;
- (void)cancel;
- (id)init;

@end
