//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AdMoGoAdNetworkAdapter.h"

#import "AdMoGoWebBrowserControllerDelegate.h"
#import "MFMessageComposeViewControllerDelegate.h"
#import "SZActionDelegate.h"
#import "UIWebViewDelegate.h"
#import "WBRequestDelegate.h"

@class AdMoGoWebBrowserController, NSMutableData, NSRunLoop, NSString, NSTimer, SZAdWebViewDelegate, UIAlertView, UIWebView, WebRequest;

@interface AdMoGoAdapterSuiZong : AdMoGoAdNetworkAdapter <UIWebViewDelegate, AdMoGoWebBrowserControllerDelegate, SZActionDelegate, MFMessageComposeViewControllerDelegate, WBRequestDelegate>
{
    UIWebView *adView;
    WebRequest *getAdHeaderConn;
    WebRequest *getAdBodyConn;
    NSMutableData *receivedData;
    NSString *adid;
    NSString *update;
    NSString *localIPAddress;
    AdMoGoWebBrowserController *webBrowserController;
    BOOL didGetBody;
    NSRunLoop *adHeaderRunLoop;
    NSRunLoop *adBodyRunLoop;
    BOOL isStop;
    SZAdWebViewDelegate *szadwebViewDelegate;
    NSString *sid;
    NSString *sinaWBDownloadURL;
    UIAlertView *alert;
    BOOL isWebBrowserClosed;
    BOOL isDelayedClick;
    NSTimer *delayedTimer;
    BOOL isFinishedLoad;
}

+ (void)load;
+ (int)networkType;
- (void)delayedSendedClick;
- (void)webBrowserDidAppear;
- (void)webBrowserFinishLoad;
- (void)webBrowserClosed:(id)arg1;
- (void)dealloc;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(int)arg2;
- (void)ads:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)adsDidFinishLoad:(id)arg1;
- (void)adsDidStartLoad:(id)arg1;
- (void)launchWeiboWithResult:(BOOL)arg1 andDownloadUrl:(id)arg2;
- (void)downloadAppWithUrl:(id)arg1;
- (void)sendSmsWithPhoneNumber:(id)arg1 andContent:(id)arg2;
- (void)callWithPhoneNumber:(id)arg1;
- (void)launchAppWithUrl:(id)arg1 andErrorUrl:(id)arg2;
- (void)openExternalBrowserWithUrl:(id)arg1;
- (void)openInnerBrowserWithUrl:(id)arg1;
- (id)md5:(id)arg1;
- (id)digest:(id)arg1;
- (void)request:(id)arg1 didFinishLoadingWithResult:(id)arg2;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)request:(id)arg1 didReceiveRawData:(id)arg2;
- (void)request:(id)arg1 didReceiveResponse:(id)arg2;
- (void)releaseAdView;
- (void)stopBeingDelegate;
- (void)stopAd;
- (void)startRequestAd:(id)arg1;
- (void)requestUrlThread:(id)arg1;
- (void)getAd;

@end

