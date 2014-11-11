//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class NSMutableArray, NSTimer, UIImage, UIImageView, UIPageControl, UIScrollView;

@interface TBPageControlView : UIView <UIScrollViewDelegate>
{
    UIScrollView *_scrollView;
    UIPageControl *_pageControl;
    NSMutableArray *_pageArray;
    unsigned int _currrentPageIndex;
    int _orientation;
    double _automicPlayInterval;
    NSTimer *_timer;
    id <TBPageControlViewDelegate> _delegate;
    UIView *_pageControlBackground;
    UIImageView *_defaultImageView;
    UIImage *_defaultImage;
    BOOL _scrollEnabled;
    BOOL _isPlayed;
}

+ (id)pageControlViewWithPageArray:(id)arg1;
@property(readonly, nonatomic) BOOL isPlayed; // @synthesize isPlayed=_isPlayed;
@property(nonatomic) BOOL scrollEnabled; // @synthesize scrollEnabled=_scrollEnabled;
@property(retain, nonatomic) UIView *pageControlBackground; // @synthesize pageControlBackground=_pageControlBackground;
@property(retain, nonatomic) UIImage *defaultImage; // @synthesize defaultImage=_defaultImage;
@property(nonatomic) unsigned int currrentPageIndex; // @synthesize currrentPageIndex=_currrentPageIndex;
@property(nonatomic) id <TBPageControlViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double automicPlayInterval; // @synthesize automicPlayInterval=_automicPlayInterval;
@property(nonatomic) int orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) NSMutableArray *pageArray; // @synthesize pageArray=_pageArray;
- (void).cxx_destruct;
- (void)dealloc;
- (void)playAction;
- (void)stop;
- (void)play;
- (void)layoutView;
- (void)relaod;
- (void)pageControlTouched:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)layoutSubviews;
- (void)setCurrentShowPage:(int)arg1;
- (void)updateDisplayToIndex:(unsigned int)arg1;
- (void)pageControlValueChanged:(id)arg1;
- (void)updateViewAtIndex:(int)arg1 withView:(id)arg2;
- (void)addPageViewItem:(id)arg1;
- (void)setPages:(id)arg1;
- (void)showDefaultImage:(BOOL)arg1;
- (void)initView;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

@end

