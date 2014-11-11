//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBSNSBasicSelectorScrollView.h"

#import "UIScrollViewDelegate.h"

@class UIImageView;

@interface TBSNSPluginSelectorView : TBSNSBasicSelectorScrollView <UIScrollViewDelegate>
{
    id <TBSNSPluginSelectorDelegate> _delegate;
    float _selectViewWidth;
    UIImageView *_imageScrollIndicatorView;
    UIImageView *_imageTopMaskView;
    UIImageView *_imageBottomMaskView;
    UIImageView *_imageBGView;
    double _time;
}

@property(retain, nonatomic) UIImageView *imageBGView; // @synthesize imageBGView=_imageBGView;
@property(retain, nonatomic) UIImageView *imageBottomMaskView; // @synthesize imageBottomMaskView=_imageBottomMaskView;
@property(retain, nonatomic) UIImageView *imageTopMaskView; // @synthesize imageTopMaskView=_imageTopMaskView;
@property(retain, nonatomic) UIImageView *imageScrollIndicatorView; // @synthesize imageScrollIndicatorView=_imageScrollIndicatorView;
@property(nonatomic) double time; // @synthesize time=_time;
@property(nonatomic) float selectViewWidth; // @synthesize selectViewWidth=_selectViewWidth;
@property(nonatomic) id <TBSNSPluginSelectorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)itemViewClickedCancel:(id)arg1;
- (void)itemViewClickedDown:(id)arg1;
- (void)itemViewSelected:(id)arg1 atIndex:(unsigned int)arg2;
- (BOOL)itemViewSelected:(id)arg1 withOldItemView:(id)arg2;
- (void)setSelectorFrame:(unsigned int)arg1 defaultIndex:(unsigned int)arg2;
- (void)setSelectorProperty:(id)arg1 withIndex:(unsigned int)arg2 isSelect:(BOOL)arg3;
- (void)setPluginSelectViewItem:(id)arg1;
- (void)setupView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) float buttonHeight;
@property(nonatomic) float buttonWidth;

@end
