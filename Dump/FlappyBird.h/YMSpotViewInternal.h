//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMLUIView.h"

#import "UIScrollViewDelegate.h"

@class UIScrollView, YMLImageWebView, YMLPageControl, YMSpotPointsLabel, YouMiWallAppModel;

__attribute__((visibility("hidden")))
@interface YMSpotViewInternal : YMLUIView <UIScrollViewDelegate>
{
    float _rewardedBorderWidth;
    YMLImageWebView *_imageViewHead;
    UIScrollView *_scroller;
    YMSpotPointsLabel *_pointsLabel;
    YMLImageWebView *_imageViewTail;
    YMLPageControl *_pageControl;
    BOOL _isRewarded;
    YouMiWallAppModel *_spotDataAnother;
    YouMiWallAppModel *_spotData;
}

@property(retain, nonatomic) YouMiWallAppModel *spotData; // @synthesize spotData=_spotData;
@property(retain, nonatomic) YouMiWallAppModel *spotDataAnother; // @synthesize spotDataAnother=_spotDataAnother;
@property(nonatomic) BOOL isRewarded; // @synthesize isRewarded=_isRewarded;
@property(retain, nonatomic) YMLPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) YMLImageWebView *imageViewTail; // @synthesize imageViewTail=_imageViewTail;
@property(retain, nonatomic) YMSpotPointsLabel *pointsLabel; // @synthesize pointsLabel=_pointsLabel;
@property(retain, nonatomic) UIScrollView *scroller; // @synthesize scroller=_scroller;
@property(retain, nonatomic) YMLImageWebView *imageViewHead; // @synthesize imageViewHead=_imageViewHead;
- (void)_spotTapped:(id)arg1;
- (void)_morePointsPressed:(id)arg1;
- (void)_updateIntroduction;
- (void)_createIntroduction;
- (void)_increasePage;
- (void)_createPageControl;
- (void)_loadAnotherImageView;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)_createDisplayView:(id)arg1;
- (void)_createBackground;
- (void)dealloc;
- (id)initWithSpotADData:(id)arg1 isRewarded:(BOOL)arg2;

@end

