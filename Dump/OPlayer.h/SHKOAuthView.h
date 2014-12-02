//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIWebViewDelegate.h"

@class NSString, UIActivityIndicatorView, UIWebView;

@interface SHKOAuthView : UIViewController <UIWebViewDelegate>
{
    UIWebView *webView;
    id delegate;
    UIActivityIndicatorView *spinner;
}

@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner;
@property(retain) id <SHKOAuthViewDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView;
- (void)cancel;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)stopSpinner;
- (void)startSpinner;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)loadView;
- (id)initWithURL:(id)arg1 delegate:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

