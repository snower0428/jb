/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Portal-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class RNBlurView, RNCloseButton, UIView, UIViewController;

@interface MMPModalView : XXUnknownSuperclass {
@private
	UIViewController* _controller;
	UIView* _parentView;
	UIView* _contentView;
	RNCloseButton* _dismissButton;
	RNBlurView* _blurView;
	id _completion;
	BOOL _isVisible;
	BOOL _dismissButtonRight;
	float _animationDuration;
	float _animationDelay;
	unsigned _animationOptions;
	id _defaultHideBlock;
}
@property(copy, nonatomic) id defaultHideBlock;
@property(assign) BOOL dismissButtonRight;
@property(assign) unsigned animationOptions;
@property(assign) float animationDelay;
@property(assign) float animationDuration;
@property(assign) BOOL isVisible;
+(id)generateModalViewWithTitle:(id)title message:(id)message;
-(void).cxx_destruct;
-(void)hideCloseButton:(BOOL)button;
-(void)hideWithDuration:(float)duration delay:(double)delay options:(unsigned)options completion:(id)completion;
-(void)hide;
-(void)delayedShow;
-(void)showWithDuration:(float)duration delay:(double)delay options:(unsigned)options completion:(id)completion;
-(void)show;
-(void)dealloc;
-(void)updateSubviews;
-(void)orientationDidChangeNotification:(id)orientation;
-(void)willMoveToSuperview:(id)superview;
-(void)layoutSubviews;
-(id)initWithTitle:(id)title message:(id)message;
-(id)initWithView:(id)view withParentView:(id)parentView;
-(id)initWithParentView:(id)parentView title:(id)title message:(id)message;
-(id)initWithParentView:(id)parentView view:(id)view;
-(id)initWithViewController:(id)viewController title:(id)title message:(id)message;
-(id)initWithViewController:(id)viewController view:(id)view;
-(id)initWithFrame:(CGRect)frame;
@end
