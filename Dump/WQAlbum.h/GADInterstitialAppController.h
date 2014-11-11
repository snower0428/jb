//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "GADInterstitialDelegate.h"

@class GADInterstitial, NSArray, NSTimer, UIImageView, UIWindow;

@interface GADInterstitialAppController : UIViewController <GADInterstitialDelegate>
{
    GADInterstitial *interstitial_;
    UIWindow *window_;
    NSArray *storedUserViews_;
    UIImageView *imageView_;
    NSTimer *timeout_;
    BOOL hideStatusBar_;
    UIViewController *originalRootViewController_;
}

@property(retain, nonatomic) UIViewController *originalRootViewController; // @synthesize originalRootViewController=originalRootViewController_;
- (void)interstitialWillDismissScreen:(id)arg1;
- (void)interstitial:(id)arg1 didFailToReceiveAdWithError:(id)arg2;
- (void)interstitialDidReceiveAd:(id)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)restoreWindowAndRelease;
- (void)removeSelfAsDelegate;
- (void)dealloc;
- (id)initWithWindow:(id)arg1 image:(id)arg2 timeout:(int)arg3 interstitial:(id)arg4;
- (void)timeout:(id)arg1;

@end

