//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ATCLanLanAlbumDetailViewController.h"

#import "UIScrollViewDelegate.h"

@class ATCLanLanAlbumProductItem, UIButton, UIPageControl;

@interface ATCLanLanSingleProductDetailViewController : ATCLanLanAlbumDetailViewController <UIScrollViewDelegate>
{
    UIPageControl *_pageControl;
    ATCLanLanAlbumProductItem *_singleProduceItem;
    UIButton *_collectButton;
}

+ (BOOL)tbNeedToolbar;
- (void).cxx_destruct;
- (void)onCollectButtonCallBack:(id)arg1;
- (void)setCollectButtonToCollectState:(BOOL)arg1 animate:(BOOL)arg2;
- (void)configTitleView:(id)arg1 titleLabel:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)createaUIByItem:(id)arg1;
- (struct CGRect)tableViewRect;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)onDetailCallBack:(id)arg1;
- (id)itemId;
- (id)productItem;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

