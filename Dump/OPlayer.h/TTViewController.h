//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTNavigatorViewController.h"

@class TTSearchDisplayController, TTTableViewController;

@interface TTViewController : TTNavigatorViewController
{
    TTSearchDisplayController *_searchController;
}

+ (void)doGarbageCollection;
@property(retain, nonatomic) TTTableViewController *searchViewController;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)loadView;
- (void)dealloc;
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

