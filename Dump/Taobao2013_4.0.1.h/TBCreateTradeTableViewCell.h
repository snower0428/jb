//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBTableViewCell.h"

@class TBCreateTradeNodeType, UIImageView, UIView;

@interface TBCreateTradeTableViewCell : TBTableViewCell
{
    TBCreateTradeNodeType *type;
    UIImageView *_seprateLine;
    UIView *_topSeprateLine;
    id delegate;
}

+ (float)tableView:(id)arg1 rowHeightForObject:(id)arg2;
@property(readonly, nonatomic) UIImageView *seprateLine; // @synthesize seprateLine=_seprateLine;
@property(nonatomic) id delegate; // @synthesize delegate;
@property(retain, nonatomic) TBCreateTradeNodeType *type; // @synthesize type;
- (void).cxx_destruct;
- (void)refreshDisplay;
- (void)setObject:(id)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end
