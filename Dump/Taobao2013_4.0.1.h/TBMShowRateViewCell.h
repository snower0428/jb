//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBMBaseTableViewCell.h"

@class TBMRateRowItem, UIImageView, UILabel;

@interface TBMShowRateViewCell : TBMBaseTableViewCell
{
    UIImageView *_userImageView;
    UILabel *_usernickLabel;
    UILabel *_gmtTimeLablel;
    UILabel *_rateContentLabel;
    TBMRateRowItem *_rateRowItem;
}

@property(retain, nonatomic) TBMRateRowItem *rateRowItem; // @synthesize rateRowItem=_rateRowItem;
@property(retain, nonatomic) UILabel *rateContentLabel; // @synthesize rateContentLabel=_rateContentLabel;
@property(retain, nonatomic) UILabel *gmtTimeLablel; // @synthesize gmtTimeLablel=_gmtTimeLablel;
@property(retain, nonatomic) UILabel *usernickLabel; // @synthesize usernickLabel=_usernickLabel;
@property(retain, nonatomic) UIImageView *userImageView; // @synthesize userImageView=_userImageView;
- (void)dealloc;
- (void)showRateCellViewWithItem:(id)arg1;
- (id)initWithReuseIdentifier:(id)arg1;

@end

