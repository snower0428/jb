//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIAlertViewDelegate.h"
#import "UITextFieldDelegate.h"

@class NSMutableDictionary, NSString, UIButton, UIImageView, UILabel, UITableView, UIView;

__attribute__((visibility("hidden")))
@interface FolderSettingsViewController : UIViewController <UITextFieldDelegate, UIAlertViewDelegate>
{
    NSMutableDictionary *tempValues;
    UITableView *settingsTableView;
    NSMutableDictionary *settings;
    NSString *foldName;
    NSString *parentFolderPath;
    unsigned long long fileSizeExact;
    UIButton *CustomCloseButton;
    UIImageView *imageTopView;
    UIView *topView;
    UIImageView *backImageView;
    UIImageView *backImageViewShadow;
    UILabel *titleLabel;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel;
@property(retain, nonatomic) UIImageView *backImageViewShadow; // @synthesize backImageViewShadow;
@property(retain, nonatomic) UIImageView *backImageView; // @synthesize backImageView;
@property(retain, nonatomic) UIView *topView; // @synthesize topView;
@property(retain, nonatomic) UIImageView *imageTopView; // @synthesize imageTopView;
@property(retain, nonatomic) UIButton *CustomCloseButton; // @synthesize CustomCloseButton;
@property unsigned long long fileSizeExact; // @synthesize fileSizeExact;
@property(retain, nonatomic) NSString *parentFolderPath; // @synthesize parentFolderPath;
@property(retain, nonatomic) NSString *foldName; // @synthesize foldName;
@property(retain, nonatomic) NSMutableDictionary *tempValues; // @synthesize tempValues;
@property(retain, nonatomic) NSMutableDictionary *settings; // @synthesize settings;
@property(retain, nonatomic) UITableView *settingsTableView; // @synthesize settingsTableView;
- (void)cancelView:(id)arg1;
- (void)switchValueChange:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)setCellImage:(id)arg1 AtIndexPath:(id)arg2;
- (void)customBack:(id)arg1;
- (void)readSettings;
- (void)textFieldDone:(id)arg1;
- (void)renameSucceed:(id)arg1;
- (void)dealloc;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)relocateSubViews:(int)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)settingsFilePath;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
