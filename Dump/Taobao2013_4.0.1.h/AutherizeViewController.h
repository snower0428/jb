//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIAlertViewDelegate.h"
#import "UIWebViewDelegate.h"

@class NSError, NSString, UIActivityIndicatorView, UIWebView;

@interface AutherizeViewController : UIViewController <UIWebViewDelegate, UIAlertViewDelegate>
{
    UIWebView *webView;
    UIActivityIndicatorView *indicatorView;
    NSString *requestURLString;
    NSString *returnCode;
    NSError *err;
    id <AuthorizeViewControllerDelegate> delegate;
}

@property(retain, nonatomic) NSError *err; // @synthesize err;
@property(retain, nonatomic) NSString *returnCode; // @synthesize returnCode;
@property(nonatomic) id delegate; // @synthesize delegate;
@property(retain, nonatomic) NSString *requestURLString; // @synthesize requestURLString;
- (void)onButtonCancel;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)dealloc;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (BOOL)isIPhone5Screen;
- (void)didReceiveMemoryWarning;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
