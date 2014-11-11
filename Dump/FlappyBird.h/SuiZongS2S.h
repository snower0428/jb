//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AdMoGoWebBrowserControllerDelegate.h"
#import "MFMessageComposeViewControllerDelegate.h"
#import "SZActionDelegate.h"

@class AdMoGoCore, AdMoGoWebBrowserController, NSString, NSTimer, SZAdWebViewDelegate, UIAlertView;

@interface SuiZongS2S : NSObject <SZActionDelegate, MFMessageComposeViewControllerDelegate, AdMoGoWebBrowserControllerDelegate>
{
    SZAdWebViewDelegate *_szadwebViewDelegate;
    AdMoGoWebBrowserController *webBrowserController;
    BOOL isWebBrowserClosed;
    BOOL isDelayedClick;
    NSTimer *delayedTimer;
    BOOL isStop;
    NSString *sinaWBDownloadURL;
    UIAlertView *alert;
    BOOL isFinishedLoad;
    AdMoGoCore *admogocore;
    id <SuiZongS2SDelegate> delegate;
}

@property(nonatomic) AdMoGoCore *admogocore; // @synthesize admogocore;
@property(nonatomic) id <SuiZongS2SDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) SZAdWebViewDelegate *szadwebViewDelegate; // @synthesize szadwebViewDelegate=_szadwebViewDelegate;
- (void)delayedSendedClick;
- (void)webBrowserDidAppear;
- (void)webBrowserFinishLoad;
- (void)webBrowserClosed:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(int)arg2;
- (void)launchWeiboWithResult:(BOOL)arg1 andDownloadUrl:(id)arg2;
- (void)downloadAppWithUrl:(id)arg1;
- (void)sendSmsWithPhoneNumber:(id)arg1 andContent:(id)arg2;
- (void)callWithPhoneNumber:(id)arg1;
- (void)launchAppWithUrl:(id)arg1 andErrorUrl:(id)arg2;
- (void)openExternalBrowserWithUrl:(id)arg1;
- (void)openInnerBrowserWithUrl:(id)arg1;
- (void)ads:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)adsDidFinishLoad:(id)arg1;
- (void)adsDidStartLoad:(id)arg1;
- (void)dealloc;
- (void)sendClick;
- (void)loadAd:(id)arg1;
- (void)sendSuizongImpWithSid:(id)arg1 withAdid:(id)arg2;
- (void)loadAdWithWebView:(id)arg1 withHtml:(id)arg2;
- (id)init;

@end

