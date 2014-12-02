//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "NSNetServiceBrowserDelegate.h"
#import "NSNetServiceDelegate.h"

@class NSMutableArray, NSNetService, NSNetServiceBrowser, NSString, UIButton, UIImageView, UILabel, UITableView, UITextField, UIView;

__attribute__((visibility("hidden")))
@interface FileServerViewController : UIViewController <NSNetServiceBrowserDelegate, NSNetServiceDelegate>
{
    UITableView *fileTableView;
    NSMutableArray *serverArray;
    NSMutableArray *autoScanServerArray;
    NSMutableArray *bautoScanServerArray;
    NSMutableArray *nbautoScanServerArray;
    NSMutableArray *autoSaveServerListArray;
    UIButton *CustomEditButton;
    UIButton *customRefreshButton;
    UIButton *playingButton;
    BOOL isEditMode;
    UIImageView *imageTopView;
    UIView *topView;
    UIImageView *backImageView;
    UIImageView *backImageViewShadow;
    UILabel *titleLabel;
    int selectAutoServerIndex;
    UIView *sectionHeaderView;
    id <SourcesViewControllerDelegate> _delegate;
    NSMutableArray *_services;
    NSNetServiceBrowser *_netServiceBrowser;
    NSNetService *_currentResolve;
    BOOL _needsActivityIndicator;
    UITextField *myUserName;
    UITextField *myPassWord;
    NSString *ipAddress;
    UIButton *refreshScanButton;
    UIButton *_refreshScanButton;
}

@property(retain, nonatomic) UIButton *refreshScanButton; // @synthesize refreshScanButton=_refreshScanButton;
@property(retain, nonatomic) NSString *ipAddress; // @synthesize ipAddress;
@property(retain, nonatomic) UITextField *myPassWord; // @synthesize myPassWord;
@property(retain, nonatomic) UITextField *myUserName; // @synthesize myUserName;
@property(nonatomic) BOOL needsActivityIndicator; // @synthesize needsActivityIndicator=_needsActivityIndicator;
@property(retain, nonatomic) NSMutableArray *services; // @synthesize services=_services;
@property(retain, nonatomic) NSNetServiceBrowser *netServiceBrowser; // @synthesize netServiceBrowser=_netServiceBrowser;
@property(retain, nonatomic) NSNetService *currentResolve; // @synthesize currentResolve=_currentResolve;
@property(nonatomic) id <SourcesViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *autoSaveServerListArray; // @synthesize autoSaveServerListArray;
@property(retain, nonatomic) NSMutableArray *nbautoScanServerArray; // @synthesize nbautoScanServerArray;
@property(retain, nonatomic) NSMutableArray *bautoScanServerArray; // @synthesize bautoScanServerArray;
@property(retain, nonatomic) NSMutableArray *autoScanServerArray; // @synthesize autoScanServerArray;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel;
@property(retain, nonatomic) UIImageView *backImageViewShadow; // @synthesize backImageViewShadow;
@property(retain, nonatomic) UIImageView *backImageView; // @synthesize backImageView;
@property(retain, nonatomic) UIView *sectionHeaderView; // @synthesize sectionHeaderView;
@property(retain, nonatomic) UIView *topView; // @synthesize topView;
@property(retain, nonatomic) UIImageView *imageTopView; // @synthesize imageTopView;
@property(retain, nonatomic) UIButton *playingButton; // @synthesize playingButton;
@property(retain, nonatomic) UIButton *customRefreshButton; // @synthesize customRefreshButton;
@property(retain, nonatomic) UIButton *CustomEditButton; // @synthesize CustomEditButton;
@property(retain, nonatomic) NSMutableArray *serverArray; // @synthesize serverArray;
@property(retain, nonatomic) UITableView *fileTableView; // @synthesize fileTableView;
- (void)netServiceDidResolveAddress:(id)arg1;
- (void)netService:(id)arg1 didNotResolve:(id)arg2;
- (void)sortAndUpdateUI;
- (void)mergeArray;
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3;
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(BOOL)arg3;
- (void)stopCurrentResolve;
- (BOOL)searchForServicesOfType:(id)arg1 inDomain:(id)arg2;
- (void)convertFullMovieComplete;
- (void)convertFullMovie;
- (void)convertNextMovie;
- (void)removeConvertProgress;
- (void)addConvertProgress;
- (void)convertInfo:(id)arg1;
- (void)deleteConvertFolder;
- (void)currentPlaying:(id)arg1;
- (void)showPlayingOrEdit;
- (void)showEditButton;
- (void)showPlayingButton;
- (void)playViewControllerCloseNotify;
- (void)playInBackgroundNotify;
- (void)modify:(id)arg1 withEvent:(id)arg2;
- (void)CustomEdit:(id)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)connectSAMBA:(int)arg1;
- (void)connectDropbox:(int)arg1;
- (void)connectFTP:(int)arg1;
- (void)connectSAMBA2:(id)arg1 userName:(id)arg2 passWord:(id)arg3;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (void)customizedAlertAction:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)showAlertAction:(id)arg1;
- (void)dealloc;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)relocateSubViews:(int)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)bonjourFind;
- (void)reloadContent:(id)arg1;
- (void)setCellImage:(id)arg1 AtIndexPath:(id)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)tabTitle;
- (id)activeTabImageName;
- (id)tabImageName;
- (void)handleURL:(id)arg1;
- (void)simpleRefreshTable;
- (void)refreshTable;
- (void)startAnimate;
- (void)initSambaTree;
- (void)AddServer:(id)arg1;
- (void)accessSambaSuccessNotify:(id)arg1;
- (void)accessSambaErrorNotify:(id)arg1;
- (id)settingsFilePath;
- (id)downloadingFilePath;
- (id)serverListFilePath;
- (id)scanServerListFilePath;
- (id)autoServerListFilePath;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

