//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTTableViewCell.h"

@class TTActivityLabel, TTTableActivityItem;

@interface TTTableActivityItemCell : TTTableViewCell
{
    TTTableActivityItem *_item;
    TTActivityLabel *_activityLabel;
}

@property(readonly, nonatomic) TTActivityLabel *activityLabel; // @synthesize activityLabel=_activityLabel;
- (void)setObject:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end
