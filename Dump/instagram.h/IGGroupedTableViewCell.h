//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGTableViewCell.h"

@class UIColor;

@interface IGGroupedTableViewCell : IGTableViewCell
{
    BOOL _enabled;
    BOOL _actionable;
    UIColor *_defaultBackgroundColor;
    int _sidePadding;
}

@property(nonatomic) int sidePadding; // @synthesize sidePadding=_sidePadding;
@property(nonatomic) BOOL actionable; // @synthesize actionable=_actionable;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)configureTextLabels;
- (void)applySelectedStyle:(BOOL)arg1;
@property(retain, nonatomic) UIColor *defaultBackgroundColor; // @synthesize defaultBackgroundColor=_defaultBackgroundColor;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

