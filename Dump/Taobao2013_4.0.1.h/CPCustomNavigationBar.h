//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

@class UIView;

@interface CPCustomNavigationBar : UIImageView
{
    UIView *_titleView;
    BOOL _isFromTaoBao;
}

@property(retain, nonatomic, setter=setTitleView:) UIView *titleView; // @synthesize titleView=_titleView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setNavTitle:(id)arg1 isFromMyTaoBao:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
