//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBTripBaseViewController.h"

#import "TBAirLineSelectDelegate.h"
#import "TBSelectDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSString, TBFlightFilterForm, UITableView;

@interface TBFlightFilterViewController : TBTripBaseViewController <UITableViewDataSource, UITableViewDelegate, TBSelectDelegate, TBAirLineSelectDelegate>
{
    UITableView *filterTableView;
    NSMutableArray *priceArray;
    NSMutableArray *timeArray;
    NSMutableArray *airlineArray;
    TBFlightFilterForm *form;
    NSString *airLineResult;
    id <TBFilterDelegate> delegate;
}

@property(nonatomic) id <TBFilterDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) NSMutableArray *airlineArray; // @synthesize airlineArray;
- (void).cxx_destruct;
- (void)didSelectedAirLine:(id)arg1;
- (void)didSelectedWithIndex:(int)arg1 parentIndex:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)setupInitItems;
- (id)backItem;
- (void)loadView;
- (void)didReceiveMemoryWarning;
- (void)filter:(id)arg1;

@end
