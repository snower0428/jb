//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SHKFormFieldCell.h"

@class UISwitch;

@interface SHKFormFieldCellSwitch : SHKFormFieldCell
{
    UISwitch *mySwitch;
}

@property(retain, nonatomic) UISwitch *mySwitch; // @synthesize mySwitch;
- (void)switchChange:(id)arg1;
- (void)setupWithSettings:(id)arg1;
- (void)setupLayout;
- (void)dealloc;

@end
