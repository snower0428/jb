//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class ButtonGroupView, UIImage;

@interface CPTitleButtonGroup : UIView
{
    struct CGRect _displayRect;
    ButtonGroupView *_btnGroup;
    UIImage *triangle;
    UIImage *backGround;
    int _padding;
}

@property(nonatomic) ButtonGroupView *btnGroup; // @synthesize btnGroup=_btnGroup;
@property(nonatomic) int padding; // @synthesize padding=_padding;
@property(retain, nonatomic) UIImage *backGround; // @synthesize backGround;
@property(retain, nonatomic) UIImage *triangle; // @synthesize triangle;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

