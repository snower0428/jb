//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UILabel;

@interface TBSelectCell : UITableViewCell
{
    UILabel *label;
    BOOL highlightTextWhenSelected;
    float labelXCenter;
}

@property(nonatomic) float labelXCenter; // @synthesize labelXCenter;
@property(nonatomic) BOOL highlightTextWhenSelected; // @synthesize highlightTextWhenSelected;
@property(retain, nonatomic) UILabel *label; // @synthesize label;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)layoutSubviews;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

