//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTTableTextItemCell.h"

@class TTImageView;

@interface TTTableImageItemCell : TTTableTextItemCell
{
    TTImageView *_imageView2;
}

+ (float)tableView:(id)arg1 rowHeightForObject:(id)arg2;
+ (id)fontForImageItem:(id)arg1;
@property(readonly, nonatomic) TTImageView *imageView2; // @synthesize imageView2=_imageView2;
- (void)setObject:(id)arg1;
- (void)didMoveToSuperview;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

