//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGFeedViewController.h"

#import "IGActionSheetDelegate.h"

@class IGFriendRequestHeaderView, IGNuxTapOnCameraView, IGRaindropRankInfo, IGUser, IGUserDetailHeaderView, NSString, UIBarButtonItem;

@interface IGUserDetailViewController : IGFeedViewController <IGActionSheetDelegate>
{
    UIBarButtonItem *_configureBarButton;
    BOOL _needsFeedRefresh;
    IGUserDetailHeaderView *_headerView;
    IGUser *_user;
    IGFriendRequestHeaderView *_requestHeader;
    IGNuxTapOnCameraView *_emptyFeedNUX;
}

@property(nonatomic) BOOL needsFeedRefresh; // @synthesize needsFeedRefresh=_needsFeedRefresh;
@property(retain, nonatomic) IGNuxTapOnCameraView *emptyFeedNUX; // @synthesize emptyFeedNUX=_emptyFeedNUX;
@property(retain, nonatomic) IGFriendRequestHeaderView *requestHeader; // @synthesize requestHeader=_requestHeader;
@property(retain, nonatomic) IGUser *user; // @synthesize user=_user;
@property(retain, nonatomic) IGUserDetailHeaderView *headerView; // @synthesize headerView=_headerView;
- (void).cxx_destruct;
- (id)rankTokenForFeedNetworkSource:(id)arg1;
- (void)reloadDataFromPullToRefresh;
- (void)dismissNUX;
- (void)reportInappropriateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)analyticsExtras;
- (id)analyticsModule;
- (void)feedNetworkSource:(id)arg1 didFinishLoadingObjects:(id)arg2 forFetchAction:(int)arg3;
- (void)updateNetworkSource;
- (void)pushAccountSettings;
- (void)presentFriendshipActionSheet;
- (void)checkFriendshipStatus;
- (BOOL)shouldShowFriendStatus;
- (BOOL)isShowingCurrentUser;
- (void)onNeedsFullReload;
- (void)followButton:(id)arg1 tappedWithAction:(int)arg2;
- (void)onFriendStatusFailed:(id)arg1;
- (void)onFriendStatusReceived:(id)arg1;
- (void)onUserInfoReceived:(id)arg1;
- (void)actionSheetDismissedWithButtonTitled:(id)arg1;
- (void)fetchAdditionalUserData;
- (id)userBlockedFooterViewForUser:(id)arg1;
- (void)configureUserDetailFooterView;
- (void)viewWillAppear:(BOOL)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(retain, nonatomic) IGRaindropRankInfo *currentRankInfo;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

