//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseViewController.h"

@class MBProgressHUD, NSArray, UILabel, UITableView, UIVCSettingBlogBind;

__attribute__((visibility("hidden")))
@interface UIVCSettingBlogSet : BaseViewController
{
    UIVCSettingBlogBind *vcBind;
    NSArray *dbData;
    BOOL unbind_state;
    MBProgressHUD *hudWait;
    int blogState;
    UITableView *tableViewBind;
    UILabel *label1;
    UILabel *label2;
    BOOL isQuering;
    BOOL isQQAuthValid;
}

@property(retain, nonatomic) UILabel *label2; // @synthesize label2;
@property(retain, nonatomic) UILabel *label1; // @synthesize label1;
@property(retain, nonatomic) UITableView *tableViewBind; // @synthesize tableViewBind;
@property(nonatomic) int blogState; // @synthesize blogState;
@property(retain, nonatomic) NSArray *dbData; // @synthesize dbData;
- (void)blogDidLogOut:(id)arg1;
- (void)blogDidLogIn:(id)arg1;
- (void)updateTheme;
- (void)showWaitView:(id)arg1;
- (void)closeWaitView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)rightButton:(id)arg1;
- (void)returnButton:(id)arg1;
- (void)setupNavigationBar;
- (void)setupBackground;
- (void)dealloc;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)btnUnbindClick:(id)arg1;
- (void)btnQueryBindClick:(id)arg1;
- (void)btnBindClick:(id)arg1;

@end
