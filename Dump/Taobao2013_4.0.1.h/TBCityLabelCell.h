//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UILabel;

@interface TBCityLabelCell : UITableViewCell
{
    UILabel *_titleLabel;
    UILabel *_countLabel;
}

@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)setText:(id)arg1 countText:(id)arg2;
- (void)setText:(id)arg1 count:(int)arg2;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 height:(float)arg3 width:(float)arg4 showArrow:(BOOL)arg5 lineLeft:(float)arg6;

@end

