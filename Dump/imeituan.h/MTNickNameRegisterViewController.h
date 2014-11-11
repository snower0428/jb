//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTBaseViewController.h"

#import "UITextFieldDelegate.h"

@class MTAutoLinearLayoutView, MTCaptchaView, MTRegisterAgreementView, MTRegisterTipsView, MTTextField, NSString, SAKSignUpService, UIButton, UIImageView;

@interface MTNickNameRegisterViewController : MTBaseViewController <UITextFieldDelegate>
{
    SAKSignUpService *_signUpService;
    BOOL _isAgree;
    CDUnknownBlockType _didSignInBlock;
    NSString *_stid;
    MTTextField *_nickNameTextField;
    MTTextField *_targetPasswordTextField;
    MTTextField *_repeatTargetPasswordTextField;
    UIButton *_submitButton;
    MTCaptchaView *_captchaView;
    MTRegisterTipsView *_tipsView;
    MTAutoLinearLayoutView *_contentView;
    UIImageView *_backgroundInputView;
    MTRegisterAgreementView *_agreementView;
    CDUnknownBlockType _setTipsViewHiddenBlock;
}

@property(copy, nonatomic) CDUnknownBlockType setTipsViewHiddenBlock; // @synthesize setTipsViewHiddenBlock=_setTipsViewHiddenBlock;
@property(retain, nonatomic) MTRegisterAgreementView *agreementView; // @synthesize agreementView=_agreementView;
@property(retain, nonatomic) UIImageView *backgroundInputView; // @synthesize backgroundInputView=_backgroundInputView;
@property(retain, nonatomic) MTAutoLinearLayoutView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) MTRegisterTipsView *tipsView; // @synthesize tipsView=_tipsView;
@property(retain, nonatomic) MTCaptchaView *captchaView; // @synthesize captchaView=_captchaView;
@property(retain, nonatomic) UIButton *submitButton; // @synthesize submitButton=_submitButton;
@property(retain, nonatomic) MTTextField *repeatTargetPasswordTextField; // @synthesize repeatTargetPasswordTextField=_repeatTargetPasswordTextField;
@property(retain, nonatomic) MTTextField *targetPasswordTextField; // @synthesize targetPasswordTextField=_targetPasswordTextField;
@property(retain, nonatomic) MTTextField *nickNameTextField; // @synthesize nickNameTextField=_nickNameTextField;
@property(retain, nonatomic) NSString *stid; // @synthesize stid=_stid;
@property(copy, nonatomic) CDUnknownBlockType didSignInBlock; // @synthesize didSignInBlock=_didSignInBlock;
- (void).cxx_destruct;
- (void)setAgreementButtonImage;
- (void)didClickAgreementButton;
- (void)didTapAgreementLabel;
- (void)updateSubmitButtonState:(id)arg1;
- (void)didClickSubmitButton;
- (void)checkUserName;
- (void)registerNickName;
- (BOOL)checkAgreeAvailable;
- (BOOL)checkVerificationCodeAvailable;
- (BOOL)checkNickNameAvailable:(BOOL)arg1;
- (id)getNickNameAvailableaString;
- (int)getNickNameAvailableType;
- (BOOL)checkPassWordAvailable;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

