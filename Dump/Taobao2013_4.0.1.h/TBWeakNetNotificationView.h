//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBBlurView.h"

@class UISwitch;

__attribute__((visibility("hidden")))
@interface TBWeakNetNotificationView : TBBlurView
{
    CDUnknownBlockType _dismissBlock;
    UISwitch *_switchBtn;
}

@property(retain, nonatomic) UISwitch *switchBtn; // @synthesize switchBtn=_switchBtn;
@property(copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
- (void).cxx_destruct;
- (BOOL)showWeakNetNotificationViewInView:(id)arg1 below:(id)arg2;
- (void)iknowBtnClick:(id)arg1;
- (void)switchButtonClick:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

