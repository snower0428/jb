//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "TBScrollViewDataSource.h"
#import "TBScrollViewDelegate.h"
#import "UIScrollViewDelegate.h"

@class NSMutableArray, TBJUScrollView, UIPageControl;

@interface TBJUBannerView : UIView <TBScrollViewDataSource, TBScrollViewDelegate, UIScrollViewDelegate>
{
    TBJUScrollView *_bannerScrollView;
    UIPageControl *_bannerPageControll;
    NSMutableArray *_dataArray;
    id <TBJUBannerViewDelegate> _delegate;
}

@property(nonatomic) id <TBJUBannerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setItems:(id)arg1;
- (id)scrollView;
- (void)TBScrollView:(id)arg1 didSelectePageAtIndex:(int)arg2;
- (id)TBScrollView:(id)arg1 subViewForPageAtIndex:(int)arg2;
- (int)numberForPagesInTBScrollView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)pageDotChanged:(id)arg1;
- (void)bannerClicked;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

