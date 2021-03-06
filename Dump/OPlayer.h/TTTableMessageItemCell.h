//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTTableLinkedItemCell.h"

@class TTImageView, UILabel;

@interface TTTableMessageItemCell : TTTableLinkedItemCell
{
    UILabel *_titleLabel;
    UILabel *_timestampLabel;
    TTImageView *_imageView2;
}

+ (float)tableView:(id)arg1 rowHeightForObject:(id)arg2;
@property(readonly, nonatomic) TTImageView *imageView2;
@property(readonly, nonatomic) UILabel *timestampLabel;
@property(readonly, nonatomic) UILabel *captionLabel;
@property(readonly, nonatomic) UILabel *titleLabel;
- (void)setObject:(id)arg1;
- (void)didMoveToSuperview;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

