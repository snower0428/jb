//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMPBaseViewController.h"

#import "MMPMiniPasswordViewDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MMPMiniPasswordView, UIButton, UITableView, UITextField;

@interface MMPPasswordViewController : MMPBaseViewController <MMPMiniPasswordViewDelegate, UITableViewDataSource, UITableViewDelegate, UIAlertViewDelegate, UIGestureRecognizerDelegate>
{
    UIButton *nextButton;
    UITextField *pwdTextField;
    MMPMiniPasswordView *miniPwd;
    UITableView *_passwordTableView;
}

@property(retain, nonatomic) UITableView *passwordTableView; // @synthesize passwordTableView=_passwordTableView;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)changeButtonStates:(BOOL)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)updateButtonStates:(id)arg1;
- (void)clickButton:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)tapHandle:(id)arg1;
- (void)setTableViewFooterView:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

