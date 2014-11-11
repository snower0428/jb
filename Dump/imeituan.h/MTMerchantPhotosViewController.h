//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTTableViewController.h"

#import "UITableViewDelegate.h"

@class MTImageAnimationLoadingView, MTMerchantService, NSMutableArray;

@interface MTMerchantPhotosViewController : MTTableViewController <UITableViewDelegate>
{
    MTMerchantService *_merchantService;
    NSMutableArray *_photoURLStrArray;
    int _totalCount;
    MTImageAnimationLoadingView *_activityIndicatorView;
    int _poiID;
}

@property(nonatomic) int poiID; // @synthesize poiID=_poiID;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)loadPhotosWithItem:(id)arg1 andColumnIndexNumber:(id)arg2;
- (void)reloadData;
- (void)fetchPhotosWithOffset:(int)arg1;
- (void)viewDidLoad;

@end
