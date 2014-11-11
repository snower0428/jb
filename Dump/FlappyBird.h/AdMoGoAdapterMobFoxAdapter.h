//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AdMoGoAdNetworkAdapter.h"

#import "AdMoGoWebBrowserControllerDelegate.h"
#import "UIWebViewDelegate.h"
#import "WBRequestDelegate.h"

@class AdMoGoWebBrowserController, NSDictionary, NSMutableData, NSString, NSTimer, UIWebView, WebRequest;

@interface AdMoGoAdapterMobFoxAdapter : AdMoGoAdNetworkAdapter <UIWebViewDelegate, AdMoGoWebBrowserControllerDelegate, WBRequestDelegate>
{
    UIWebView *adView;
    struct CGSize size;
    NSMutableData *receivedData;
    NSDictionary *lmmobAD;
    NSString *faceImgPath;
    AdMoGoWebBrowserController *webBrowserController;
    BOOL isStop;
    NSString *h_useraganet;
    int type;
    WebRequest *getAd;
    BOOL isSuccess;
    BOOL isError;
    int adType;
    NSString *htmlContent;
    NSString *clickType;
    NSString *clickURL;
    BOOL isWebBrowserClosed;
    BOOL isDelayedClick;
    NSTimer *delayedTimer;
}

+ (void)load;
+ (int)networkType;
- (void)dealloc;
- (void)stopAd;
- (void)stopBeingDelegate;
- (void)delayedSendedClick;
- (void)webBrowserDidAppear;
- (void)webBrowserFinishLoad;
- (void)webBrowserClosed:(id)arg1;
- (void)showWebBrowser:(id)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
- (void)showAd:(id)arg1;
- (void)request:(id)arg1 didFinishLoadingWithResult:(id)arg2;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)request:(id)arg1 didReceiveRawData:(id)arg2;
- (void)request:(id)arg1 didReceiveResponse:(id)arg2;
- (void)requestAd:(id)arg1;
- (void)adSuccess:(id)arg1;
- (void)adFail:(id)arg1;
- (id)sha1:(id)arg1;
- (id)md5:(id)arg1;
- (id)urlencode:(id)arg1;
- (void)initParams;
- (void)getAd;
- (BOOL)isAPI;

@end
