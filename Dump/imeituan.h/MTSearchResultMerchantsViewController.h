//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTDragRefreshTableViewController.h"

#import "UITableViewDelegate.h"

@class MTImageAnimationLoadingView, MTSearchService, NSArray;

@interface MTSearchResultMerchantsViewController : MTDragRefreshTableViewController <UITableViewDelegate>
{
    MTImageAnimationLoadingView *_activityIndicatorView;
    MTSearchService *_service;
    CDUnknownBlockType _merchantsChanged;
    NSArray *_merchants;
}

@property(retain, nonatomic) NSArray *merchants; // @synthesize merchants=_merchants;
@property(copy, nonatomic) CDUnknownBlockType merchantsChanged; // @synthesize merchantsChanged=_merchantsChanged;
@property(retain, nonatomic) MTSearchService *service; // @synthesize service=_service;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)updateDataSource;
- (void)loadMore;
- (void)viewDidLoad;

@end

