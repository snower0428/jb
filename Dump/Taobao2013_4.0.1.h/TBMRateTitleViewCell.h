//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBMBaseTableViewCell.h"

@class TBMRateTitleItem, UILabel;

@interface TBMRateTitleViewCell : TBMBaseTableViewCell
{
    UILabel *_rateTitleLabel;
    TBMRateTitleItem *_titleItem;
}

@property(retain, nonatomic) TBMRateTitleItem *titleItem; // @synthesize titleItem=_titleItem;
@property(retain, nonatomic) UILabel *rateTitleLabel; // @synthesize rateTitleLabel=_rateTitleLabel;
- (void)dealloc;
- (void)showRateTitleView:(id)arg1;
- (id)initWithReuseIdentifier:(id)arg1;

@end
