//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GADMAdNetworkConnectorImpl.h"

@interface GADMAdNetworkConnectorInterstitial : GADMAdNetworkConnectorImpl
{
    BOOL calledWillDismissInterstitial_;
}

- (void)adapterWillLeaveApplication:(id)arg1;
- (void)adapterDidDismissInterstitial:(id)arg1;
- (void)adapterWillDismissInterstitial:(id)arg1;
- (void)adapterWillPresentInterstitial:(id)arg1;
- (void)adapterDidDismissFullScreenModal:(id)arg1;
- (void)adapterWillDismissFullScreenModal:(id)arg1;
- (void)adapterWillPresentFullScreenModal:(id)arg1;
- (void)adapter:(id)arg1 clickDidOccurInBanner:(id)arg2;
- (void)adapter:(id)arg1 didFailInterstitial:(id)arg2;
- (void)adapter:(id)arg1 didReceiveInterstitial:(id)arg2;
- (void)adapter:(id)arg1 didFailAd:(id)arg2;
- (void)adapter:(id)arg1 didReceiveAdView:(id)arg2;

@end

