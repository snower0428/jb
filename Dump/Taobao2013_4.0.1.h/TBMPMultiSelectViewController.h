//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class ALAssetsGroup, MBProgressHUD, NSMutableArray, TBMPThumbnailBar, UIButton, UITableView;

__attribute__((visibility("hidden")))
@interface TBMPMultiSelectViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    ALAssetsGroup *_assetsGroup;
    NSMutableArray *_assets;
    UITableView *_tableView;
    TBMPThumbnailBar *_thumbnailBar;
    UIButton *_backButton;
    UIButton *_confirmButton;
    UIButton *_buttonToCamera;
    MBProgressHUD *_HUD;
    CDStruct_3d22b96e *_image_rule;
}

- (void).cxx_destruct;
- (id)outputFromImage:(id)arg1 andImageFileSize:(long long)arg2 byRule:(CDStruct_3d22b96e *)arg3;
- (void)loadAssets;
- (id)itemsForRowAtIndexPath:(id)arg1;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tapToCamera:(id)arg1;
- (void)confirmAction:(id)arg1;
- (void)unfreeze;
- (void)freeze;
- (void)clickLeftButton:(id)arg1;
- (void)dealloc;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)handleAssetChangedNotifiation:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithAssetsGroup:(id)arg1;

@end

