//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel, UIScrollView;

@interface TBDetailPullUp : UIView
{
    UIImageView *_arrow;
    UILabel *_msg;
    UIImageView *_bg;
    UIScrollView *_scrollView;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setText:(id)arg1;
- (void)setScrollView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

