//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIAlertView.h"

#import "TMBaseCheckAlert.h"

@class TBCheckCode, UIButton, UITextField, VariableOrderDownloader;

@interface TMCheckCodeAlertView : UIAlertView <TMBaseCheckAlert>
{
    UIButton *_codeBtn;
    VariableOrderDownloader *_varDownloader;
    TBCheckCode *_checkCode;
    UITextField *_userTextField;
    id <UIAlertViewDelegate><TMCheckCodeAlertViewDelegate> _mDelegate;
}

@property(nonatomic) id <UIAlertViewDelegate><TMCheckCodeAlertViewDelegate> mDelegate; // @synthesize mDelegate=_mDelegate;
@property(retain, nonatomic) UITextField *userTextField; // @synthesize userTextField=_userTextField;
@property(retain, nonatomic) TBCheckCode *checkCode; // @synthesize checkCode=_checkCode;
- (void).cxx_destruct;
- (void)dealloc;
- (void)dismissWithClickedButtonIndex:(int)arg1 animated:(BOOL)arg2;
- (void)actionRefresh:(id)arg1;
- (void)loadImageFinished:(id)arg1 userInfo:(id)arg2;
- (void)refreshCheckCode:(id)arg1;
- (id)init;

@end
