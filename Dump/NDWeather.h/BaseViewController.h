//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class ThemeManager, UIImageView;

__attribute__((visibility("hidden")))
@interface BaseViewController : UIViewController
{
    ThemeManager *themeManager;
    UIImageView *maskView;
    UIImageView *overView;
    UIImageView *topView;
    UIImageView *_backgroundView;
}

@property(nonatomic) UIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(readonly, nonatomic) ThemeManager *themeManager; // @synthesize themeManager;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)dealloc;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)updateTheme:(id)arg1;
- (void)updateTheme;
- (void)setupRightTitle:(id)arg1;
- (void)setupMainTitle:(id)arg1 withSubTitle:(id)arg2;
- (id)setupMainTitle:(id)arg1;
- (id)createDefaultLabel;
- (void)rightButton:(id)arg1;
- (void)setupRightButton:(id)arg1 withImage:(id)arg2 imageFrame:(struct CGRect)arg3;
- (void)setupRightButton:(id)arg1 withImage:(id)arg2;
- (void)setupRightButton:(id)arg1;
- (void)returnButton:(id)arg1;
- (void)setupReturnButton;
- (void)setupContentView;
- (void)setupNavigationBar;
- (void)setupBackground;
- (void)setupViewsLayoutID;
- (id)maskView;
- (void)reloadBackgroundImage;
- (void)reloadBackgroundImageOver:(id)arg1;
- (void)reloadBackgroundImageOver;
- (void)setupBackgroundImageOver:(struct CGRect)arg1 withImage:(id)arg2;
- (void)setupBackgroundImageOver:(struct CGRect)arg1;
- (void)setupBackgroundImage:(struct CGRect)arg1;
- (void)setupBackgroundImageOver;
- (void)setupBackgroundSplitView;
- (void)setupBackgroundImageTop;
- (void)setupBackgroundMask:(struct CGRect)arg1;
- (void)setupBackgroundMask;
- (void)setupBackgroundImage;
- (id)getSkinImage;

@end
