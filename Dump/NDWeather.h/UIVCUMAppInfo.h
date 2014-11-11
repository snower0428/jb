//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UMTableViewCellDelegate.h"
#import "UMUFPTableViewDataLoadDelegate.h"

@class MBProgressHUD, NSMutableArray, UMUFPTableView;

__attribute__((visibility("hidden")))
@interface UIVCUMAppInfo : BaseViewController <UITableViewDelegate, UITableViewDataSource, UMUFPTableViewDataLoadDelegate, UMTableViewCellDelegate>
{
    NSMutableArray *_mPromoterDatas;
    UMUFPTableView *_mTableView;
    MBProgressHUD *HUD;
    BOOL isWaitting;
}

- (void)dealloc;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)updateTheme;
- (void)setupContentView;
- (void)setupNavigationBar;
- (void)setupBackground;
- (void)scrollViewDidScroll:(id)arg1;
- (id)TitleName;
- (id)ImageOverName;
- (id)ImageSelectName;
- (id)ImageName;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)UMTableViewCellDownButtonClick:(id)arg1;
- (void)UMUFPTableView:(id)arg1 didLoadDataFailWithError:(id)arg2;
- (void)UMUFPTableViewDidLoadDataFinish:(id)arg1 promoters:(id)arg2;
- (void)loadDataFailed;
- (void)removeLoadingumMaskView;
- (id)setAppInfoContent:(id)arg1;

@end
