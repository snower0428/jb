//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTTableRadioCell.h"

@class MTBaseCell, UIImageView, UILabel;

@interface MTShipmentInfoSelectionTableViewCell : MTTableRadioCell
{
    MTBaseCell *_backgroundCell;
    UILabel *_nameLabel;
    UILabel *_phoneLabel;
    UILabel *_addressLabel;
    UIImageView *_checkboxView;
}

@property(retain, nonatomic) UIImageView *checkboxView; // @synthesize checkboxView=_checkboxView;
@property(retain, nonatomic) UILabel *addressLabel; // @synthesize addressLabel=_addressLabel;
@property(retain, nonatomic) UILabel *phoneLabel; // @synthesize phoneLabel=_phoneLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setRadioSelected:(BOOL)arg1;
- (void)setItem:(id)arg1;
- (id)init;

@end
