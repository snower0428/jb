//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "GADInterstitialDelegate.h"

@class GADInterstitial, NSArray, NSTimer, UIImageView, UIWindow;

__attribute__((visibility("hidden")))
@interface GADInterstitialAppController : UIViewController <GADInterstitialDelegate>
{
    UIWindow *window_;
    NSArray *storedUserViews_;
    UIImageView *imageView_;
    NSTimer *timeout_;
    BOOL hideStatusBar_;
    GADInterstitial *_interstitial;
    UIViewController *_originalRootViewController;
}

@property(retain, nonatomic) UIViewController *originalRootViewController; // @synthesize originalRootViewController=_originalRootViewController;
@property(retain, nonatomic) GADInterstitial *interstitial; // @synthesize interstitial=_interstitial;
- (void).cxx_destruct;
- (void)interstitialWillDismissScreen:(id)arg1;
- (void)interstitial:(id)arg1 didFailToReceiveAdWithError:(id)arg2;
- (void)interstitialDidReceiveAd:(id)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)restoreWindow;
- (void)removeSelfAsDelegate;
- (void)timeout:(id)arg1;
- (void)dealloc;
- (id)initWithWindow:(id)arg1 image:(id)arg2 timeout:(double)arg3 interstitial:(id)arg4;

@end

