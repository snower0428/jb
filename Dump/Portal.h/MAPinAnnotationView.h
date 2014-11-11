/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Portal-Structs.h"
#import "MAAnnotationView.h"

@class UIImageView;

@interface MAPinAnnotationView : MAAnnotationView {
@private
	unsigned _pinColor;
	BOOL _animatesDrop;
	UIImageView* _shadowImageView;
	CGRect validRect;
}
@property(assign, nonatomic) CGRect validRect;
@property(retain, nonatomic) UIImageView* shadowImageView;
@property(assign, nonatomic) BOOL animatesDrop;
@property(assign, nonatomic) unsigned pinColor;
-(void).cxx_destruct;
-(id)initWithAnnotation:(id)annotation reuseIdentifier:(id)identifier;
-(void)willMoveToSuperview:(id)superview;
-(BOOL)pointInside:(CGPoint)inside withEvent:(id)event;
-(void)setDragState:(unsigned)state animated:(BOOL)animated;
-(void)animationDidStop:(id)animation finished:(BOOL)finished;
-(void)onDrowDonwWithSelector:(id)selector cancel:(BOOL)cancel animated:(BOOL)animated;
-(void)onPickUpWithSelector:(id)selector animated:(BOOL)animated;
-(id)dropAnimationWithFromPoint:(CGPoint)point completion:(id)completion;
-(id)shadowAnimationFromPoint:(CGPoint*)point toPoint:(CGPoint*)point2 duration:(double)duration completion:(id)completion;
-(id)liftImageForPinColor:(unsigned)pinColor;
-(void)changeToLift:(BOOL)lift;
-(id)imageForPinColor:(unsigned)pinColor;
@end

