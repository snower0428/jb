//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTTableViewDataSource.h"

@class NSMutableArray;

@interface TTSectionedDataSource : TTTableViewDataSource
{
    NSMutableArray *_sections;
    NSMutableArray *_items;
}

+ (id)dataSourceWithItems:(id)arg1 sections:(id)arg2;
+ (id)dataSourceWithArrays:(id)arg1;
+ (id)dataSourceWithObjects:(id)arg1;
@property(retain, nonatomic) NSMutableArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
- (BOOL)removeItemAtIndexPath:(id)arg1 andSectionIfEmpty:(BOOL)arg2;
- (void)removeItemAtIndexPath:(id)arg1;
- (id)indexPathOfItemWithUserInfo:(id)arg1;
- (id)tableView:(id)arg1 indexPathForObject:(id)arg2;
- (id)tableView:(id)arg1 objectForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)dealloc;
- (id)initWithItems:(id)arg1 sections:(id)arg2;

@end

