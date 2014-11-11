//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AdMoGoAdNetworkAdapter.h"

#import "AdMoGoWebBrowserControllerDelegate.h"
#import "CLLocationManagerDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIWebViewDelegate.h"
#import "WBRequestDelegate.h"

@class AdMoGoWebBrowserController, NSMutableData, NSMutableDictionary, NSString, NSTimer, UITapGestureRecognizer, UIView, UIWebView, WebRequest;

@interface AdsMoGoAdapterAdChinaAPI : AdMoGoAdNetworkAdapter <WBRequestDelegate, UIWebViewDelegate, AdMoGoWebBrowserControllerDelegate, CLLocationManagerDelegate, UIGestureRecognizerDelegate>
{
    NSMutableDictionary *requestAdDict;
    NSMutableData *requestAdData;
    WebRequest *adrequest;
    UIWebView *webView;
    NSString *UserAgent;
    BOOL isStop;
    struct CGSize size;
    NSMutableDictionary *adDict;
    AdMoGoWebBrowserController *webBrowserController;
    UIView *adView;
    BOOL isSendedWQClick;
    BOOL isDelayedClick;
    BOOL isWebBrowserClosed;
    BOOL isFailed;
    NSTimer *delayedTimer;
    NSTimer *timer;
    NSString *ouid;
    NSString *ts;
    UITapGestureRecognizer *singleTap;
    float clickX;
    float clickY;
}

+ (void)load;
+ (int)networkType;
- (void)handleSingleTap:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3;
- (void)requestURL:(id)arg1;
- (void)requestAdChinaClick;
- (void)sendAdChinaShowRecord;
- (void)requestAdChinaParserSuccess;
- (void)displayHtml5Ad;
- (void)displayImageAd;
- (void)displayTxtAd;
- (void)readyDisplayAD;
- (void)adFail;
- (void)delayedSendedClick;
- (void)webBrowserDidAppear;
- (void)webBrowserFinishLoad;
- (void)webBrowserClosed:(id)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (void)parserAdInf:(id)arg1;
- (void)request:(id)arg1 didFinishLoadingWithResult:(id)arg2;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)request:(id)arg1 didReceiveRawData:(id)arg2;
- (void)request:(id)arg1 didReceiveResponse:(id)arg2;
- (void)requestAdChinaAd;
- (id)urlencode:(id)arg1;
- (id)random;
- (id)sha1:(id)arg1;
- (void)initParams;
- (void)releaseAdView;
- (void)dealloc;
- (void)stopBeingDelegate;
- (void)stopAd;
- (void)stopTimer;
- (void)loadAdTimeOut:(id)arg1;
- (void)getAd;
- (BOOL)isAPI;

@end

