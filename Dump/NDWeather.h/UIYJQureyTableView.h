//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface UIYJQureyTableView : UITableView <UITableViewDataSource, UITableViewDelegate>
{
    NSArray *list;
    id <UIYJQureyTableViewDataSource><UIYJQureyTableViewDelegate> _queryTableDelegate;
}

@property(retain, nonatomic) NSArray *list; // @synthesize list;
@property(nonatomic) id <UIYJQureyTableViewDataSource><UIYJQureyTableViewDelegate> queryTableDelegate; // @synthesize queryTableDelegate=_queryTableDelegate;
- (void)reloadData;
- (void)drawRect:(struct CGRect)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

