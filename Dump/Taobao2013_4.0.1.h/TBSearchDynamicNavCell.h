//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBSearchResultsTableViewCell.h"

@class NSMutableArray, NSMutableDictionary;

@interface TBSearchDynamicNavCell : TBSearchResultsTableViewCell
{
    NSMutableArray *_navButtons;
    NSMutableArray *_tipsButtons;
    NSMutableDictionary *_querys;
    NSMutableDictionary *_tips;
    id <dynamicNavMoreDelegate> _delegate;
}

+ (float)heightForTipsCell:(id)arg1;
+ (float)heightForNavCell:(id)arg1 NavMore:(BOOL)arg2;
@property(nonatomic) id <dynamicNavMoreDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableDictionary *tips; // @synthesize tips=_tips;
@property(retain, nonatomic) NSMutableDictionary *querys; // @synthesize querys=_querys;
@property(retain, nonatomic) NSMutableArray *tipsButtons; // @synthesize tipsButtons=_tipsButtons;
@property(retain, nonatomic) NSMutableArray *navButtons; // @synthesize navButtons=_navButtons;
- (void).cxx_destruct;
- (void)tipsQueryClick:(id)arg1;
- (void)navQueryClick:(id)arg1;
- (void)clickMore:(id)arg1;
- (void)configureTipsButton:(id)arg1;
- (void)configureNavButton:(id)arg1 NavMore:(BOOL)arg2;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

