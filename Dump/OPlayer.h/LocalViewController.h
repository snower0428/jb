//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "MFMailComposeViewControllerDelegate.h"
#import "SKPaymentTransactionObserver.h"
#import "SKProductsRequestDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSString, SKProduct, UIAlertView, UIButton, UIImage, UIImageView, UILabel, UISearchBar, UISegmentedControl, UITableView, UIView;

__attribute__((visibility("hidden")))
@interface LocalViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, SKPaymentTransactionObserver, SKProductsRequestDelegate, UIAlertViewDelegate, MFMailComposeViewControllerDelegate>
{
    UITableView *fileListTableView;
    UISearchBar *mySearchBar;
    UIView *headerView;
    UISegmentedControl *segControl;
    UIButton *seg0;
    UIButton *seg1;
    UIButton *seg2;
    UIButton *seg3;
    UIView *fileOperateToolbar;
    BOOL inPseudoEditMode;
    NSString *currentDir;
    NSMutableArray *fileArray;
    NSMutableArray *selectedArray;
    UIImage *selectedImage;
    UIImage *unselectedImage;
    NSMutableDictionary *dictForFileSettings;
    BOOL selectedAll;
    UIButton *CustomBackButton;
    UIButton *CustomEditButton;
    UIButton *playingButton;
    UIButton *toPlaylistButton;
    UIButton *newFolderButton;
    UIButton *renameButton;
    UIButton *cutFilesButton;
    UIButton *pasteFilesButton;
    UIButton *deleteFilesButton;
    UIButton *selectedAllButton;
    UILabel *titleLabel;
    UIImageView *backImageView;
    int currentRowIndex;
    int refresh_index;
    int refresh_played_time;
    int refresh_end_time;
    int currentAction;
    int currentActionRowIndex;
    BOOL viewFirstLoad;
    int asc[4];
    int lastSegIdx;
    UIImageView *imageTopView;
    UIView *topView;
    UIImageView *backImageViewShadow;
    int convertRow;
    UILabel *convertProgressView;
    UIAlertView *convertAlertView;
    BOOL usePreviewFile;
    UIAlertView *progressAlert;
    SKProduct *validProduct;
}

@property(retain, nonatomic) SKProduct *validProduct; // @synthesize validProduct;
@property(retain, nonatomic) UIAlertView *progressAlert; // @synthesize progressAlert;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel;
@property(retain, nonatomic) UIImageView *backImageViewShadow; // @synthesize backImageViewShadow;
@property(retain, nonatomic) UIImageView *backImageView; // @synthesize backImageView;
@property(retain, nonatomic) UIView *topView; // @synthesize topView;
@property(retain, nonatomic) UIImageView *imageTopView; // @synthesize imageTopView;
@property(retain, nonatomic) UIAlertView *convertAlertView; // @synthesize convertAlertView;
@property(retain, nonatomic) UILabel *convertProgressView; // @synthesize convertProgressView;
@property(retain, nonatomic) UIButton *selectedAllButton; // @synthesize selectedAllButton;
@property(retain, nonatomic) UIButton *deleteFilesButton; // @synthesize deleteFilesButton;
@property(retain, nonatomic) UIButton *pasteFilesButton; // @synthesize pasteFilesButton;
@property(retain, nonatomic) UIButton *cutFilesButton; // @synthesize cutFilesButton;
@property(retain, nonatomic) UIButton *renameButton; // @synthesize renameButton;
@property(retain, nonatomic) UIButton *newFolderButton; // @synthesize newFolderButton;
@property(retain, nonatomic) UIButton *toPlaylistButton; // @synthesize toPlaylistButton;
@property(retain, nonatomic) UIButton *playingButton; // @synthesize playingButton;
@property(retain, nonatomic) UIButton *CustomEditButton; // @synthesize CustomEditButton;
@property(retain, nonatomic) UIButton *CustomBackButton; // @synthesize CustomBackButton;
@property(retain, nonatomic) UIImage *unselectedImage; // @synthesize unselectedImage;
@property(retain, nonatomic) UIImage *selectedImage; // @synthesize selectedImage;
@property(retain, nonatomic) NSString *currentDir; // @synthesize currentDir;
@property(retain, nonatomic) NSMutableArray *fileArray; // @synthesize fileArray;
@property(retain, nonatomic) NSMutableArray *selectedArray; // @synthesize selectedArray;
@property BOOL inPseudoEditMode; // @synthesize inPseudoEditMode;
@property(retain, nonatomic) UIView *fileOperateToolbar; // @synthesize fileOperateToolbar;
@property(retain, nonatomic) UIButton *seg3; // @synthesize seg3;
@property(retain, nonatomic) UIButton *seg2; // @synthesize seg2;
@property(retain, nonatomic) UIButton *seg1; // @synthesize seg1;
@property(retain, nonatomic) UIButton *seg0; // @synthesize seg0;
@property(retain, nonatomic) UISegmentedControl *segControl; // @synthesize segControl;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView;
@property(retain, nonatomic) UISearchBar *mySearchBar; // @synthesize mySearchBar;
@property(retain, nonatomic) UITableView *fileListTableView; // @synthesize fileListTableView;
- (void)unArchive:(id)arg1 destinationPath:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)unArchive:(id)arg1 destinationPath:(id)arg2;
- (void)currentPlaying:(id)arg1;
- (void)showPlayingOrEdit;
- (void)showEditButton;
- (void)showPlayingButton;
- (void)playViewControllerCloseNotify;
- (void)playInBackgroundNotify;
- (void)playingTimeUpdateNotify:(id)arg1;
- (void)refreshTime;
- (void)customPlayMovie:(id)arg1;
- (void)ShowConverProgressAlert;
- (void)showConverProgressAlert;
- (void)setConvertPercentage;
- (void)showConvertErrorMsg;
- (void)RetryMov;
- (void)ConvertError;
- (void)hideSHKSpiner;
- (void)playAfertConvert;
- (void)convertFinish;
- (void)PlayAfterConvert;
- (void)UpdateConvertPercentage;
- (long long)getFreeSpace;
- (void)doConvert:(BOOL)arg1;
- (BOOL)checkConvertFileExist:(id)arg1;
- (void)doConvertProgress:(BOOL)arg1;
- (void)show_alert_convert;
- (BOOL)needPwd:(id)arg1 withSubFolder:(BOOL)arg2;
- (void)showBuyPhotoViewerAlertView;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)toBuyPhotoView;
- (void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)paymentQueue:(id)arg1 updatedTransactions:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (BOOL)isAudioOrSubtile:(id)arg1;
- (void)storePlayedTime:(int)arg1 withDuraion:(int)arg2;
- (int)playedTime;
- (void)myMovieFinishedCallback:(id)arg1;
- (void)playMovieAtURL:(id)arg1;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarBookmarkButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)changeSortWay:(int)arg1 AcsFlag:(int)arg2;
- (void)downloadIt:(id)arg1;
- (void)fileInfo:(id)arg1 withEvent:(id)arg2;
- (void)convert_hardware:(id)arg1 withEvent:(id)arg2;
- (void)fileNameChanged:(id)arg1;
- (void)dealloc;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)relocateSubViews:(int)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)playlistChangedNotify:(id)arg1;
- (void)passwordEnterNotify:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)clickSegControl:(id)arg1;
- (id)searchFilesWithMatchString:(id)arg1;
- (BOOL)needPwdForSearch:(id)arg1 theFullPath:(id)arg2;
- (void)Edit:(id)arg1;
- (void)customBack:(id)arg1;
- (void)moveOutComplete;
- (int)getAscFlag;
- (void)saveAscFlag:(int)arg1;
- (int)getSortWay;
- (void)saveSortWay:(int)arg1;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (void)sendEmail:(id)arg1 withEvent:(id)arg2;
- (void)launchMailAppOnDevice;
- (void)pasteFile:(id)arg1;
- (void)selectAllFile:(id)arg1;
- (void)cutFile:(id)arg1;
- (void)renameFile:(id)arg1;
- (void)AddToPlaylist:(id)arg1;
- (void)Delete:(id)arg1;
- (void)DeleteConfirm;
- (void)removeDirectory:(id)arg1;
- (id)_stringForFileSize:(unsigned long long)arg1;
- (id)_stringForNumber:(double)arg1 asUnits:(id)arg2;
- (void)readDir;
- (void)newFolder:(id)arg1;
- (void)populateSelectedArray:(BOOL)arg1;
- (id)fileSettingsFilePath;
- (id)getFileFullPath:(id)arg1;
- (id)playListFilePath;
- (id)getRootPath;
- (id)clipboardFilePath;
- (id)subDelayFilePath;
- (id)playingFilePath;
- (id)settingsFilePath;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
