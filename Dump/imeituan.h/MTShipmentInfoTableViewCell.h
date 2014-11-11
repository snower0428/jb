//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTTableViewCell.h"

@class MTBaseCell, UILabel;

@interface MTShipmentInfoTableViewCell : MTTableViewCell
{
    UILabel *_label1;
    UILabel *_label2;
    UILabel *_label3;
    UILabel *_provinceAndCityLabel;
    UILabel *_label4;
    UILabel *_label5;
    MTBaseCell *_backgroundCell;
    UILabel *_nameLabel;
    UILabel *_phoneLabel;
    UILabel *_addressLabel;
    UILabel *_postCodeLabel;
}

@property(retain, nonatomic) UILabel *postCodeLabel; // @synthesize postCodeLabel=_postCodeLabel;
@property(retain, nonatomic) UILabel *addressLabel; // @synthesize addressLabel=_addressLabel;
@property(retain, nonatomic) UILabel *phoneLabel; // @synthesize phoneLabel=_phoneLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setDefaultState:(BOOL)arg1;
- (void)setItem:(id)arg1;
- (id)init;

@end
