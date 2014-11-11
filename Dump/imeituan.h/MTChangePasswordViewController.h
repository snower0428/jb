//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTBaseViewController.h"

#import "UITextFieldDelegate.h"

@class MTTextField, UIButton;

@interface MTChangePasswordViewController : MTBaseViewController <UITextFieldDelegate>
{
    MTTextField *_currentPasswordTextField;
    MTTextField *_targetPasswordTextField;
    MTTextField *_repeatTargetPasswordTextField;
    UIButton *_submitButton;
    CDUnknownBlockType _completedBlock;
}

@property(copy, nonatomic) CDUnknownBlockType completedBlock; // @synthesize completedBlock=_completedBlock;
@property(retain, nonatomic) UIButton *submitButton; // @synthesize submitButton=_submitButton;
@property(retain, nonatomic) MTTextField *repeatTargetPasswordTextField; // @synthesize repeatTargetPasswordTextField=_repeatTargetPasswordTextField;
@property(retain, nonatomic) MTTextField *targetPasswordTextField; // @synthesize targetPasswordTextField=_targetPasswordTextField;
@property(retain, nonatomic) MTTextField *currentPasswordTextField; // @synthesize currentPasswordTextField=_currentPasswordTextField;
- (void).cxx_destruct;
- (void)didClickSubmitButton;
- (void)didTapBackground;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)updateSubmitButtonState:(id)arg1;
- (void)submit;
- (void)viewDidLoad;
- (void)setupUI;
- (id)hintLabelWithText:(id)arg1;
- (id)comaLabel;
- (void)loadView;
- (id)init;

@end

