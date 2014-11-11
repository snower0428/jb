//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

#import "TTStyleDelegate.h"

@class NSMutableDictionary, UIFont;

@interface TTButton : UIControl <TTStyleDelegate>
{
    NSMutableDictionary *_content;
    UIFont *_font;
    BOOL _isVertical;
    id <TTImageViewDelegate> _imageDelegate;
}

+ (id)buttonWithStyle:(id)arg1 title:(id)arg2;
+ (id)buttonWithStyle:(id)arg1;
@property(nonatomic) id <TTImageViewDelegate> imageDelegate; // @synthesize imageDelegate=_imageDelegate;
@property(nonatomic) BOOL isVertical; // @synthesize isVertical=_isVertical;
- (struct CGRect)rectForImage;
- (void)suspendLoadingImages:(BOOL)arg1;
- (void)setStylesWithSelector:(id)arg1;
- (void)setStyle:(id)arg1 forState:(unsigned int)arg2;
- (id)styleForState:(unsigned int)arg1;
- (void)setImage:(id)arg1 forState:(unsigned int)arg2;
- (id)imageForState:(unsigned int)arg1;
- (void)setTitle:(id)arg1 forState:(unsigned int)arg2;
- (id)titleForState:(unsigned int)arg1;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
- (void)imageView:(id)arg1 didLoadImage:(id)arg2;
- (id)imageForLayerWithStyle:(id)arg1;
- (id)textForLayerWithStyle:(id)arg1;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void)setEnabled:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)fontForCurrentState;
- (id)styleForCurrentState;
- (id)imageForCurrentState;
- (id)titleForCurrentState;
- (id)contentForCurrentState;
- (id)contentForState:(unsigned int)arg1;
- (id)keyForState:(unsigned int)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
