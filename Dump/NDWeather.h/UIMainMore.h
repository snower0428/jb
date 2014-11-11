//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseViewController.h"

#import "IndicatorTipsService.h"
#import "JMTabViewDelegate.h"

@class JMTabView, NSMutableArray, ThemeManager, TopSelectionView, UIImageView, UIView, UIViewController;

__attribute__((visibility("hidden")))
@interface UIMainMore : BaseViewController <JMTabViewDelegate, IndicatorTipsService>
{
    NSMutableArray *viewControllers;
    UIViewController *selectedViewController;
    JMTabView *tabView;
    ThemeManager *themeManagerInstance;
    UIImageView *selectedTab;
    TopSelectionView *selectionView;
    NSMutableArray *tabItems;
    UIImageView *imageViewSplit;
    UIView *contentView;
}

@property(nonatomic) UIView *contentView; // @synthesize contentView;
@property(retain, nonatomic) JMTabView *tabView; // @synthesize tabView;
@property(retain, nonatomic) UIViewController *selectedViewController; // @synthesize selectedViewController;
@property(retain, nonatomic) UIImageView *imageViewSplit; // @synthesize imageViewSplit;
@property(retain, nonatomic) NSMutableArray *tabItems; // @synthesize tabItems;
@property(retain, nonatomic) TopSelectionView *selectionView; // @synthesize selectionView;
@property(retain, nonatomic) UIImageView *selectedTab; // @synthesize selectedTab;
@property(retain, nonatomic) NSMutableArray *viewControllers; // @synthesize viewControllers;
- (void)receiveHideIndicatorTip:(id)arg1;
- (void)receiveShowIndicatorTip:(id)arg1;
- (void)hideToolsIndicatorTip:(int)arg1;
- (void)showToolsIndicatorTip:(int)arg1;
- (void)dealloc;
- (void)viewDidUnload;
- (void)viewDidAppear:(BOOL)arg1;
- (void)loadView;
- (void)didReceiveMemoryWarning;
- (void)updateTheme;
- (id)TitleName;
- (id)ImageSelectName;
- (id)ImageName;
- (void)addTabs;
- (id)createNoAppTabItems;
- (id)createFullTabItems;
- (void)tabView:(id)arg1 didSelectTabAtIndex:(unsigned int)arg2;

@end

