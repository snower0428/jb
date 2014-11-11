//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextFieldDelegate.h"

@class BaiduMobAdToolbarLogObj, NSString, UIButton, UIImageView, UITextField;

@interface BaiduMobAdToolBarView : UIView <UITextFieldDelegate>
{
    UIImageView *_buttonsBgView;
    UIButton *_navBackButton;
    UIButton *_navForwardButton;
    UIButton *_navWeiboButton;
    UIButton *_navBaiduButton;
    UIButton *_navSMSButton;
    UIView *_toolbarBaiduView;
    UIImageView *_toolbarbaiduBgView;
    UITextField *_textField;
    UIButton *_baiduButton;
    UIButton *_statusButton;
    NSString *_weiboUrl;
    NSString *_keyword;
    NSString *_message;
    BOOL _isHidden;
    BOOL _hasWeiboButton;
    BOOL _hasBaiduButton;
    BOOL _hasSMSButton;
    BOOL _isBaiduHidden;
    BaiduMobAdToolbarLogObj *_logObj;
    id <BaiduMobAdToolBarViewDelegate> delegate;
}

@property(retain, nonatomic) UIImageView *toolbarbaiduBgView; // @synthesize toolbarbaiduBgView=_toolbarbaiduBgView;
@property(retain, nonatomic) UIImageView *buttonsBgView; // @synthesize buttonsBgView=_buttonsBgView;
@property(retain, nonatomic) BaiduMobAdToolbarLogObj *logObj; // @synthesize logObj=_logObj;
@property(retain, nonatomic) UIButton *baiduButton; // @synthesize baiduButton=_baiduButton;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) UIView *toolbarBaiduView; // @synthesize toolbarBaiduView=_toolbarBaiduView;
@property(nonatomic) id <BaiduMobAdToolBarViewDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) UIButton *navSMSButton; // @synthesize navSMSButton=_navSMSButton;
@property(retain, nonatomic) UIButton *navBaiduButton; // @synthesize navBaiduButton=_navBaiduButton;
@property(retain, nonatomic) UIButton *navWeiboButton; // @synthesize navWeiboButton=_navWeiboButton;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(retain, nonatomic) NSString *weiboUrl; // @synthesize weiboUrl=_weiboUrl;
- (void)dealloc;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (void)actionClick:(id)arg1;
- (void)baiduClick:(id)arg1;
- (void)statusClick;
- (void)layoutSubview:(struct CGSize)arg1 withOrientaion:(int)arg2;
- (void)layoutToolbarBaiduView:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
