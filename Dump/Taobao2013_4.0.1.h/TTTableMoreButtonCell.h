//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTTableSubtitleItemCell.h"

@class UIActivityIndicatorView;

@interface TTTableMoreButtonCell : TTTableSubtitleItemCell
{
    UIActivityIndicatorView *_activityIndicatorView;
    BOOL _animating;
}

+ (float)tableView:(id)arg1 rowHeightForObject:(id)arg2;
@property(nonatomic) BOOL animating; // @synthesize animating=_animating;
@property(readonly, nonatomic) UIActivityIndicatorView *activityIndicatorView;
- (void)setObject:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

