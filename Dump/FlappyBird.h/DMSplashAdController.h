//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "DMAdViewDelegate.h"
#import "DMDimmingViewDelegate.h"

@class CLLocation, DMAdView, DMDimmingView, NSDictionary, NSNumber, NSObject<DMSplashAdControllerDelegate>, NSString, NSTimer, UIColor, UIWindow;

@interface DMSplashAdController : UIViewController <DMAdViewDelegate, DMDimmingViewDelegate>
{
    BOOL _isReady;
    BOOL _useCloseAnimation;
    NSString *_publisherId;
    NSString *_placementId;
    UIColor *_background;
    UIWindow *_window;
    float _offset;
    DMAdView *_adView;
    NSDictionary *_cachedAdResp;
    struct CGSize _dimmingSize;
    BOOL _isHorizontal;
    CLLocation *_location;
    NSString *_postcode;
    NSString *_keywords;
    NSString *_userBirthday;
    NSNumber *_userGender;
    NSString *_spot;
    NSTimer *_minImpressionTimer;
    NSTimer *_autoCloseTimer;
    DMDimmingView *_dimmingView;
    BOOL _isReadyInvoked;
    BOOL _alreadyCLosed;
    BOOL _hideStatusBar;
    BOOL _freshAdLoaded;
    BOOL _alreadyPresented;
    struct CGSize _adSize;
    NSObject<DMSplashAdControllerDelegate> *_delegate;
    UIViewController *_rootViewController;
}

@property(nonatomic) UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(nonatomic) NSObject<DMSplashAdControllerDelegate> *delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL isReady; // @synthesize isReady=_isReady;
- (void)dmDimmingViewShouldClose;
- (void)dmOnReachEffectiveImpressionTime;
- (void)dmFreshAdAddedToSuperView:(id)arg1;
- (void)dmAdViewShouldClose:(id)arg1;
- (void)dmApplicationWillEnterBackgroundFromAd:(id)arg1;
- (void)dmDidDismissModalViewFromAd:(id)arg1;
- (void)dmWillPresentModalViewFromAd:(id)arg1;
- (void)dmAdViewFailToLoadAd:(id)arg1 withError:(id)arg2;
- (void)dmAdViewSuccessToLoadAd:(id)arg1;
- (void)setSpot:(id)arg1;
- (void)setUserGender:(int)arg1;
- (void)setUserBirthday:(id)arg1;
- (void)setKeywords:(id)arg1;
- (void)setPostcode:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)reportImpFinish;
- (void)reportImpMin;
- (void)reportImpStart;
- (void)addAdToWindow;
- (void)present;
- (void)onSplashAdShouldClosed:(id)arg1;
- (void)closeAnimationFinished;
- (void)unhideStatusBar;
- (void)hideStatusBar;
- (void)innerLoadThread:(id)arg1;
- (void)asynLoadFreshSplashAd;
- (void)viewDidLoad;
- (id)autorelease;
- (oneway void)release;
- (void)initDimmingView;
- (void)setPlacementType:(int)arg1 ForAdView:(id)arg2;
- (id)createAdView:(struct CGSize)arg1;
- (void)initAdView:(struct CGSize)arg1;
- (id)initWithPublisherId:(id)arg1 placementId:(id)arg2 size:(struct CGSize)arg3 offset:(float)arg4 window:(id)arg5 background:(id)arg6 animation:(BOOL)arg7;
- (id)initWithPublisherId:(id)arg1 placementId:(id)arg2 window:(id)arg3 background:(id)arg4 animation:(BOOL)arg5;
- (id)initWithPublisherId:(id)arg1 placementId:(id)arg2 window:(id)arg3 background:(id)arg4;
- (id)initWithPublisherId:(id)arg1 placementId:(id)arg2 window:(id)arg3;

@end
