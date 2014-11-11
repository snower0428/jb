//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class RNBlurView, RNCloseButton, UIViewController;

@interface MMPModalView : UIView
{
    UIViewController *_controller;
    UIView *_parentView;
    UIView *_contentView;
    RNCloseButton *_dismissButton;
    RNBlurView *_blurView;
    CDUnknownBlockType _completion;
    BOOL _isVisible;
    BOOL _dismissButtonRight;
    float _animationDuration;
    float _animationDelay;
    unsigned int _animationOptions;
    CDUnknownBlockType _defaultHideBlock;
}

+ (id)generateModalViewWithTitle:(id)arg1 message:(id)arg2;
@property(copy, nonatomic) CDUnknownBlockType defaultHideBlock; // @synthesize defaultHideBlock=_defaultHideBlock;
@property BOOL dismissButtonRight; // @synthesize dismissButtonRight=_dismissButtonRight;
@property unsigned int animationOptions; // @synthesize animationOptions=_animationOptions;
@property float animationDelay; // @synthesize animationDelay=_animationDelay;
@property float animationDuration; // @synthesize animationDuration=_animationDuration;
@property BOOL isVisible; // @synthesize isVisible=_isVisible;
- (void).cxx_destruct;
- (void)hideCloseButton:(BOOL)arg1;
- (void)hideWithDuration:(float)arg1 delay:(double)arg2 options:(unsigned int)arg3 completion:(CDUnknownBlockType)arg4;
- (void)hide;
- (void)delayedShow;
- (void)showWithDuration:(float)arg1 delay:(double)arg2 options:(unsigned int)arg3 completion:(CDUnknownBlockType)arg4;
- (void)show;
- (void)dealloc;
- (void)updateSubviews;
- (void)orientationDidChangeNotification:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (void)layoutSubviews;
- (id)initWithTitle:(id)arg1 message:(id)arg2;
- (id)initWithView:(id)arg1 withParentView:(id)arg2;
- (id)initWithParentView:(id)arg1 title:(id)arg2 message:(id)arg3;
- (id)initWithParentView:(id)arg1 view:(id)arg2;
- (id)initWithViewController:(id)arg1 title:(id)arg2 message:(id)arg3;
- (id)initWithViewController:(id)arg1 view:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
