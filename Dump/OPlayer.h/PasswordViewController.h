//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSMutableDictionary, NSString, UIButton, UIImageView, UILabel, UITextField, UIView;

__attribute__((visibility("hidden")))
@interface PasswordViewController : UIViewController
{
    NSMutableDictionary *settings;
    NSMutableDictionary *tempValues;
    UITextField *passwordText;
    UITextField *passwordTextAgain;
    NSString *oldFileName;
    NSString *parentFolderPath;
    BOOL isGlobalFolderPwd;
    BOOL isFromFolderPwd;
    BOOL needConfirmPwd;
    BOOL fromFolderPwdNeedPassword;
    NSMutableDictionary *settingsOfFolderPwd;
    UIButton *CustomCloseButton;
    UIButton *CustomSaveButton;
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
@property(retain, nonatomic) UIButton *CustomSaveButton; // @synthesize CustomSaveButton;
@property(retain, nonatomic) UIButton *CustomCloseButton; // @synthesize CustomCloseButton;
@property BOOL fromFolderPwdNeedPassword; // @synthesize fromFolderPwdNeedPassword;
@property(retain, nonatomic) NSMutableDictionary *settingsOfFolderPwd; // @synthesize settingsOfFolderPwd;
@property(retain, nonatomic) NSMutableDictionary *tempValues; // @synthesize tempValues;
@property(retain, nonatomic) NSMutableDictionary *settings; // @synthesize settings;
@property(retain, nonatomic) UITextField *passwordTextAgain; // @synthesize passwordTextAgain;
@property(retain, nonatomic) UITextField *passwordText; // @synthesize passwordText;
@property BOOL needConfirmPwd; // @synthesize needConfirmPwd;
@property BOOL isFromFolderPwd; // @synthesize isFromFolderPwd;
@property BOOL isGlobalFolderPwd; // @synthesize isGlobalFolderPwd;
@property(retain, nonatomic) NSString *parentFolderPath; // @synthesize parentFolderPath;
@property(retain, nonatomic) NSString *oldFileName; // @synthesize oldFileName;
- (void)textFieldDone:(id)arg1;
- (void)textFieldEditing:(id)arg1;
- (void)savePassword:(id)arg1;
- (id)settingsFilePath;
- (void)customBack:(id)arg1;
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
- (void)readSettings;

@end

