//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AdMoGoAdNetworkAdapter.h"

#import "AdMoGoWebBrowserControllerDelegate.h"
#import "UIWebViewDelegate.h"
#import "WBRequestDelegate.h"

@class AdMoGoWebBrowserController, NSString, NSTimer, UIWebView, WebRequest;

@interface AdMoGoAdapterMojivaAdapterAPI : AdMoGoAdNetworkAdapter <UIWebViewDelegate, AdMoGoWebBrowserControllerDelegate, WBRequestDelegate>
{
    UIWebView *adView;
    WebRequest *getAd;
    struct CGSize size;
    int type;
    BOOL isSuccess;
    BOOL isError;
    BOOL isStop;
    NSString *h_useraganet;
    BOOL isWebBrowserClosed;
    BOOL isDelayedClick;
    AdMoGoWebBrowserController *webBrowserController;
    NSTimer *delayedTimer;
    NSString *location_initParam;
    NSString *countryCode;
    NSString *region;
    BOOL isTestMode;
    NSTimer *timer;
}

+ (void)load;
+ (int)networkType;
- (void)resizeImageSize:(id)arg1;
- (void)dealloc;
- (void)stopAd;
- (void)stopBeingDelegate;
- (void)delayedSendedClick;
- (void)webBrowserDidAppear;
- (void)webBrowserFinishLoad;
- (void)webBrowserClosed:(id)arg1;
- (void)showWebBrowser:(id)arg1;
- (void)adSuccess:(id)arg1;
- (void)adFail:(id)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
- (void)request:(id)arg1 didFinishLoadingWithResult:(id)arg2;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)request:(id)arg1 didReceiveRawData:(id)arg2;
- (void)request:(id)arg1 didReceiveResponse:(id)arg2;
- (void)stopTimer;
- (void)loadAdTimeOut:(id)arg1;
- (void)requestAd:(id)arg1;
- (id)urlencode:(id)arg1;
- (id)sha1:(id)arg1;
- (id)md5:(id)arg1;
- (void)initParams;
- (void)getAd;
- (BOOL)isAPI;

@end

