//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TBAudioTouchView, UITouch;

@protocol TBAudioTouchViewDelegate <NSObject>
- (void)audioTouchView:(TBAudioTouchView *)arg1 didEndTouch:(UITouch *)arg2;
- (void)audioTouchView:(TBAudioTouchView *)arg1 didMovedTouch:(UITouch *)arg2;
- (void)audioTouchView:(TBAudioTouchView *)arg1 didBeganTouch:(UITouch *)arg2;
@end

