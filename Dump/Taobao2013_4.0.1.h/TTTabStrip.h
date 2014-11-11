//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTTabBar.h"

#import "UIScrollViewDelegate.h"

@class TTView, UIScrollView;

@interface TTTabStrip : TTTabBar <UIScrollViewDelegate>
{
    TTView *_overflowLeft;
    TTView *_overflowRight;
    UIScrollView *_scrollView;
    BOOL _contentSizeCached;
    struct CGSize _contentSize;
}

- (void)setTabItems:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)layoutTabs;
- (void)updateOverflow;
- (void)addTab:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

