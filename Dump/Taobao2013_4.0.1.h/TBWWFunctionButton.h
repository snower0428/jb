//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class UIImageView, UILabel;

@interface TBWWFunctionButton : UIControl
{
    UIImageView *_imageView;
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)touchUpOutside;
- (void)touchUpInside;
- (void)touchDown;
- (id)initWithImage:(id)arg1 hlImage:(id)arg2 title:(id)arg3;
- (id)init;
- (void)dealloc;

@end

