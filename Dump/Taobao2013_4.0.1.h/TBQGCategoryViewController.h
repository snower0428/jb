//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSInvocation, NSMethodSignature, NSMutableArray, NSMutableDictionary, TBQGCategroyService, UITableView;

__attribute__((visibility("hidden")))
@interface TBQGCategoryViewController : TBViewController <UITableViewDataSource, UITableViewDelegate>
{
    BOOL isLoadTimeBatch;
    NSInvocation *vocation;
    NSMethodSignature *sig;
    UITableView *tableview;
    BOOL _needUpdateView;
    NSMutableDictionary *obserCategoryDict;
    NSMutableArray *categoryArry;
    TBQGCategroyService *_categroyService;
}

@property(nonatomic, getter=isNeedUpdateView) BOOL needUpdateView; // @synthesize needUpdateView=_needUpdateView;
@property(retain, nonatomic) TBQGCategroyService *categroyService; // @synthesize categroyService=_categroyService;
@property(retain, nonatomic) NSMutableArray *categoryArry; // @synthesize categoryArry;
@property(retain, nonatomic) NSMutableDictionary *obserCategoryDict; // @synthesize obserCategoryDict;
- (void).cxx_destruct;
- (void)clearSelectedCategory;
- (void)loadCategoryInfo;
- (void)loadCategoryInfoAgain;
- (void)reloadData;
- (void)dealloc;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppearAtFirstTime;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)initData;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;
- (id)init;

@end
