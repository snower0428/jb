//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MFMailComposeViewControllerDelegate.h"
#import "MFMessageComposeViewControllerDelegate.h"
#import "SKStoreProductViewControllerDelegate.h"

@class GADDelegateManager, GADObjectPrivate, GADWebView, NSURL, UIViewController;

__attribute__((visibility("hidden")))
@interface GADOpener : NSObject <MFMailComposeViewControllerDelegate, MFMessageComposeViewControllerDelegate, SKStoreProductViewControllerDelegate>
{
    GADDelegateManager *delegateManager_;
    UIViewController *viewController_;
    NSURL *referringURL_;
    GADWebView *webView_;
    GADObjectPrivate *adController_;
    BOOL didOpenAnotherApplication_;
    id <GADOpenerDelegate> delegate_;
}

@property(nonatomic) id <GADOpenerDelegate> delegate; // @synthesize delegate=delegate_;
@property(nonatomic) BOOL didOpenAnotherApplication; // @synthesize didOpenAnotherApplication=didOpenAnotherApplication_;
@property(nonatomic) GADObjectPrivate *adController; // @synthesize adController=adController_;
@property(nonatomic) GADWebView *webView; // @synthesize webView=webView_;
@property(retain, nonatomic) NSURL *referringURL; // @synthesize referringURL=referringURL_;
@property(nonatomic) UIViewController *viewController; // @synthesize viewController=viewController_;
@property(retain, nonatomic) GADDelegateManager *delegateManager; // @synthesize delegateManager=delegateManager_;
- (BOOL)isInAppStoreSupported;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(int)arg2;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (void)openSmsComposer:(id)arg1;
- (void)openEmailComposer:(id)arg1;
- (void)presentComposerController:(id)arg1;
- (void)openApp:(id)arg1;
- (void)expandToWebAppWithSupportedOrientations:(int)arg1 usingCustomClose:(BOOL)arg2;
- (void)openWebAppWithHTML:(id)arg1 supportedOrientations:(int)arg2 usingCustomClose:(BOOL)arg3;
- (void)openWebApp:(id)arg1 supportedOrientations:(int)arg2 usingCustomClose:(BOOL)arg3;
- (id)overlayWithWebView:(id)arg1 orientations:(int)arg2 usingCustomClose:(BOOL)arg3;
- (void)openBrowserToURL:(id)arg1 supportedOrientations:(int)arg2;
- (void)openInAppStore:(id)arg1 fallbackURLString:(id)arg2;
- (void)openNotification:(id)arg1;
- (void)didOpen;
- (void)didOpenInApp;
- (void)didOpenExternalApp;
- (BOOL)checkStateWithParamter:(id)arg1;
- (void)dealloc;

@end
