//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTTableLinkedItemCell.h"

@class UILabel;

__attribute__((visibility("hidden")))
@interface OSIMixTableCell : TTTableLinkedItemCell
{
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    UILabel *_priceLabel;
    UILabel *_countLabel;
}

+ (float)tableView:(id)arg1 rowHeightForObject:(id)arg2;
- (void)setObject:(id)arg1;
- (void)didMoveToSuperview;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)initSubViews;

@end
