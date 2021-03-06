//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OSViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, UITableView;

__attribute__((visibility("hidden")))
@interface OSTableViewController : OSViewController <UITableViewDelegate, UITableViewDataSource>
{
    int _tableViewStyle;
    UITableView *tableView;
}

@property(readonly, nonatomic) int tableViewStyle; // @synthesize tableViewStyle=_tableViewStyle;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView;
- (void)removeFromParentViewController;
- (void)didMoveToParentViewController:(id)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)dealloc;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (id)initWithTitle:(id)arg1 withStyle:(int)arg2 isBackButtonEnable:(BOOL)arg3 isPlayingButtonEnable:(BOOL)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

