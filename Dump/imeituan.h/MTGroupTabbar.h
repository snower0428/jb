//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTTabBar.h"

@class NSMutableArray, UIImageView;

@interface MTGroupTabbar : MTTabBar
{
    BOOL _haveShowUpdateTip;
    BOOL _hasShownNotification;
    NSMutableArray *_tabBarButtons;
    UIImageView *_moreButtonTipView;
    UIImageView *_mineButtonTipView;
}

@property(retain, nonatomic) UIImageView *mineButtonTipView; // @synthesize mineButtonTipView=_mineButtonTipView;
@property(retain, nonatomic) UIImageView *moreButtonTipView; // @synthesize moreButtonTipView=_moreButtonTipView;
@property(nonatomic) BOOL hasShownNotification; // @synthesize hasShownNotification=_hasShownNotification;
@property(nonatomic) BOOL haveShowUpdateTip; // @synthesize haveShowUpdateTip=_haveShowUpdateTip;
@property(retain, nonatomic) NSMutableArray *tabBarButtons; // @synthesize tabBarButtons=_tabBarButtons;
- (void).cxx_destruct;
- (void)showMoreButtonTip:(BOOL)arg1;
- (void)showMineButtonTip:(BOOL)arg1;
- (void)setSelectedItem:(id)arg1;
- (struct CGRect)frame;
- (struct CGRect)bounds;
- (void)layoutSubviews;
- (void)setSelectedIndex:(int)arg1;
- (void)setupTabBarImageView;
- (void)didClickTabButton:(id)arg1;
- (void)willMoveToWindow:(id)arg1;
- (id)init;

@end
