//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIWebView.h"

#import "UIAlertViewDelegate.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface GADWebView : UIWebView <UIAlertViewDelegate>
{
}

- (void)handleGesture:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)createGestureRecognizer;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)didRotateToOrientation:(int)arg1;
- (void)forceRotateToOrientation:(int)arg1;
- (void)setHtmlWindowWithOrientation:(int)arg1 andFireEvent:(BOOL)arg2;
- (void)notifyOfSdkEvent:(id)arg1;
- (void)restoreState;
- (void)saveState;
- (void)dealloc;
- (void)reset;
- (void)reportBadAd:(id)arg1;
- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) BOOL didReceiveLoadEvent;
@property(nonatomic) BOOL showDebug;
- (id)alertView;
- (void)setAlertView:(id)arg1;
@property(copy, nonatomic) NSString *adDebugDialog;
@property(nonatomic) BOOL touched;
- (id)vars;

@end

