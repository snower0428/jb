//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "CPPresentNumberBallsViewDelegate.h"
#import "UIAccelerometerDelegate.h"

@class CPPresentChangeLotteryButton, CPPresentNumberBallsView, MKNetworkOperation, NSArray, NSString, StakeInfoBase, UIAcceleration, UIButton, UIImageView, UILabel, UIScrollView, UIView, UIWebView;

@interface CPPresentHomeViewController : UIViewController <CPPresentNumberBallsViewDelegate, UIAccelerometerDelegate>
{
    UILabel *_friendNamesLabel;
    UILabel *_friendCountLabel;
    UIScrollView *_scrollView;
    UIImageView *_scrollViewBgView;
    UILabel *_presentHintLabel;
    UIButton *_prsentLotteryButton;
    int _presentLotteryType;
    CPPresentChangeLotteryButton *_ssqButton;
    CPPresentChangeLotteryButton *_dltButton;
    CPPresentNumberBallsView *_ballsView;
    UIWebView *_zhuFuWebView;
    UILabel *_issueHintLabel;
    UIView *_shakeHintView;
    UIView *_zhuFuYuView;
    UIImageView *_taoBiZhong;
    BOOL _isSSQCanPresent;
    BOOL _isDLTCanPresent;
    NSArray *_selectPerson;
    NSString *_blessings;
    MKNetworkOperation *_currencyOperation;
    BOOL _histeresisExcited;
    UIAcceleration *_lastAcceleration;
    MKNetworkOperation *_networkOperation;
    NSArray *_sweetyWords;
    StakeInfoBase *_currentStake;
}

@property(retain, nonatomic) NSArray *sweetyWords; // @synthesize sweetyWords=_sweetyWords;
@property(retain, nonatomic) UIAcceleration *lastAcceleration; // @synthesize lastAcceleration=_lastAcceleration;
@property(retain, nonatomic) NSArray *selectPerson; // @synthesize selectPerson=_selectPerson;
@property(nonatomic) int presentLotteryType; // @synthesize presentLotteryType=_presentLotteryType;
@property(nonatomic) BOOL isDLTCanPresent; // @synthesize isDLTCanPresent=_isDLTCanPresent;
@property(nonatomic) BOOL isSSQCanPresent; // @synthesize isSSQCanPresent=_isSSQCanPresent;
- (void).cxx_destruct;
- (void)backSwapGestureRecognized;
- (void)dealloc;
- (void)lazyCreateOrder;
- (void)loginSuccess;
- (void)UserInfoEditedCancel;
- (void)UserInfoEditedSuccess;
- (void)getLotteryQueryUser;
- (void)createPresentOrder;
- (void)updateSweetyWords;
- (void)accelerometer:(id)arg1 didAccelerate:(id)arg2;
- (void)editStakeButtonClicked;
- (void)updataRecentContact;
- (void)backItemClicked:(id)arg1;
- (void)didReceiveMemoryWarning;
@property(retain, nonatomic) StakeInfoBase *currentStake; // @synthesize currentStake=_currentStake;
- (void)updateTotalFee;
- (id)createOneRandomStake;
- (void)setIssueLabelInfo;
- (void)refreshFriendNames;
- (int)getRandomLotteryType;
- (void)gotoChooseFriend;
- (void)gotoSendMessage;
- (void)showCanNotPresentAlert;
- (void)changeLotteryTypeButtonClicked:(id)arg1;
- (void)initBalls;
- (void)relayoutScrollView;
- (void)relayoutZhuFuYuWithText:(id)arg1;
- (void)addScrollViewContents;
- (void)addBodyViews;
- (void)addTopHeaderView;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;
- (id)initWithTitle:(id)arg1;

@end

