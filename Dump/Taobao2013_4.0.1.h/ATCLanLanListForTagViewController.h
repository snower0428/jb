//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ATCLanLanHomeViewController.h"

#import "ATCLanLanAlbumProductCellDelegate.h"

@class NSString, UIImageView;

@interface ATCLanLanListForTagViewController : ATCLanLanHomeViewController <ATCLanLanAlbumProductCellDelegate>
{
    NSString *_tagName;
    BOOL _isNeedShowBanner;
    UIImageView *_bannerImageView;
}

- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)configCellForAlbumProduct:(id)arg1 indexPath:(id)arg2 item:(id)arg3;
- (id)configCellForSingleProduct:(id)arg1 indexPath:(id)arg2 item:(id)arg3;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)itemAtIndexPath:(id)arg1;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)ATCLanLanAlbumProductCell:(id)arg1 didClickAtTag:(id)arg2;
- (void)showUpdateCountBarWithNumber:(int)arg1;
- (void)onLoadMoreFresh;
- (void)onTopFreshForToday:(BOOL)arg1 loadByUser:(BOOL)arg2;
- (void)viewDidLoad;
- (void)loadInterstList;
- (void)viewWillAppear:(BOOL)arg1;
- (id)userTrackPageName;
- (BOOL)isTitleBarCanClick;
- (id)titleBarTitle;
- (id)initWithTagName:(id)arg1 needShowBanner:(BOOL)arg2;
- (id)initWithTagName:(id)arg1;
- (BOOL)addBannerViewByUrl:(id)arg1;
- (void)addBannerViewByUrl:(id)arg1 jumpUrl:(id)arg2;
- (void)onCloseBannerButtonCallBack:(id)arg1;
- (void)dealloc;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;

@end
