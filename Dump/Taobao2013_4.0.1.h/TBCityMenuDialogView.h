//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "TBCityScrollViewDataSource.h"
#import "TBCityScrollViewDelegate.h"
#import "UIScrollViewDelegate.h"

@class TBCityColorPageControl, TBCityMenuItem, TBCityMenuService, TBCityScrollView, UIActivityIndicatorView;

@interface TBCityMenuDialogView : UIView <TBCityScrollViewDataSource, TBCityScrollViewDelegate, UIScrollViewDelegate>
{
    UIView *_dialogView;
    UIActivityIndicatorView *_indicatorView;
    TBCityMenuItem *_menuItem;
    TBCityScrollView *_scrollView;
    TBCityColorPageControl *_pageControl;
    TBCityMenuService *_menuService;
}

@property(retain, nonatomic) TBCityMenuService *menuService; // @synthesize menuService=_menuService;
@property(retain, nonatomic) TBCityColorPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) TBCityScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) TBCityMenuItem *menuItem; // @synthesize menuItem=_menuItem;
- (void).cxx_destruct;
- (id)TBCityScrollView:(id)arg1 subViewForPageAtIndex:(int)arg2;
- (int)numberForPagesInTBScrollView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)show;
- (void)doClose;
- (void)render;
- (void)loadMoreData;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 withItem:(id)arg2;

@end

