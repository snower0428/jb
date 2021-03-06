//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIWebViewDelegate.h"

@class NSString, UIActivityIndicatorView, UIWebView;

__attribute__((visibility("hidden")))
@interface WBAuthorizeWebView : UIView <UIWebViewDelegate>
{
    UIView *panelView;
    UIView *containerView;
    UIActivityIndicatorView *indicatorView;
    UIWebView *webView;
    int previousOrientation;
    id <WBAuthorizeWebViewDelegate> delegate;
}

@property(nonatomic) id <WBAuthorizeWebViewDelegate> delegate; // @synthesize delegate;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (void)deviceOrientationDidChange:(id)arg1;
- (void)hide:(BOOL)arg1;
- (void)show:(BOOL)arg1;
- (void)loadRequestWithURL:(id)arg1;
- (void)hideAndCleanUp;
- (void)allAnimationsStopped;
- (void)bounceNormalAnimationStopped;
- (void)bounceInAnimationStopped;
- (void)bounceOutAnimationStopped;
- (void)removeObservers;
- (void)addObservers;
- (BOOL)shouldRotateToOrientation:(int)arg1;
- (struct CGAffineTransform)transformForOrientation:(int)arg1;
- (void)sizeToFitOrientation:(int)arg1;
- (int)currentOrientation;
- (void)onCloseButtonTouched:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

