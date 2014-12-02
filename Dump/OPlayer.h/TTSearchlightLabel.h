//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, NSTimer, UIColor, UIFont;

@interface TTSearchlightLabel : UIView
{
    NSString *_text;
    UIFont *_font;
    UIColor *_textColor;
    UIColor *_spotlightColor;
    int _textAlignment;
    NSTimer *_timer;
    float _spotlightPoint;
    struct CGContext *_maskContext;
    void *_maskData;
}

@property(nonatomic) int textAlignment; // @synthesize textAlignment=_textAlignment;
@property(retain, nonatomic) UIColor *spotlightColor; // @synthesize spotlightColor=_spotlightColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void)stopAnimating;
- (void)startAnimating;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)updateSpotlight;
- (struct CGImage *)newSpotlightMask:(struct CGRect)arg1 origin:(struct CGPoint)arg2 radius:(float)arg3;
- (void)releaseMask;
- (void)newMask;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
