//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate, NSDictionary, NSError, NSObject, NSString, UIView, UIViewController;

@protocol GADMAdNetworkConnector <NSObject>
- (void)adapterWillLeaveApplication:(id <GADMAdNetworkAdapter>)arg1;
- (void)adapterDidDismissInterstitial:(id <GADMAdNetworkAdapter>)arg1;
- (void)adapterWillDismissInterstitial:(id <GADMAdNetworkAdapter>)arg1;
- (void)adapterWillPresentInterstitial:(id <GADMAdNetworkAdapter>)arg1;
- (void)adapterDidDismissFullScreenModal:(id <GADMAdNetworkAdapter>)arg1;
- (void)adapterWillDismissFullScreenModal:(id <GADMAdNetworkAdapter>)arg1;
- (void)adapterWillPresentFullScreenModal:(id <GADMAdNetworkAdapter>)arg1;
- (void)adapter:(id <GADMAdNetworkAdapter>)arg1 clickDidOccurInBanner:(UIView *)arg2;
- (void)adapter:(id <GADMAdNetworkAdapter>)arg1 didFailInterstitial:(NSError *)arg2;
- (void)adapter:(id <GADMAdNetworkAdapter>)arg1 didReceiveInterstitial:(NSObject *)arg2;
- (void)adapter:(id <GADMAdNetworkAdapter>)arg1 didFailAd:(NSError *)arg2;
- (void)adapter:(id <GADMAdNetworkAdapter>)arg1 didReceiveAdView:(UIView *)arg2;
- (NSArray *)userKeywords;
- (NSString *)userLocationDescription;
- (float)userLocationAccuracyInMeters;
- (float)userLongitude;
- (float)userLatitude;
- (BOOL)userHasLocation;
- (NSDate *)userBirthday;
- (int)userGender;
- (UIViewController *)viewControllerForPresentingModalView;
- (id <GADAdNetworkExtras>)networkExtras;
- (BOOL)testMode;
- (NSDictionary *)credentials;
- (NSString *)publisherId;
@end

