//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTView.h"

@class NSArray, NSMutableArray, NSString, TTTab, TTTabItem;

@interface TTTabBar : TTView
{
    NSString *_tabStyle;
    int _selectedTabIndex;
    NSArray *_tabItems;
    NSMutableArray *_tabViews;
    id <TTTabDelegate> _delegate;
}

@property(nonatomic) id <TTTabDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int selectedTabIndex; // @synthesize selectedTabIndex=_selectedTabIndex;
@property(copy, nonatomic) NSString *tabStyle; // @synthesize tabStyle=_tabStyle;
@property(readonly, nonatomic) NSArray *tabViews; // @synthesize tabViews=_tabViews;
@property(copy, nonatomic) NSArray *tabItems; // @synthesize tabItems=_tabItems;
- (void)hideTabAtIndex:(int)arg1;
- (void)showTabAtIndex:(int)arg1;
@property(nonatomic) TTTab *selectedTabView;
@property(nonatomic) TTTabItem *selectedTabItem;
- (void)layoutSubviews;
- (void)tabTouchedUp:(id)arg1;
- (void)addTab:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)layoutTabs;

@end

