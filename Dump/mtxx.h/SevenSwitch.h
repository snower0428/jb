//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class UIColor, UIImage, UIImageView, UIView;

__attribute__((visibility("hidden")))
@interface SevenSwitch : UIControl
{
    UIView *background;
    UIView *knob;
    UIImageView *onImageView;
    UIImageView *offImageView;
    BOOL currentVisualValue;
    BOOL startTrackingValue;
    BOOL didChangeWhileTracking;
    BOOL isAnimating;
    BOOL isRounded;
    BOOL on;
    UIColor *inactiveColor;
    UIColor *activeColor;
    UIColor *onTintColor;
    UIColor *borderColor;
    UIColor *thumbTintColor;
    UIColor *shadowColor;
    UIImage *onImage;
    UIImage *offImage;
}

@property(nonatomic) BOOL on; // @synthesize on;
@property(nonatomic) BOOL isRounded; // @synthesize isRounded;
@property(retain, nonatomic) UIImage *offImage; // @synthesize offImage;
@property(retain, nonatomic) UIImage *onImage; // @synthesize onImage;
@property(retain, nonatomic) UIColor *shadowColor; // @synthesize shadowColor;
@property(retain, nonatomic) UIColor *thumbTintColor; // @synthesize thumbTintColor;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor;
@property(retain, nonatomic) UIColor *onTintColor; // @synthesize onTintColor;
@property(retain, nonatomic) UIColor *activeColor; // @synthesize activeColor;
@property(retain, nonatomic) UIColor *inactiveColor; // @synthesize inactiveColor;
- (void).cxx_destruct;
- (void)setEnabled:(BOOL)arg1;
@property(retain, nonatomic) UIColor *knobColor;
@property(retain, nonatomic) UIColor *onColor;
- (void)showOff:(BOOL)arg1;
- (void)showOn:(BOOL)arg1;
- (BOOL)isOn;
- (void)setOn:(BOOL)arg1 animated:(BOOL)arg2;
- (void)layoutSubviews;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

