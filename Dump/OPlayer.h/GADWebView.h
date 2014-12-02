//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIWebView.h"

#import "UIAlertViewDelegate.h"

@class GADImpressionTicketGestureRecognizer, GADUIWebViewGestureDelgate, NSString, NSURL, UIAlertView, UIView, UIViewController;

__attribute__((visibility("hidden")))
@interface GADWebView : UIWebView <UIAlertViewDelegate>
{
    BOOL _touched;
    BOOL _showDebug;
    BOOL _didReceiveLoadEvent;
    BOOL _savedState;
    BOOL _activeViewUnloadPingReceived;
    BOOL _activeViewVisibility;
    UIViewController *_viewController;
    NSString *_adDebugDialog;
    int _orientation;
    GADUIWebViewGestureDelgate *_gestureDelegate;
    GADImpressionTicketGestureRecognizer *_gesture;
    UIAlertView *_alertView;
    UIView *_savedSuperview;
    id <UIWebViewDelegate> _savedDelegate;
    NSURL *_url;
    id <GADWebViewActiveViewMonitoring> _activeViewObserver;
    NSURL *_URL;
    UIViewController *_viewControllerBeforeExpanded;
    struct CGRect _savedFrame;
}

@property(nonatomic) __weak UIViewController *viewControllerBeforeExpanded; // @synthesize viewControllerBeforeExpanded=_viewControllerBeforeExpanded;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(nonatomic) __weak id <GADWebViewActiveViewMonitoring> activeViewObserver; // @synthesize activeViewObserver=_activeViewObserver;
@property(nonatomic) BOOL activeViewVisibility; // @synthesize activeViewVisibility=_activeViewVisibility;
@property(nonatomic) BOOL activeViewUnloadPingReceived; // @synthesize activeViewUnloadPingReceived=_activeViewUnloadPingReceived;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) id <UIWebViewDelegate> savedDelegate; // @synthesize savedDelegate=_savedDelegate;
@property(retain, nonatomic) UIView *savedSuperview; // @synthesize savedSuperview=_savedSuperview;
@property(nonatomic) struct CGRect savedFrame; // @synthesize savedFrame=_savedFrame;
@property(nonatomic) BOOL savedState; // @synthesize savedState=_savedState;
@property(retain, nonatomic) UIAlertView *alertView; // @synthesize alertView=_alertView;
@property(retain, nonatomic) GADImpressionTicketGestureRecognizer *gesture; // @synthesize gesture=_gesture;
@property(retain, nonatomic) GADUIWebViewGestureDelgate *gestureDelegate; // @synthesize gestureDelegate=_gestureDelegate;
@property(nonatomic) int orientation; // @synthesize orientation=_orientation;
@property(nonatomic) BOOL didReceiveLoadEvent; // @synthesize didReceiveLoadEvent=_didReceiveLoadEvent;
@property(nonatomic) BOOL showDebug; // @synthesize showDebug=_showDebug;
@property(copy, nonatomic) NSString *adDebugDialog; // @synthesize adDebugDialog=_adDebugDialog;
@property(nonatomic) BOOL touched; // @synthesize touched=_touched;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (void)setURL:(id)arg1 forView:(id)arg2;
- (void)handleGesture:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)createGestureRecognizer;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)didRotateToOrientation:(int)arg1;
- (void)forceRotateToOrientation:(int)arg1;
- (void)setHTMLWindowOrientation:(int)arg1 shouldDispatchOrientationChangeEvent:(BOOL)arg2;
- (void)notifyOfSdkEvent:(id)arg1;
- (void)restoreState;
- (void)saveState;
- (void)dealloc;
- (void)reset;
- (void)reportBadAd:(id)arg1;
- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

