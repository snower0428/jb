//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UPBaseCell.h"

@class NSTimer, UIButton;

@interface UPSmsCodeCell : UPBaseCell
{
    UIButton *mBtnSmsCode;
    NSTimer *mTimer;
    int mCount;
    id mBtnTarget;
    SEL mBtnAction;
}

- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)isLegalLength;
- (void)caculateTime;
- (void)disableButton;
- (void)addSmsCodeTarget:(id)arg1 action:(SEL)arg2;
- (id)initWithFrame:(struct CGRect)arg1 content:(id)arg2 delegate:(id)arg3;

@end

