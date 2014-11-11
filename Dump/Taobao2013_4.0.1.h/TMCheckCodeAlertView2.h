//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIAlertView.h"

#import "TMBaseCheckAlert.h"

@class TBCheckCode, UIButton, VariableOrderDownloader;

@interface TMCheckCodeAlertView2 : UIAlertView <TMBaseCheckAlert>
{
    UIButton *_codeBtn;
    VariableOrderDownloader *_varDownloader;
    TBCheckCode *_checkCode;
}

@property(retain, nonatomic) TBCheckCode *checkCode; // @synthesize checkCode=_checkCode;
- (void).cxx_destruct;
- (void)actionRefresh:(id)arg1;
- (void)loadImageFinished:(id)arg1 userInfo:(id)arg2;
- (void)refreshCheckCode:(id)arg1;
- (void)postDismiss;
- (void)show;
- (void)dealloc;

@end

