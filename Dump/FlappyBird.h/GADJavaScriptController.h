//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GADCachedFileDelegate.h"

@class GADCachedFile, GADWebViewDelegate, NSMutableArray, NSMutableDictionary, UIWebView;

__attribute__((visibility("hidden")))
@interface GADJavaScriptController : NSObject <GADCachedFileDelegate>
{
    GADCachedFile *buildAdJS_;
    GADWebViewDelegate *buildAdWebViewDelegate_;
    UIWebView *buildAdWebView_;
    NSMutableArray *pendingDelegates_;
    NSMutableDictionary *delegates_;
    NSMutableArray *pendingJavaScriptCommands_;
    unsigned int requestId_;
    BOOL shouldCheckOid_;
}

+ (void)clear;
+ (id)sharedInstance;
@property(nonatomic) BOOL shouldCheckOid; // @synthesize shouldCheckOid=shouldCheckOid_;
- (void)cachedFile:(id)arg1 downloadDidFail:(id)arg2;
- (void)cachedFileDownloadDidEnd:(id)arg1;
- (id)cachedFile:(id)arg1 shouldRedirectToURL:(id)arg2;
- (void)failedToDownloadJavaScriptWithError:(id)arg1;
- (void)loadAdURL:(id)arg1;
- (void)loadSdkConstants:(id)arg1;
- (void)invalidRequest:(id)arg1;
- (void)buildAdURLForPendingDelegates;
- (void)buildAdURLFromRequestParameters:(id)arg1;
- (void)runCommandOnWebView:(id)arg1;
- (void)setupBuildAdWebView;
- (void)webViewDidFailLoad;
- (void)webViewDidFinishLoad;
- (void)unregisterFromWebViewNotifications;
- (void)registerForWebViewNotifications;
- (void)unregisterFromJavaScriptNotifications;
- (void)registerForJavaScriptNotifications;
- (void)removeAllDelegates;
- (void)removeDelegateWithRequestId:(id)arg1;
- (void)addDelegate:(id)arg1;
- (void)addPendingDelegate:(id)arg1;
- (void)clearCachedFile;
- (id)cachedJavaScriptFileURL;
- (void)executeJavaScriptFileFromURL:(id)arg1 withDelegate:(id)arg2;
- (void)dealloc;
- (id)init;

@end

