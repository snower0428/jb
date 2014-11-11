//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTTableViewCell.h"

@class TTTableControlItem, UIControl;

@interface TTTableControlCell : TTTableViewCell
{
    TTTableControlItem *_item;
    UIControl *_control;
}

+ (float)tableView:(id)arg1 rowHeightForObject:(id)arg2;
+ (BOOL)shouldRespectControlPadding:(id)arg1;
+ (BOOL)shouldSizeControlToFit:(id)arg1;
+ (BOOL)shouldConsiderControlIntrinsicSize:(id)arg1;
@property(readonly, nonatomic) UIControl *control; // @synthesize control=_control;
@property(readonly, nonatomic) TTTableControlItem *item; // @synthesize item=_item;
- (void)setObject:(id)arg1;
- (id)object;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end
