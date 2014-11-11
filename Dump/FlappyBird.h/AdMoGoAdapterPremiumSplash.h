//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AdMoGoAdNetworkAdapter.h"

#import "AdMoGoRedictionDelegate.h"
#import "AdMoGoWebBrowserControllerDelegate.h"
#import "AdMoGoWebBrowserControllerFullScreenDelegate.h"
#import "AppStoreViewControllerDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIWebViewDelegate.h"

@class AdMoGoCustomSplash, AdMoGoRediction, AdMoGoSplashConfigInf, AdMoGoSplashCount, AdMoGoWebBrowserController, AppStoreViewController, NSArray, NSMutableDictionary, NSString, NSTimer, NSURL, UIView, UIWebView, WebRequest;

@interface AdMoGoAdapterPremiumSplash : AdMoGoAdNetworkAdapter <UIWebViewDelegate, AdMoGoRedictionDelegate, AppStoreViewControllerDelegate, AdMoGoWebBrowserControllerDelegate, AdMoGoWebBrowserControllerFullScreenDelegate, UIGestureRecognizerDelegate>
{
    AdMoGoSplashConfigInf *splash_getInfo;
    NSTimer *_timer;
    UIView *_backgroundView;
    NSString *_appid;
    WebRequest *_webRequest;
    NSString *_configKey;
    AdMoGoCustomSplash *_customSplash;
    struct CGRect adFrame;
    NSMutableDictionary *_adInfoDict;
    int _adShowTime;
    AdMoGoSplashCount *_splashCount;
    AdMoGoRediction *rediction;
    AppStoreViewController *appStoreView;
    NSString *appleId;
    NSURL *adUrl;
    AdMoGoWebBrowserController *webBrowserController;
    UIView *_loadView;
    int _curOri;
    BOOL isGetInfoFinished;
    BOOL isStop;
    CDUnknownBlockType splashViewReset;
    UIWebView *adWebView;
    NSArray *imp_thirdMonit_array;
    NSArray *clk_thirdMonit_array;
}

+ (void)load;
+ (int)networkType;
- (void)requestTd:(id)arg1;
- (struct CGPoint)fireAdPointByOri:(int)arg1;
- (id)fireImageNameByOri:(int)arg1;
- (void)fireDidDismiss;
- (void)fireWillPresent;
- (void)fireLoadFail:(id)arg1;
- (void)fireLoadSuccess;
- (id)getImageTypeName:(int)arg1;
- (struct CGRect)getFrameByString:(id)arg1;
- (void)parametersFromJSCall:(id)arg1 andAdContentRef:(id *)arg2;
- (float)getCurOrientation;
- (int)getCurOrientationRef;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
- (void)AppStoreDismiss;
- (void)AppStoreLoadSuccess;
- (void)AppStoreLoadFail;
- (void)redictionFinished:(BOOL)arg1;
- (void)webBrowserDidAppear;
- (void)webBrowserFinishLoad;
- (void)webBrowserClosed:(id)arg1;
- (void)webBrowserDidClosed;
- (void)stopBeingDelegate;
- (BOOL)isSupportSplashCache;
- (void)tapAction:(id)arg1;
- (void)addTapAction:(id)arg1;
- (void)releaseSelf;
- (void)getAdConfigFromServerAndSaveCache;
- (void)getAdConfigFromServerAndSaveCacheInThread;
- (BOOL)getAdFromCacheAndShow;
- (void)timeout;
- (void)getAd;
- (void)setAdMoGoSplashViewReset:(CDUnknownBlockType)arg1;
- (void)dealloc;

@end
