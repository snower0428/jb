//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBViewController.h"

@class AKSegmentedControl, TBWebViewController, UIView;

__attribute__((visibility("hidden")))
@interface TBMyCouponViewController : TBViewController
{
    int selectedIndex;
    TBWebViewController *web;
    AKSegmentedControl *segmentedControl;
    UIView *segmentBgView;
}

- (void).cxx_destruct;
- (void)ggkListUpdate;
- (void)refreshUI:(id)arg1;
- (void)setWebUrL:(id)arg1;
- (void)segmentedViewController:(id)arg1;
- (void)setupSegmentedControl;
- (void)viewDidLoad;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;
- (void)loadView;
- (void)dealloc;

@end
