//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

@class ATCLifeState, UIImageView;

@interface ATCLifeSelectTableViewController : UITableViewController
{
    UIImageView *_borderView;
    UIImageView *_arrowView;
    ATCLifeState *_state;
}

@property(retain, nonatomic) ATCLifeState *state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)manageButtonClick:(id)arg1;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)updateTableViewStyle;
- (void)initTableViewStyle;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithStyle:(int)arg1;
- (id)initWithState:(id)arg1 frame:(struct CGRect)arg2;

@end
