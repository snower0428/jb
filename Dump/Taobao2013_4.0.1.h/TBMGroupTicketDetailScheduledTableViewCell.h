//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBMBaseTableViewCell.h"

@class TBMGroupTicketDetailScheduledRowItem, UILabel, UIView;

@interface TBMGroupTicketDetailScheduledTableViewCell : TBMBaseTableViewCell
{
    UILabel *_scheduledNameLabel;
    UIView *_scheduledListView;
    UILabel *_noneScheduledLabel;
    TBMGroupTicketDetailScheduledRowItem *_GroupTicketDetailScheduledRowItem;
}

@property(retain, nonatomic) TBMGroupTicketDetailScheduledRowItem *GroupTicketDetailScheduledRowItem; // @synthesize GroupTicketDetailScheduledRowItem=_GroupTicketDetailScheduledRowItem;
@property(retain, nonatomic) UILabel *noneScheduledLabel; // @synthesize noneScheduledLabel=_noneScheduledLabel;
@property(retain, nonatomic) UIView *scheduledListView; // @synthesize scheduledListView=_scheduledListView;
@property(retain, nonatomic) UILabel *scheduledNameLabel; // @synthesize scheduledNameLabel=_scheduledNameLabel;
- (void)dealloc;
- (void)setViews;

@end

