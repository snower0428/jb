//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBMBaseTableViewCell.h"

@class TBMScheduled4SeatEmptyRowItem, UIImageView, UILabel;

@interface TBMScheduled4SeatEmptyTableViewCell : TBMBaseTableViewCell
{
    UIImageView *_bgView;
    UIImageView *_mainbgImageView;
    UIImageView *_endImageView;
    UILabel *_infoLabel;
    TBMScheduled4SeatEmptyRowItem *_Scheduled4SeatEmptyRowItem;
}

@property(retain, nonatomic) TBMScheduled4SeatEmptyRowItem *Scheduled4SeatEmptyRowItem; // @synthesize Scheduled4SeatEmptyRowItem=_Scheduled4SeatEmptyRowItem;
@property(retain, nonatomic) UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(retain, nonatomic) UIImageView *endImageView; // @synthesize endImageView=_endImageView;
@property(retain, nonatomic) UIImageView *mainbgImageView; // @synthesize mainbgImageView=_mainbgImageView;
@property(retain, nonatomic) UIImageView *bgView; // @synthesize bgView=_bgView;
- (void)dealloc;
- (void)setViews;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHighlighted:(BOOL)arg1;

@end
