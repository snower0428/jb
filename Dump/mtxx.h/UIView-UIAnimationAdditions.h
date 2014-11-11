//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface UIView (UIAnimationAdditions)
- (void)flyOut:(double)arg1 delegate:(id)arg2 startSelector:(SEL)arg3 stopSelector:(SEL)arg4;
- (void)flyOut:(double)arg1 delegate:(id)arg2;
- (void)fallOut:(double)arg1 delegate:(id)arg2 startSelector:(SEL)arg3 stopSelector:(SEL)arg4;
- (void)fallOut:(double)arg1 delegate:(id)arg2;
- (void)fallIn:(double)arg1 delegate:(id)arg2 startSelector:(SEL)arg3 stopSelector:(SEL)arg4;
- (void)fallIn:(double)arg1 delegate:(id)arg2;
- (void)popOut:(double)arg1 delegate:(id)arg2;
- (void)popOut:(double)arg1 delegate:(id)arg2 startSelector:(SEL)arg3 stopSelector:(SEL)arg4;
- (void)popIn:(double)arg1 delegate:(id)arg2;
- (void)popIn:(double)arg1 delegate:(id)arg2 startSelector:(SEL)arg3 stopSelector:(SEL)arg4;
- (void)fadeBackgroundColorOut:(double)arg1 delegate:(id)arg2;
- (void)fadeBackgroundColorOut:(double)arg1 delegate:(id)arg2 startSelector:(SEL)arg3 stopSelector:(SEL)arg4;
- (void)fadeBackgroundColorIn:(double)arg1 delegate:(id)arg2;
- (void)fadeBackgroundColorIn:(double)arg1 delegate:(id)arg2 startSelector:(SEL)arg3 stopSelector:(SEL)arg4;
- (void)fadeOut:(double)arg1 delegate:(id)arg2;
- (void)fadeOut:(double)arg1 delegate:(id)arg2 startSelector:(SEL)arg3 stopSelector:(SEL)arg4;
- (void)fadeIn:(double)arg1 delegate:(id)arg2;
- (void)fadeIn:(double)arg1 delegate:(id)arg2 startSelector:(SEL)arg3 stopSelector:(SEL)arg4;
- (void)backInFrom:(int)arg1 inView:(id)arg2 withFade:(BOOL)arg3 duration:(double)arg4 delegate:(id)arg5 startSelector:(SEL)arg6 stopSelector:(SEL)arg7;
- (void)backInFrom:(int)arg1 withFade:(BOOL)arg2 duration:(double)arg3 delegate:(id)arg4;
- (void)backInFrom:(int)arg1 withFade:(BOOL)arg2 duration:(double)arg3 delegate:(id)arg4 startSelector:(SEL)arg5 stopSelector:(SEL)arg6;
- (void)backOutTo:(int)arg1 inView:(id)arg2 withFade:(BOOL)arg3 duration:(double)arg4 delegate:(id)arg5 startSelector:(SEL)arg6 stopSelector:(SEL)arg7;
- (void)backOutTo:(int)arg1 withFade:(BOOL)arg2 duration:(double)arg3 delegate:(id)arg4;
- (void)backOutTo:(int)arg1 withFade:(BOOL)arg2 duration:(double)arg3 delegate:(id)arg4 startSelector:(SEL)arg5 stopSelector:(SEL)arg6;
- (void)slideOutTo:(int)arg1 inView:(id)arg2 duration:(double)arg3 delegate:(id)arg4 startSelector:(SEL)arg5 stopSelector:(SEL)arg6;
- (void)slideOutTo:(int)arg1 duration:(double)arg2 delegate:(id)arg3;
- (void)slideOutTo:(int)arg1 duration:(double)arg2 delegate:(id)arg3 startSelector:(SEL)arg4 stopSelector:(SEL)arg5;
- (void)slideInFrom:(int)arg1 inView:(id)arg2 duration:(double)arg3 delegate:(id)arg4 startSelector:(SEL)arg5 stopSelector:(SEL)arg6;
- (void)slideInFrom:(int)arg1 duration:(double)arg2 delegate:(id)arg3;
- (void)slideInFrom:(int)arg1 duration:(double)arg2 delegate:(id)arg3 startSelector:(SEL)arg4 stopSelector:(SEL)arg5;
@end

