//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UILabel, UISwitch;

@interface OrderCheckboxRateCell : UITableViewCell
{
    UILabel *_titleLbl;
    UISwitch *_switcher;
}

+ (float)calculateHeight;
@property(retain) UISwitch *switcher; // @synthesize switcher=_switcher;
- (void).cxx_destruct;
- (void)configRateCell:(id)arg1 canSwitch:(BOOL)arg2 switcher:(BOOL)arg3;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

