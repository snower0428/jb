//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UIImageView, UILabel;

@interface dynamicToolBarButton : UIView
{
    UIButton *_button;
    UIImageView *_imageView;
    UILabel *_lable;
    UIImageView *_pointImageView;
    UIImageView *_numberImageView;
    UILabel *_numberLable;
}

@property(retain, nonatomic) UILabel *numberLable; // @synthesize numberLable=_numberLable;
@property(retain, nonatomic) UIImageView *numberImageView; // @synthesize numberImageView=_numberImageView;
@property(retain, nonatomic) UIImageView *pointImageView; // @synthesize pointImageView=_pointImageView;
@property(retain, nonatomic) UILabel *lable; // @synthesize lable=_lable;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
- (void).cxx_destruct;
- (void)clearCount;
- (void)setCount:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end
