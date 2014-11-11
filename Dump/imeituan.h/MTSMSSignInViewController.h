//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTBaseViewController.h"

#import "UITextFieldDelegate.h"

@class MTTextField, NSTimer, SAKSignInService, UIButton;

@interface MTSMSSignInViewController : MTBaseViewController <UITextFieldDelegate>
{
    CDUnknownBlockType _didSignInBlock;
    SAKSignInService *_service;
    MTTextField *_mobileTextField;
    UIButton *_sendButton;
    MTTextField *_verificationTextField;
    UIButton *_signInButton;
    NSTimer *_timer;
    int _timerCountDown;
}

@property(nonatomic) int timerCountDown; // @synthesize timerCountDown=_timerCountDown;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) UIButton *signInButton; // @synthesize signInButton=_signInButton;
@property(retain, nonatomic) MTTextField *verificationTextField; // @synthesize verificationTextField=_verificationTextField;
@property(retain, nonatomic) UIButton *sendButton; // @synthesize sendButton=_sendButton;
@property(retain, nonatomic) MTTextField *mobileTextField; // @synthesize mobileTextField=_mobileTextField;
@property(retain, nonatomic) SAKSignInService *service; // @synthesize service=_service;
@property(copy, nonatomic) CDUnknownBlockType didSignInBlock; // @synthesize didSignInBlock=_didSignInBlock;
- (void).cxx_destruct;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (BOOL)textFieldShouldClear:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)didClickSignInButton;
- (void)didReceiveTimerEvent:(id)arg1;
- (void)sendVeriyCode:(id)arg1;
- (void)didClickSendButton;
- (void)sendVeriyCodeToMobile:(id)arg1;
- (void)signIn;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

