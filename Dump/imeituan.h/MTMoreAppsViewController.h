//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTTableViewController.h"

@class MTMoreAppsModel;

@interface MTMoreAppsViewController : MTTableViewController
{
    MTMoreAppsModel *_moreAppsModel;
}

@property(retain, nonatomic) MTMoreAppsModel *moreAppsModel; // @synthesize moreAppsModel=_moreAppsModel;
- (void).cxx_destruct;
- (void)didSelectAppItem:(id)arg1;
- (void)updateTableWithResults:(id)arg1;
- (void)viewDidLoad;
- (void)fetchAppInfos;
- (void)setupUI;

@end
