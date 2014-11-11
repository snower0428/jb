//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBTableViewDataSource.h"

@interface TBTableViewDataSource : NSObject <TBTableViewDataSource>
{
    id <TBRequestModel> _model;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <TBService> service;
@property(retain, nonatomic) id <TBRequestModel> model;
- (void)loadWithContext:(id)arg1 more:(BOOL)arg2;
- (void)resetForLoadType:(int)arg1;
- (void)reset;
- (void)cancel;
- (BOOL)hasMore;
- (BOOL)isOutdated;
- (BOOL)isLoading;
- (BOOL)isLoaded;
- (id)retainedDelegates;
- (id)delegates;
- (void)tableView:(id)arg1 cell:(id)arg2 willAppearAtIndexPath:(id)arg3;
- (Class)tableView:(id)arg1 cellClassForObject:(id)arg2;
- (void)tableViewDidLoadModel:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;

@end
