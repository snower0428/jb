//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBSNSBasicSelectorScrollView.h"

@class UIImageView;

@interface TBSNSFeedStreamSelectorView : TBSNSBasicSelectorScrollView
{
    id <TBSNSPluginSelectorDelegate> _delegate;
    UIImageView *_imageScrollIndicatorView;
}

@property(retain, nonatomic) UIImageView *imageScrollIndicatorView; // @synthesize imageScrollIndicatorView=_imageScrollIndicatorView;
@property(nonatomic) id <TBSNSPluginSelectorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didSelectorScrollViewFinished:(id)arg1;
- (void)itemViewSelected:(id)arg1 atIndex:(unsigned int)arg2;
- (BOOL)itemViewSelected:(id)arg1 withOldItemView:(id)arg2;
- (void)setSelectorFrame:(unsigned int)arg1 defaultIndex:(unsigned int)arg2;
- (void)setSelectorProperty:(id)arg1 withIndex:(unsigned int)arg2 isSelect:(BOOL)arg3;
- (void)setScrollIndicatorView:(float)arg1;
- (void)dealloc;
- (void)setupView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

