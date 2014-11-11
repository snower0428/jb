//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "ELCImagePickerControllerDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MBProgressHUD, NSLock, NSMutableArray, NSString, UIBarButtonItem, UITableView, WQAlbumObject, WQToolBarView;

@interface WQAlbumViewController : UIViewController <ELCImagePickerControllerDelegate, UINavigationControllerDelegate, UIScrollViewDelegate, UITableViewDataSource, UITableViewDelegate, UIAlertViewDelegate>
{
    unsigned int photoCount;
    NSMutableArray *photos;
    NSMutableArray *photoFullPath;
    UITableView *tv;
    NSString *currentDir;
    WQAlbumObject *albumObj;
    BOOL isNeedReload;
    UIBarButtonItem *doneBarBtn;
    UIBarButtonItem *cancelBarBtn;
    UIBarButtonItem *setCoverBtn;
    UIBarButtonItem *_backButtonItem;
    unsigned int multiSelectState;
    BOOL multiSelect;
    BOOL setCover;
    MBProgressHUD *sendToSysHUD;
    WQToolBarView *toolBar;
    NSLock *lock;
}

@property(nonatomic) BOOL setCover; // @synthesize setCover;
@property(nonatomic) BOOL multiSelect; // @synthesize multiSelect;
@property(copy, nonatomic) NSString *currentDir; // @synthesize currentDir;
- (void).cxx_destruct;
- (void)changeWindowToPhotoViewController:(id)arg1;
- (void)alertView:(id)arg1 willDismissWithButtonIndex:(int)arg2;
- (void)moveSelectedPhotosToNewAlbum;
- (void)moveSelectedPhotosToExistedAlbum;
- (void)saveImgsToSystemAlbum;
- (void)deleteSelectedPhotos;
- (void)doneforSelectManyPhotosAndGoBack:(int)arg1;
- (BOOL)checkSeclectOrNot;
- (void)doneforSetCover;
- (void)saveImgToSystemAlbumCallInWithImage:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)didSelectManyPhotos;
- (void)cancelCoverForAllCells;
- (void)cancelAction;
- (void)doneAction;
- (void)trashAction;
- (void)exportAction;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)photoForIndexPath:(id)arg1;
- (void)elcImagePickerControllerDidCancel:(id)arg1;
- (void)elcImagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)setPhotoCount:(int)arg1;
- (void)startAlbumPicker;
- (void)myHUDTask;
- (void)setCoverAction;
- (void)unloadToolBar;
- (void)loadToolBar;
- (void)setButtonsOnToolBar;
- (id)createTableView;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)prefersStatusBarHidden;
- (BOOL)shouldAutorotate;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;

@end
