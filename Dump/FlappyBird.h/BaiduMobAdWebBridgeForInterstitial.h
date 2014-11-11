//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaiduMobAdWebBridgeBase.h"

#import "BaiduMobInterstitialAdViewDelegate.h"

@class BaiduMobAdInterstitial, BaiduMobInterstitialAdView;

@interface BaiduMobAdWebBridgeForInterstitial : BaiduMobAdWebBridgeBase <BaiduMobInterstitialAdViewDelegate>
{
    BOOL _interstitialPreLoad;
    BaiduMobAdInterstitial *_interstitial;
    BaiduMobInterstitialAdView *_interstitialView;
}

@property(nonatomic) BOOL interstitialPreLoad; // @synthesize interstitialPreLoad=_interstitialPreLoad;
@property(retain, nonatomic) BaiduMobInterstitialAdView *interstitialView; // @synthesize interstitialView=_interstitialView;
@property(nonatomic) BaiduMobAdInterstitial *interstitial; // @synthesize interstitial=_interstitial;
- (void)dealloc;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)resizeWebViewForInterstitialAdView:(struct CGRect)arg1;
- (void)onAdPlayEndForNative;
- (void)onAdPlayEnd;
- (void)onInterstitialPreloadEnd:(id)arg1;
- (id)isSpamViewForWeb;
- (void)didAdImpressedForWeb;
- (void)failedAdDisplayForWeb:(int)arg1;
- (void)willAdDisplayForWeb;
- (void)setVisibilityForWeb:(int)arg1;
- (int)visibilityForWeb;
- (id)userOtherAttributes;
- (id)userHobbies;
- (int)userSalary;
- (int)userEducation;
- (id)userWork;
- (id)userPostalCode;
- (id)userCity;
- (id)userBirthday;
- (int)userGender;
- (id)keywords;
- (id)prodProp;
- (BOOL)preLoad;
- (int)adType;
- (BOOL)autoplayEnabled;
- (id)superViewOfWebView;
- (BOOL)enableLocation;
- (id)sdkName;
- (id)adId;
- (id)channelId;
- (id)appSpec;
- (id)publisherId;
- (id)init;

@end

