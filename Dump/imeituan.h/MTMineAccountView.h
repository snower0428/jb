//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

@class SAKUser, UIActivityIndicatorView, UIButton, UILabel, UITapGestureRecognizer;

@interface MTMineAccountView : UIImageView
{
    SAKUser *_user;
    UIImageView *_accountIconView;
    UIImageView *_balanceIconView;
    UILabel *_userIDLabel;
    UIImageView *_levelView;
    UILabel *_balanceLabel;
    UILabel *_balanceValueLabel;
    UIActivityIndicatorView *_spinner;
    UIImageView *_rightArrowView;
    UIImageView *_newNotificationImageView;
    UILabel *_tipLabel;
    UITapGestureRecognizer *_tapGestureRecognizer;
    BOOL _hasNewNotification;
    BOOL _loggedIn;
    UIButton *_loginButton;
}

@property(nonatomic, getter=isLoggedin) BOOL loggedIn; // @synthesize loggedIn=_loggedIn;
@property(nonatomic) BOOL hasNewNotification; // @synthesize hasNewNotification=_hasNewNotification;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) UIButton *loginButton; // @synthesize loginButton=_loginButton;
@property(readonly, nonatomic) UILabel *balanceValueLabel; // @synthesize balanceValueLabel=_balanceValueLabel;
@property(readonly, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)init;

@end
