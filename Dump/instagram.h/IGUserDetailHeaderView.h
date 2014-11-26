//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGCoreTextLinkHandler.h"
#import "IGFeedToggleViewDelegate.h"
#import "IGFollowButtonDelegate.h"
#import "IGProfilePictureHelperDelegate.h"
#import "IGProfilePictureImageViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class IGButton, IGCoreTextView, IGFeedToggleView, IGFollowButton, IGFriendRequestHeaderView, IGProfilePictureHelper, IGProfilePictureImageView, IGSimilarAccountsControl, IGSimilarAccountsView, IGStatButton, IGUser, IGUserDetailViewController, NSString, UIButton;

@interface IGUserDetailHeaderView : UIView <IGCoreTextLinkHandler, IGFollowButtonDelegate, UIGestureRecognizerDelegate, IGProfilePictureImageViewDelegate, IGFeedToggleViewDelegate, IGProfilePictureHelperDelegate>
{
    BOOL _requestHeaderShowing;
    BOOL _showingSimilarAccountsView;
    IGUserDetailViewController *_delegate;
    IGUser *_user;
    IGProfilePictureImageView *_profilePic;
    IGStatButton *_followersButton;
    IGStatButton *_followingButton;
    IGStatButton *_mediaButton;
    IGButton *_editProfileButton;
    IGFollowButton *_followButton;
    IGButton *_similarAccountsButton;
    IGFriendRequestHeaderView *_requestHeader;
    IGCoreTextView *_infoLabelView;
    UIView *_infoLabelContainerView;
    UIView *_similarAccountsContainerView;
    IGFeedToggleView *_toggleBar;
    IGProfilePictureHelper *_profilePictureHelper;
    UIButton *_accessibilityButton;
    IGSimilarAccountsControl *_similarAccountsControl;
    IGSimilarAccountsView *_similarAccountsView;
}

@property(retain, nonatomic) IGSimilarAccountsView *similarAccountsView; // @synthesize similarAccountsView=_similarAccountsView;
@property(retain, nonatomic) IGSimilarAccountsControl *similarAccountsControl; // @synthesize similarAccountsControl=_similarAccountsControl;
@property(nonatomic) BOOL showingSimilarAccountsView; // @synthesize showingSimilarAccountsView=_showingSimilarAccountsView;
@property(retain, nonatomic) UIButton *accessibilityButton; // @synthesize accessibilityButton=_accessibilityButton;
@property(nonatomic) BOOL requestHeaderShowing; // @synthesize requestHeaderShowing=_requestHeaderShowing;
@property(retain, nonatomic) IGProfilePictureHelper *profilePictureHelper; // @synthesize profilePictureHelper=_profilePictureHelper;
@property(retain, nonatomic) IGFeedToggleView *toggleBar; // @synthesize toggleBar=_toggleBar;
@property(retain, nonatomic) UIView *similarAccountsContainerView; // @synthesize similarAccountsContainerView=_similarAccountsContainerView;
@property(retain, nonatomic) UIView *infoLabelContainerView; // @synthesize infoLabelContainerView=_infoLabelContainerView;
@property(retain, nonatomic) IGCoreTextView *infoLabelView; // @synthesize infoLabelView=_infoLabelView;
@property(retain, nonatomic) IGFriendRequestHeaderView *requestHeader; // @synthesize requestHeader=_requestHeader;
@property(retain, nonatomic) IGButton *similarAccountsButton; // @synthesize similarAccountsButton=_similarAccountsButton;
@property(retain, nonatomic) IGFollowButton *followButton; // @synthesize followButton=_followButton;
@property(retain, nonatomic) IGButton *editProfileButton; // @synthesize editProfileButton=_editProfileButton;
@property(retain, nonatomic) IGStatButton *mediaButton; // @synthesize mediaButton=_mediaButton;
@property(retain, nonatomic) IGStatButton *followingButton; // @synthesize followingButton=_followingButton;
@property(retain, nonatomic) IGStatButton *followersButton; // @synthesize followersButton=_followersButton;
@property(retain, nonatomic) IGProfilePictureImageView *profilePic; // @synthesize profilePic=_profilePic;
@property(retain, nonatomic) IGUser *user; // @synthesize user=_user;
@property(nonatomic) __weak IGUserDetailViewController *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)followButton:(id)arg1 tappedWithAction:(int)arg2;
- (void)profilePictureHelper:(id)arg1 didFinishDownloadingProfilePicture:(id)arg2;
- (void)profilePictureHelperRemovePictureButtonTapped:(id)arg1;
- (BOOL)profilePictureHelperShouldShowRemovePicture:(id)arg1;
- (void)onExternalLinkTapped;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)profilePictureTapped:(id)arg1;
- (void)followingButtonTapped:(id)arg1;
- (void)followersButtonTapped:(id)arg1;
- (void)mediaButtonTapped:(id)arg1;
- (void)presentUserListWithURL:(id)arg1 title:(id)arg2 asListType:(int)arg3 contextPK:(id)arg4;
- (void)onFriendStatusChanged:(id)arg1;
- (void)onOwnMediaDeleted:(id)arg1;
- (void)onOwnMediaAdded:(id)arg1;
- (void)updateAllContentViews;
- (void)updateLayout;
- (struct CGRect)frameForSimilarAccountsButton;
- (struct CGRect)frameForEditProfileButton;
- (struct CGRect)frameForFollowButton;
- (void)onEditProfileTapped;
- (void)userChanged:(id)arg1;
- (BOOL)enableLists;
- (void)updateSimilarAccountsButton;
- (void)updateFollowButton;
- (void)updateBioText;
- (id)friendlyURLString;
- (void)updateToggleButtons;
- (void)updateCountLabels;
- (void)updateToggleBar;
- (void)updateRequestHeader;
- (void)requestHeaderIsShowing:(BOOL)arg1;
- (void)onFeedViewModeChanged:(int)arg1;
- (void)toggleSimilarAccountsView:(BOOL)arg1;
- (void)onSimilarAccountsButtonTapped:(id)arg1;
- (void)onFollowButtonTapped:(id)arg1;
- (void)feedToggle:(id)arg1 selectedButton:(int)arg2;
- (BOOL)showChainingButton;
- (id)newStatButton;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

