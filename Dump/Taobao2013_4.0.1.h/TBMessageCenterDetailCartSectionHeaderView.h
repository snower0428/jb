//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel;

__attribute__((visibility("hidden")))
@interface TBMessageCenterDetailCartSectionHeaderView : UIView
{
    UILabel *_dayLabel;
    UILabel *_hourLabel;
}

+ (float)heightWithViewModel:(id)arg1;
+ (id)headerViewWithTableView:(id)arg1;
@property(retain, nonatomic) UILabel *hourLabel; // @synthesize hourLabel=_hourLabel;
@property(retain, nonatomic) UILabel *dayLabel; // @synthesize dayLabel=_dayLabel;
- (void).cxx_destruct;
- (void)updateViewWithViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

