//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIAlertViewDelegate.h"
#import "UITextFieldDelegate.h"

@class NSMutableDictionary, NSString, UIButton, UIImageView, UILabel, UISwitch, UITableView, UIView;

__attribute__((visibility("hidden")))
@interface FileSettingsVideoViewController : UIViewController <UITextFieldDelegate, UIAlertViewDelegate>
{
    NSMutableDictionary *tempValues;
    UITableView *settingsTableView;
    UISwitch *tmpSwitcher;
    UIButton *CustomBackButton;
    NSString *fileUrl;
    NSString *videoFourcc;
    NSString *audioFourcc;
    NSString *imageWidth;
    NSString *imageHeight;
    NSString *usePlugin;
    NSString *cacheSize;
    NSString *useMultipleThreads;
    NSString *useSkiploopfilter;
    NSString *useSkipframe;
    NSString *versionNum;
    NSString *encodingMethod;
    NSString *maxVolume;
    unsigned long long fileSizeExact;
    NSString *mirrorSet;
    NSString *flipSet;
    NSString *reserved1;
    NSString *reserved2;
    NSString *reserved3;
    NSString *reserved4;
    NSString *reserved5;
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
@property unsigned long long fileSizeExact; // @synthesize fileSizeExact;
@property(retain, nonatomic) NSString *reserved5; // @synthesize reserved5;
@property(retain, nonatomic) NSString *reserved4; // @synthesize reserved4;
@property(retain, nonatomic) NSString *reserved3; // @synthesize reserved3;
@property(retain, nonatomic) NSString *reserved2; // @synthesize reserved2;
@property(retain, nonatomic) NSString *reserved1; // @synthesize reserved1;
@property(retain, nonatomic) NSString *flipSet; // @synthesize flipSet;
@property(retain, nonatomic) NSString *mirrorSet; // @synthesize mirrorSet;
@property(retain, nonatomic) NSString *maxVolume; // @synthesize maxVolume;
@property(retain, nonatomic) NSString *encodingMethod; // @synthesize encodingMethod;
@property(retain, nonatomic) NSString *versionNum; // @synthesize versionNum;
@property(retain, nonatomic) NSString *useSkipframe; // @synthesize useSkipframe;
@property(retain, nonatomic) NSString *useSkiploopfilter; // @synthesize useSkiploopfilter;
@property(retain, nonatomic) NSString *useMultipleThreads; // @synthesize useMultipleThreads;
@property(retain, nonatomic) NSString *cacheSize; // @synthesize cacheSize;
@property(retain, nonatomic) NSString *usePlugin; // @synthesize usePlugin;
@property(retain, nonatomic) NSString *imageHeight; // @synthesize imageHeight;
@property(retain, nonatomic) NSString *imageWidth; // @synthesize imageWidth;
@property(retain, nonatomic) NSString *audioFourcc; // @synthesize audioFourcc;
@property(retain, nonatomic) NSString *videoFourcc; // @synthesize videoFourcc;
@property(retain, nonatomic) NSString *fileUrl; // @synthesize fileUrl;
@property(retain, nonatomic) NSMutableDictionary *tempValues; // @synthesize tempValues;
@property(retain, nonatomic) UIButton *CustomBackButton; // @synthesize CustomBackButton;
@property(retain, nonatomic) UITableView *settingsTableView; // @synthesize settingsTableView;
- (void)saveSettings;
- (id)settingsFilePath;
- (id)getKeyOfFile;
- (void)initMembers;
- (void)cancelView:(id)arg1;
- (void)switchValueChange:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)textFieldDone:(id)arg1;
- (void)dealloc;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)relocateSubViews:(int)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)setCellImage:(id)arg1 AtIndexPath:(id)arg2;
- (void)customBack:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
