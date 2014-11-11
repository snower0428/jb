//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MTOPRequest, NSMutableArray, NSTimer, UITableView;

__attribute__((visibility("hidden")))
@interface TBGoldCoinReceiveViewController : TBViewController <UITableViewDataSource, UITableViewDelegate>
{
    NSMutableArray *_goldCoinList;
    UITableView *_tableview;
    MTOPRequest *_listRequest;
    MTOPRequest *_actionRequest;
    MTOPRequest *_extRequest;
    NSTimer *_timmer;
}

@property(retain, nonatomic) NSTimer *timmer; // @synthesize timmer=_timmer;
@property(retain, nonatomic) MTOPRequest *extRequest; // @synthesize extRequest=_extRequest;
@property(retain, nonatomic) MTOPRequest *actionRequest; // @synthesize actionRequest=_actionRequest;
@property(retain, nonatomic) MTOPRequest *listRequest; // @synthesize listRequest=_listRequest;
@property(retain, nonatomic) UITableView *tableview; // @synthesize tableview=_tableview;
@property(retain, nonatomic) NSMutableArray *goldCoinList; // @synthesize goldCoinList=_goldCoinList;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)clear;
- (void)dealloc;
- (void)tbRequestSuccess:(id)arg1;
- (void)tbRequestFailed:(id)arg1;
- (void)startExtReceive:(CDUnknownBlockType)arg1;
- (void)startReceive:(id)arg1 onSuccess:(CDUnknownBlockType)arg2;
- (void)getList;
- (void)listClick:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)updateTime;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

