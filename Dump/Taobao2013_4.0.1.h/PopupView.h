//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIAlertViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class NSDictionary, NSMutableArray, NSString, UIButton, UIImageView;

@interface PopupView : UIView <UIGestureRecognizerDelegate, UIAlertViewDelegate>
{
    UIView *maskView;
    BOOL bShowKeyboard;
    UIView *mask_newUser;
    UIImageView *logo_newUser;
    UIImageView *logo_newUser2;
    UIImageView *logo_newUser3;
    UIView *container;
    BOOL displayingFrontView;
    BOOL isFliping;
    BOOL _fullscreen;
    BOOL _visibility;
    BOOL _allowBack;
    BOOL _oneTime;
    NSMutableArray *_model;
    NSString *_switch_action;
    NSDictionary *_onload;
    NSDictionary *_action;
    NSString *_onclick;
    NSString *_type;
    NSDictionary *_params;
    int _dismiss_delay;
    NSString *_exit;
    UIButton *_switch_btn;
    UIButton *_comfirm_btn;
    UIImageView *_imageView;
    id <PopupViewDelegate> _delegate;
    UIView *_detailView;
    UIImageView *_detailImageView;
}

@property(retain, nonatomic) UIImageView *detailImageView; // @synthesize detailImageView=_detailImageView;
@property(retain, nonatomic) UIView *detailView; // @synthesize detailView=_detailView;
@property(nonatomic) __weak id <PopupViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIButton *comfirm_btn; // @synthesize comfirm_btn=_comfirm_btn;
@property(retain, nonatomic) UIButton *switch_btn; // @synthesize switch_btn=_switch_btn;
@property(nonatomic) BOOL oneTime; // @synthesize oneTime=_oneTime;
@property(retain, nonatomic) NSString *exit; // @synthesize exit=_exit;
@property(nonatomic) BOOL allowBack; // @synthesize allowBack=_allowBack;
@property(nonatomic) BOOL visibility; // @synthesize visibility=_visibility;
@property(nonatomic) BOOL fullscreen; // @synthesize fullscreen=_fullscreen;
@property(nonatomic) int dismiss_delay; // @synthesize dismiss_delay=_dismiss_delay;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *onclick; // @synthesize onclick=_onclick;
@property(retain, nonatomic) NSDictionary *action; // @synthesize action=_action;
@property(retain, nonatomic) NSDictionary *onload; // @synthesize onload=_onload;
@property(retain, nonatomic) NSString *switch_action; // @synthesize switch_action=_switch_action;
@property(retain, nonatomic) NSMutableArray *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)showPopView;
- (void)hidePopView;
- (void)goBack;
- (void)showErrorToast:(id)arg1;
- (void)onSubmit;
- (id)getValueByName:(id)arg1;
- (BOOL)checkContent;
- (BOOL)checkinput;
- (BOOL)resignFirstResponder;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)submit:(id)arg1;
- (void)internal_submit:(id)arg1;
- (void)onConfirm:(id)arg1;
- (void)onCancle:(id)arg1;
- (void)switchAnimation;
- (void)onSwitch:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)dismiss;
- (void)handleSingleTap:(id)arg1;
- (void)onToastDismiss:(id)arg1;
- (BOOL)excuteJs:(id)arg1;
- (BOOL)inputGetFocus;
- (void)handleSingleTapOnMask:(id)arg1;
- (id)isShowPayWay;
- (id)isShowDetail;
- (struct CGPoint)calcViewInScreen:(id)arg1;
- (void)flip;
- (void)dismissKeyboard;
- (void)internal_popup;
- (void)popup;
- (void)addSubview:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)textfieldFocus:(id)arg1;
- (void)dealloc;

@end
