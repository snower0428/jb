//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILongPressGestureRecognizer.h"

__attribute__((visibility("hidden")))
@interface RNLongPressGestureRecognizer : UILongPressGestureRecognizer
{
    BOOL _touchesDidMove;
    struct CGPoint _startLocation;
}

- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end

