//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class MTBaseCell, UILabel;

@interface MTPurchaseCouponCell : UITableViewCell
{
    MTBaseCell *_backgroudCell;
    UILabel *_keyLabel;
    UILabel *_valueLabel;
}

+ (float)cellHeight;
@property(retain, nonatomic) UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(retain, nonatomic) UILabel *keyLabel; // @synthesize keyLabel=_keyLabel;
- (void).cxx_destruct;
- (void)setCoupon:(id)arg1 withIndex:(int)arg2 isBottom:(BOOL)arg3;
- (id)init;

@end

