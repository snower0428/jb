//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIColor, UILabel;

@interface TBHotelMakeOrderTwoTextCell : UITableViewCell
{
    UIColor *formerTitelLabelColor;
    UIColor *formerValueLabelColor;
    BOOL _dimedValue;
    UILabel *keyTitelLabel;
    UILabel *valueLabel;
}

@property(retain, nonatomic) UILabel *valueLabel; // @synthesize valueLabel;
@property(retain, nonatomic) UILabel *keyTitelLabel; // @synthesize keyTitelLabel;
- (void).cxx_destruct;
- (void)setDimed:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)doInitialization;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end
