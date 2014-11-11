//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSTimer, UIView, iToastSettings;

__attribute__((visibility("hidden")))
@interface iToast : NSObject
{
    iToastSettings *_settings;
    int offsetLeft;
    int offsetTop;
    NSTimer *timer;
    UIView *view;
    NSString *text;
}

+ (id)makeText:(id)arg1;
- (id)theSettings;
- (id)setPostion:(struct CGPoint)arg1;
- (id)setGravity:(int)arg1;
- (id)setGravity:(int)arg1 offsetLeft:(int)arg2 offsetTop:(int)arg3;
- (id)setDuration:(int)arg1;
- (void)removeToast:(id)arg1;
- (void)hideToast:(id)arg1;
- (void)show;
- (id)initWithText:(id)arg1;

@end
