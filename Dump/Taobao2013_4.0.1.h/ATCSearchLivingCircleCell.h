//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class ATCSearchLivingCircleCellContentView, MtopArcticCircleGetCircleListResponseDataCircleList;

@interface ATCSearchLivingCircleCell : UITableViewCell
{
    MtopArcticCircleGetCircleListResponseDataCircleList *_item;
    ATCSearchLivingCircleCellContentView *_internalContentView;
}

@property(retain, nonatomic) ATCSearchLivingCircleCellContentView *internalContentView; // @synthesize internalContentView=_internalContentView;
@property(retain, nonatomic) MtopArcticCircleGetCircleListResponseDataCircleList *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setUserSelection:(BOOL)arg1;
- (void)handleDeselection;
- (void)handleRelocation;
- (void)handleSelection;
- (void)setSelected:(BOOL)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end
