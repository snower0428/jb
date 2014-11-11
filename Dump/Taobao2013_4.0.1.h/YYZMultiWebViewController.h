//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WVRuleWebViewController.h"

#import "UIScrollViewDelegate.h"
#import "WVWebViewDelegate.h"
#import "YYZUIWebViewScrollDelegate.h"

@class NSMutableArray, UIScrollView, YYZUIPageControl, YYZUIWebView;

@interface YYZMultiWebViewController : WVRuleWebViewController <UIScrollViewDelegate, WVWebViewDelegate, YYZUIWebViewScrollDelegate>
{
    UIScrollView *scrollView;
    YYZUIPageControl *pageControl;
    YYZUIWebView *indexView;
    NSMutableArray *webViews;
    float tabBarHeight;
}

- (void).cxx_destruct;
- (id)getPageAddressFromContext;
- (id)getPageAddressFromConfig;
- (void)resetWebViewsInitStatus;
- (void)updateWebViewStatus:(id)arg1 withForceUpdate:(BOOL)arg2;
- (void)updateAllTabScreen;
- (void)buildScreen:(int)arg1;
- (void)buildTabScreen;
- (void)doLoadIndex;
- (void)buildIndexWebView;
- (void)initIndexWebView:(float)arg1 withHeight:(float)arg2;
- (void)formatPageControl:(float)arg1;
- (void)initPageControl:(float)arg1 withHeight:(float)arg2;
- (void)initScrollView:(float)arg1 withHeight:(float)arg2;
- (void)doLoadView;
- (void)tbScrollViewDidEndDecelerating:(id)arg1;
- (void)tbScrollViewDidScroll:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (BOOL)tbWebView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
- (void)tbWebViewDidFinishLoad:(id)arg1;
- (void)tbWebViewDidStartLoad:(id)arg1;
- (void)setTabBarHeight:(float)arg1;
- (id)getWebViewsUpdateAddress;
- (id)getIndexUrl;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (id)init;

@end
