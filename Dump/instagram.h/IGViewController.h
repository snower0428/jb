//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class IGModalTransition, IGNavigationController, IGTabBarController, NSString, UIBarButtonItem;

@interface IGViewController : UIViewController
{
    UIBarButtonItem *_backItem;
    BOOL _showsCancelButton;
    BOOL _isInPopover;
    BOOL _useCustomModalTransition;
    NSString *_backButtonTitle;
    UIBarButtonItem *_loadingBarButtonItem;
    float _headerViewOffset;
    int _statusBarStyle;
    IGModalTransition *_modalTransition;
}

@property(retain, nonatomic) IGModalTransition *modalTransition; // @synthesize modalTransition=_modalTransition;
@property(nonatomic) BOOL useCustomModalTransition; // @synthesize useCustomModalTransition=_useCustomModalTransition;
@property(nonatomic) int statusBarStyle; // @synthesize statusBarStyle=_statusBarStyle;
@property(nonatomic) BOOL isInPopover; // @synthesize isInPopover=_isInPopover;
@property(readonly, nonatomic) float headerViewOffset; // @synthesize headerViewOffset=_headerViewOffset;
@property(nonatomic) BOOL showsCancelButton; // @synthesize showsCancelButton=_showsCancelButton;
@property(retain, nonatomic) UIBarButtonItem *loadingBarButtonItem; // @synthesize loadingBarButtonItem=_loadingBarButtonItem;
@property(copy, nonatomic) NSString *backButtonTitle; // @synthesize backButtonTitle=_backButtonTitle;
- (void).cxx_destruct;
- (void)dismissViewControllerAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showCancelButtonWithTitle:(id)arg1;
- (void)showCancelButtonWithTitle:(id)arg1 style:(int)arg2;
- (void)setShowsCancelButton:(BOOL)arg1 style:(int)arg2;
- (void)setTitle:(id)arg1;
- (BOOL)hidesBottomBarWhenPushed;
- (void)setHidesBottomBarWhenPushed:(BOOL)arg1;
- (BOOL)prefersTabBarHidden;
- (int)preferredStatusBarStyle;
@property(readonly, nonatomic) IGTabBarController *tabBarController;
@property(readonly, nonatomic) IGNavigationController *navigationController;
- (BOOL)prefersStatusBarHidden;
- (BOOL)prefersNavigationBarHidden;
- (void)onCancelModal;
- (void)onPop;
- (id)navigationItem;
- (id)backItem;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
@property(readonly, nonatomic) BOOL disableNavigationGesture;
- (BOOL)automaticallyAdjustsScrollViewInsets;
@property(readonly, nonatomic) struct UIEdgeInsets preferredContentInsets;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
