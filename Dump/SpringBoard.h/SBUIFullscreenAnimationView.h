//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface SBUIFullscreenAnimationView : UIView
{
    id <SBUIFullscreenAnimationViewDelegate> _delegate;
    BOOL _animating;
}

@property(readonly, nonatomic) BOOL animating; // @synthesize animating=_animating;
@property(nonatomic) id <SBUIFullscreenAnimationViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_notifyDelegateThatAnimationIsDone;
- (void)_notifyDelegateAnimationBeganWithDuration:(double)arg1 delay:(double)arg2;
- (void)_animationEnded;
- (void)_animationBegan;
- (void)endTransition;
- (void)beginTransition;
- (void)setToView:(id)arg1;
- (void)setFromView:(id)arg1;

@end

