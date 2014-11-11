//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBSNSBasicView.h"

@class TBLoadingView, TBSNSAccountItem, TBSNSAccountService, TBSNSRelationService, UIButton, UIImageView, UILabel, UIView;

@interface TBSNSAccountFollowView : TBSNSBasicView
{
    UILabel *_accountTitleLabel;
    UILabel *_accountDescriptionLabel;
    UILabel *_accountFollowCountLabel;
    UILabel *_accountFollowAttentionLabel;
    UIImageView *_accountIconImageView;
    UIImageView *_accountIconMask;
    UIButton *_accountFollowButton;
    UIView *_accountBgView;
    UIButton *_accountBgButton;
    TBSNSAccountItem *_accountInfo;
    TBSNSAccountService *_accountService;
    TBSNSRelationService *_followService;
    long _fansCount;
    TBLoadingView *_buttonLoadingIndicator;
    UIView *_buttonLoadingMastView;
}

@property(retain, nonatomic) UIView *buttonLoadingMastView; // @synthesize buttonLoadingMastView=_buttonLoadingMastView;
@property(retain, nonatomic) TBLoadingView *buttonLoadingIndicator; // @synthesize buttonLoadingIndicator=_buttonLoadingIndicator;
@property(nonatomic) long fansCount; // @synthesize fansCount=_fansCount;
@property(retain, nonatomic) TBSNSRelationService *followService; // @synthesize followService=_followService;
@property(retain, nonatomic) TBSNSAccountService *accountService; // @synthesize accountService=_accountService;
@property(retain, nonatomic) TBSNSAccountItem *accountInfo; // @synthesize accountInfo=_accountInfo;
@property(retain, nonatomic) UIButton *accountBgButton; // @synthesize accountBgButton=_accountBgButton;
@property(retain, nonatomic) UIView *accountBgView; // @synthesize accountBgView=_accountBgView;
@property(retain, nonatomic) UIButton *accountFollowButton; // @synthesize accountFollowButton=_accountFollowButton;
@property(retain, nonatomic) UIImageView *accountIconMask; // @synthesize accountIconMask=_accountIconMask;
@property(retain, nonatomic) UIImageView *accountIconImageView; // @synthesize accountIconImageView=_accountIconImageView;
@property(retain, nonatomic) UILabel *accountFollowAttentionLabel; // @synthesize accountFollowAttentionLabel=_accountFollowAttentionLabel;
@property(retain, nonatomic) UILabel *accountFollowCountLabel; // @synthesize accountFollowCountLabel=_accountFollowCountLabel;
@property(retain, nonatomic) UILabel *accountDescriptionLabel; // @synthesize accountDescriptionLabel=_accountDescriptionLabel;
@property(retain, nonatomic) UILabel *accountTitleLabel; // @synthesize accountTitleLabel=_accountTitleLabel;
- (void).cxx_destruct;
- (void)serviceDidCancelLoad:(id)arg1;
- (void)service:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)serviceDidFinishLoad:(id)arg1;
- (void)gotoDetailView:(id)arg1;
- (void)setFollow:(BOOL)arg1;
- (void)accountFollowOperation:(id)arg1;
- (void)accountFollowOperationWithSid:(id)arg1;
- (void)stopFollowLoadingAndRestState;
- (void)stopFollowLoading;
- (void)setAccountFollowButtonStatus:(BOOL)arg1;
- (int)getAccountFansCount;
- (void)accountCountSub;
- (void)accountCountAdd;
- (void)setFollowState;
- (void)setAccountFollowButtonFollow:(BOOL)arg1;
- (void)setData;
- (void)refresh;
- (void)reload;
- (void)loadData;
- (struct CGRect)defaultFrame;
- (void)initAccountButton;
- (void)initAccountLabel;
- (void)initAccountIconView;
- (void)initBackground;
- (BOOL)needAlert;
- (BOOL)needLoadingView;
- (void)dealloc;
- (void)setUpView;
- (void)setSnsId:(unsigned long long)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithSnsId:(unsigned long long)arg1;
- (id)initWithSnsId:(unsigned long long)arg1 Frame:(struct CGRect)arg2;

@end

