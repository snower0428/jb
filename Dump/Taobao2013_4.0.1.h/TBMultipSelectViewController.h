//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBTripBaseViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSString, UITableView;

@interface TBMultipSelectViewController : TBTripBaseViewController <UITableViewDataSource, UITableViewDelegate>
{
    NSMutableArray *airLineNameArray;
    NSString *title;
    UITableView *selectTableView;
    NSMutableArray *selectedArray;
    id <TBAirLineSelectDelegate> delegate;
}

@property(retain, nonatomic) NSMutableArray *selectedArray; // @synthesize selectedArray;
@property(nonatomic) id <TBAirLineSelectDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) NSString *title; // @synthesize title;
@property(retain, nonatomic) NSMutableArray *airLineNameArray; // @synthesize airLineNameArray;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)setupInitItems;
- (id)backItem;
- (id)okItem;
- (void)filter:(id)arg1;

@end
