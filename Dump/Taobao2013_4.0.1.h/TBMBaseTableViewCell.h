//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIView;

@interface TBMBaseTableViewCell : UITableViewCell
{
    UIView *_cellView;
    UIView *_highlightView;
}

@property(retain, nonatomic) UIView *highlightView; // @synthesize highlightView=_highlightView;
@property(retain, nonatomic) UIView *cellView; // @synthesize cellView=_cellView;
- (void)dealloc;
- (void)setHighlighted:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (id)initWithReuseIdentifier:(id)arg1;

@end
