//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class UIButton, UIImageView, UILabel, UITableView, UIView;

__attribute__((visibility("hidden")))
@interface YeiPodMovieMusicController : UIViewController
{
    UITableView *settingsTableView;
    UIButton *playingButton;
    UIImageView *imageTopView;
    UIView *topView;
    UIImageView *backImageView;
    UIImageView *backImageViewShadow;
    UILabel *titleLabel;
    BOOL isMusicType;
}

@property BOOL isMusicType; // @synthesize isMusicType;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel;
@property(retain, nonatomic) UIImageView *backImageViewShadow; // @synthesize backImageViewShadow;
@property(retain, nonatomic) UIImageView *backImageView; // @synthesize backImageView;
@property(retain, nonatomic) UIView *topView; // @synthesize topView;
@property(retain, nonatomic) UIImageView *imageTopView; // @synthesize imageTopView;
@property(retain, nonatomic) UIButton *playingButton; // @synthesize playingButton;
@property(retain, nonatomic) UITableView *settingsTableView; // @synthesize settingsTableView;
- (void)currentPlaying:(id)arg1;
- (void)showPlayingOrEdit;
- (void)showEditButton;
- (void)showPlayingButton;
- (void)playViewControllerCloseNotify;
- (void)playInBackgroundNotify;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)setCellImage:(id)arg1 AtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)goToFullVersion;
- (void)customBack:(id)arg1;
- (void)cancelView:(id)arg1;
- (void)textFieldDone:(id)arg1;
- (void)dealloc;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)relocateSubViews:(int)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)settingsFilePath;

@end

