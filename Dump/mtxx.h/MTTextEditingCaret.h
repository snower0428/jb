//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSTimer;

__attribute__((visibility("hidden")))
@interface MTTextEditingCaret : UIView
{
    NSTimer *_blinkTimer;
}

@property(retain, nonatomic) NSTimer *blinkTimer; // @synthesize blinkTimer=_blinkTimer;
- (void).cxx_destruct;
- (void)blink;
- (void)stopBlink;
- (void)delayBlink;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

