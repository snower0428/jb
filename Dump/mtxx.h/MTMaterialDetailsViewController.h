//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "DMAdViewDelegate.h"
#import "MTMaterialClassifyDetailsCellDelegate.h"
#import "MTMaterialDetailHeaderViewDelegate.h"
#import "MTMaterialRequestDelegate.h"
#import "MTUserLoginCenterViewControllerDelegate.h"
#import "MTUserRegistViewControllerDelegate.h"
#import "SKStoreProductViewControllerDelegate.h"
#import "ShareLoginViewControllerDelegate.h"
#import "UIGridViewDataSource.h"
#import "UIGridViewDelegate.h"

@class DMAdView, MTMaterialDetailHeaderView, MTMaterialRequest, MTMaterialSpecialHeader, MTShareClientTencent, NSArray, NSDictionary, NSString, UIButton, UIGridView, UIImageView, UIView;

__attribute__((visibility("hidden")))
@interface MTMaterialDetailsViewController : UIViewController <DMAdViewDelegate, MTMaterialRequestDelegate, MTUserRegistViewControllerDelegate, MTMaterialDetailHeaderViewDelegate, MTMaterialClassifyDetailsCellDelegate, SKStoreProductViewControllerDelegate, MTUserLoginCenterViewControllerDelegate, ShareLoginViewControllerDelegate, UIGridViewDelegate, UIGridViewDataSource>
{
    BOOL _bNeedToShowAlertForNotVip;
    DMAdView *_dmAdView;
    UIImageView *_adBannerTopView;
    MTMaterialRequest *_request;
    float _cellHeight;
    MTMaterialDetailHeaderView *_detailHeaderView;
    MTShareClientTencent *_shareClient;
    UIView *_noWifiTipsContainerView;
    UIGridView *_gridView;
    UIView *_fastLoginContainer;
    UIButton *_loginButton;
    int _classifyId;
    NSString *_classifyTitle;
    CDUnknownBlockType _dismissCallback;
    CDUnknownBlockType _materialDownloadFinishedCallback;
    NSArray *_dataSource;
    NSDictionary *_adverts;
    MTMaterialSpecialHeader *_specialHeaderMode;
}

@property(retain, nonatomic) MTMaterialSpecialHeader *specialHeaderMode; // @synthesize specialHeaderMode=_specialHeaderMode;
@property(retain, nonatomic) NSDictionary *adverts; // @synthesize adverts=_adverts;
@property(retain, nonatomic) NSArray *dataSource; // @synthesize dataSource=_dataSource;
@property(copy, nonatomic) CDUnknownBlockType materialDownloadFinishedCallback; // @synthesize materialDownloadFinishedCallback=_materialDownloadFinishedCallback;
@property(copy, nonatomic) CDUnknownBlockType dismissCallback; // @synthesize dismissCallback=_dismissCallback;
@property(copy, nonatomic) NSString *classifyTitle; // @synthesize classifyTitle=_classifyTitle;
@property(nonatomic) int classifyId; // @synthesize classifyId=_classifyId;
@property(nonatomic) __weak UIButton *loginButton; // @synthesize loginButton=_loginButton;
@property(nonatomic) __weak UIView *fastLoginContainer; // @synthesize fastLoginContainer=_fastLoginContainer;
@property(nonatomic) __weak UIGridView *gridView; // @synthesize gridView=_gridView;
@property(nonatomic) __weak UIView *noWifiTipsContainerView; // @synthesize noWifiTipsContainerView=_noWifiTipsContainerView;
- (void).cxx_destruct;
- (void)handleShareClientGetUserVipInfo:(id)arg1;
- (void)handleShareClientGetUserInfo:(id)arg1;
- (void)handleShareClientSSOResponse:(id)arg1;
- (void)shareLoginSuccessWithClient:(id)arg1 userInfo:(id)arg2;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)materialDetailHeaderViewCancelWithAreaId:(int)arg1;
- (void)materialDetailHeaderViewDeblocking:(id)arg1 areaId:(int)arg2;
- (void)materialDetailHeaderViewRemoveBindQQVip;
- (void)materialDetailHeaderViewBindQQVipWithAreaId:(int)arg1;
- (void)materialDetailHeaderViewLogin;
- (void)registSuccessWithViewController:(id)arg1;
- (void)loginSuccessWithViewController:(id)arg1;
- (void)showRegisterViewController;
- (void)showLoginViewController;
- (void)showLoginActionSheet;
- (void)adjustAdViewFrame;
- (void)dmDidDismissModalViewFromAd:(id)arg1;
- (void)dmAdViewSuccessToLoadAd:(id)arg1;
- (void)actionMaterialManager:(id)arg1;
- (void)actionBack:(id)arg1;
- (void)actionLogin:(id)arg1;
- (void)downloadFailedWithNotification:(id)arg1;
- (void)downloadSuccessWithNotification:(id)arg1;
- (BOOL)didTouchesDownloadButtonWithClassifyDetail:(id)arg1;
- (void)gridView:(id)arg1 didSelectCellAtIndexPath:(id)arg2;
- (id)gridView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (id)gridView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (float)gridView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (float)gridView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (int)gridView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (int)numberOfSectionsInGridView:(id)arg1;
- (void)requestFailed;
- (void)requestMaterialDetailsFinishedWithAdverts:(id)arg1 details:(id)arg2 specialHeaderMode:(id)arg3;
- (void)checkingForQQVipInfoIfNeed;
- (BOOL)isNeedToVerifyVipInfo;
- (BOOL)isExistMaterialsForQQVip;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithClassifyId:(int)arg1;
- (void)dealloc;

@end
