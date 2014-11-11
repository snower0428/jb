//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSString, UILabel, UITableView;

@interface TBRechargeHistoryView : UIView <UITableViewDataSource, UITableViewDelegate>
{
    id _delegate;
    SEL _onSelectItem;
    UITableView *_tableView;
    UILabel *_noHistoryHits;
    NSMutableArray *_historyItems;
    NSString *_type;
}

@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSMutableArray *historyItems; // @synthesize historyItems=_historyItems;
@property(retain, nonatomic) UILabel *noHistoryHits; // @synthesize noHistoryHits=_noHistoryHits;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) SEL onSelectItem; // @synthesize onSelectItem=_onSelectItem;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setHidden:(BOOL)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)didMoveToSuperview;
- (void)loadData;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (void)onSelect:(id)arg1;
- (id)tableViewCellWithReuseIdentifier:(id)arg1;
- (void)loadHistoryData;
- (id)initWithFrame:(struct CGRect)arg1 forType:(id)arg2;

@end
