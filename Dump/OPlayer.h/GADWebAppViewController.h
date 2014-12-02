//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GADViewController.h"

#import "GADOpenerDelegate.h"

@class GADInterstitial, GADWebAppWebViewDelegate, GADWebView, NSString, NSURL, UIButton, UIImageView, UIView, UIViewController;

__attribute__((visibility("hidden")))
@interface GADWebAppViewController : GADViewController <GADOpenerDelegate>
{
    BOOL _useCustomClose;
    BOOL _transparentInterstitial;
    BOOL _viewHasAppeared;
    BOOL _isExpandable;
    BOOL _isCollapsing;
    BOOL _displayingAsTransparentInterstitial;
    GADWebView *_webView;
    UIViewController *_hostViewController;
    UIImageView *_renderedBanner;
    NSURL *_URLToLoad;
    NSString *_HTMLToLoad;
    NSURL *_HTMLBaseURLToLoad;
    GADWebAppWebViewDelegate *_webViewDelegate;
    UIButton *_closeButton;
    UIView *_contentView;
    GADInterstitial *_interstitial;
}

@property(nonatomic) __weak GADInterstitial *interstitial; // @synthesize interstitial=_interstitial;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) GADWebAppWebViewDelegate *webViewDelegate; // @synthesize webViewDelegate=_webViewDelegate;
@property(retain, nonatomic) NSURL *HTMLBaseURLToLoad; // @synthesize HTMLBaseURLToLoad=_HTMLBaseURLToLoad;
@property(retain, nonatomic) NSString *HTMLToLoad; // @synthesize HTMLToLoad=_HTMLToLoad;
@property(retain, nonatomic) NSURL *URLToLoad; // @synthesize URLToLoad=_URLToLoad;
@property(nonatomic) BOOL displayingAsTransparentInterstitial; // @synthesize displayingAsTransparentInterstitial=_displayingAsTransparentInterstitial;
@property(retain, nonatomic) UIImageView *renderedBanner; // @synthesize renderedBanner=_renderedBanner;
@property(nonatomic) BOOL isCollapsing; // @synthesize isCollapsing=_isCollapsing;
@property(nonatomic) BOOL isExpandable; // @synthesize isExpandable=_isExpandable;
@property(nonatomic) BOOL viewHasAppeared; // @synthesize viewHasAppeared=_viewHasAppeared;
@property(retain, nonatomic) UIViewController *hostViewController; // @synthesize hostViewController=_hostViewController;
@property(retain, nonatomic) GADWebView *webView; // @synthesize webView=_webView;
@property(nonatomic) BOOL transparentInterstitial; // @synthesize transparentInterstitial=_transparentInterstitial;
@property(nonatomic) BOOL useCustomClose; // @synthesize useCustomClose=_useCustomClose;
- (void).cxx_destruct;
- (void)loadHTML:(id)arg1 baseURL:(id)arg2;
- (void)load:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (struct CGRect)closeButtonFrameForContentFrame:(struct CGRect)arg1;
- (void)dismiss;
- (void)presentFrom:(id)arg1;
- (void)dealloc;
- (id)initWithWebView:(id)arg1 forInterstitial:(id)arg2;
- (id)initWithWebView:(id)arg1;
- (id)init;
- (void)relinquishScreen;
- (BOOL)shouldDismissOnAppClose;
@property(nonatomic) BOOL allowFileAccess;
- (void)animateTransparentInterstitialPresentation;
- (void)transparentInterstitialOrientationChanged:(id)arg1;
- (void)composeTransparentInterstitialViewsForPresentation;
- (void)didLeaveApplication;
- (void)didOpenInApplication;
- (void)restoreStatusBar;
- (void)hideStatusBar;
- (void)updateTransparentInterstitialOrientation;
- (struct CGAffineTransform)transformForOrientation:(int)arg1;
- (struct CGRect)frameOfSize:(struct CGSize)arg1 centeredInFrame:(struct CGRect)arg2;

@end
