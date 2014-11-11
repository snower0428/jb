//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBSNSBasicViewController.h"

#import "TBSNSNewUserPersonalChoisePageControlDelegete.h"
#import "TBSNSPageControlViewDelegate.h"

@class NSArray, NSString, NSTimer, TBSNSAccountService, TBSNSNewUserItem, TBSNSNewUserPersonImageVIew, TBSNSNewUserPersonShadowVIew, TBSNSNewUserPersonWelcomeView, TBSNSNewUserPersonalChoisePageControlView, TBSNSNewUserRecommentView, TBSNSPageControlView, UIButton, UIControl, UIImageView, micListener;

@interface TBSNSNewUserLeadWithAnimationViewController : TBSNSBasicViewController <TBSNSPageControlViewDelegate, TBSNSNewUserPersonalChoisePageControlDelegete>
{
    NSTimer *levelTimer;
    BOOL isDataTableViewOfferSetEnable;
    unsigned int _personalChoisePageControlItemIndex;
    TBSNSNewUserItem *_newUserItem;
    BOOL _isPersonViewFirstShow;
    UIButton *_closeButton;
    UIImageView *_backgroundImageView;
    TBSNSPageControlView *_pageControlView;
    TBSNSNewUserPersonalChoisePageControlView *_personalChoisePageControlView;
    TBSNSNewUserPersonWelcomeView *_FirstView;
    UIImageView *_cloudImage;
    UIControl *_FourthView;
    TBSNSNewUserPersonImageVIew *_personView;
    TBSNSNewUserPersonShadowVIew *_personShadowView;
    TBSNSNewUserRecommentView *_snsNewUserLeadContainerView;
    UIButton *_nextButton;
    UIButton *_preButton;
    UIImageView *_nextButtonImage;
    UIImageView *_preButtonImage;
    NSArray *_dataSouceMale;
    NSArray *_dataSouceWidget;
    int _accountSex;
    unsigned int _itemIndex;
    TBSNSAccountService *_accountCardIdService;
    NSString *_cardId;
    micListener *_listener;
    struct CGPoint _dataTableViewOfferSet;
    double _time;
}

+ (BOOL)tbNeedNavibar;
+ (BOOL)tbNeedToolbar;
@property(retain, nonatomic) micListener *listener; // @synthesize listener=_listener;
@property(nonatomic) double time; // @synthesize time=_time;
@property(retain, nonatomic) NSString *cardId; // @synthesize cardId=_cardId;
@property(retain, nonatomic) TBSNSAccountService *accountCardIdService; // @synthesize accountCardIdService=_accountCardIdService;
@property(nonatomic) unsigned int itemIndex; // @synthesize itemIndex=_itemIndex;
@property(nonatomic) int accountSex; // @synthesize accountSex=_accountSex;
@property(retain, nonatomic) NSArray *dataSouceWidget; // @synthesize dataSouceWidget=_dataSouceWidget;
@property(retain, nonatomic) NSArray *dataSouceMale; // @synthesize dataSouceMale=_dataSouceMale;
@property(retain, nonatomic) UIImageView *preButtonImage; // @synthesize preButtonImage=_preButtonImage;
@property(retain, nonatomic) UIImageView *nextButtonImage; // @synthesize nextButtonImage=_nextButtonImage;
@property(retain, nonatomic) UIButton *preButton; // @synthesize preButton=_preButton;
@property(retain, nonatomic) UIButton *nextButton; // @synthesize nextButton=_nextButton;
@property(retain, nonatomic) TBSNSNewUserRecommentView *snsNewUserLeadContainerView; // @synthesize snsNewUserLeadContainerView=_snsNewUserLeadContainerView;
@property(retain, nonatomic) TBSNSNewUserPersonShadowVIew *personShadowView; // @synthesize personShadowView=_personShadowView;
@property(retain, nonatomic) TBSNSNewUserPersonImageVIew *personView; // @synthesize personView=_personView;
@property(retain, nonatomic) UIControl *FourthView; // @synthesize FourthView=_FourthView;
@property(retain, nonatomic) UIImageView *cloudImage; // @synthesize cloudImage=_cloudImage;
@property(retain, nonatomic) TBSNSNewUserPersonWelcomeView *FirstView; // @synthesize FirstView=_FirstView;
@property(retain, nonatomic) TBSNSNewUserPersonalChoisePageControlView *personalChoisePageControlView; // @synthesize personalChoisePageControlView=_personalChoisePageControlView;
@property(retain, nonatomic) TBSNSPageControlView *pageControlView; // @synthesize pageControlView=_pageControlView;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(nonatomic) struct CGPoint dataTableViewOfferSet; // @synthesize dataTableViewOfferSet=_dataTableViewOfferSet;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
- (void).cxx_destruct;
- (id)groupAnimationTimes:(float)arg1;
- (id)opacityForeverAnimation:(float)arg1;
- (id)scale:(id)arg1 orgin:(id)arg2 durTimes:(float)arg3;
- (void)cloadImageViewDoAnimation;
- (void)levelTimerCallback:(id)arg1;
- (void)GetPower;
- (void)Stop;
- (void)Pause;
- (void)Start;
- (BOOL)forbidbackPanGestureRecognized;
- (void)backSwapGestureRecognized;
- (BOOL)canBecomeFirstResponder;
- (void)motionCancelled:(int)arg1 withEvent:(id)arg2;
- (void)motionEnded:(int)arg1 withEvent:(id)arg2;
- (void)motionBegan:(int)arg1 withEvent:(id)arg2;
- (BOOL)isNeedChangeWithIndex:(unsigned int)arg1;
- (unsigned int)changeDataSouceWithIndex:(unsigned int)arg1;
- (void)setCardIdWithItem:(id)arg1;
- (void)serviceDidFinishLoad:(id)arg1;
- (void)serviceDidCancelLoad:(id)arg1;
- (void)service:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)serviceDidStartLoad:(id)arg1;
- (void)setCurrentPageControlView:(unsigned int)arg1;
- (void)skipNewUserLeadContainerView;
- (void)newUserLeadViewDoAnimation;
- (void)personalChoisePageControlViewDoAnimation;
- (void)firstViewDoAnimation;
- (void)TBSNSNewUserPersonalChoisePageControlView:(id)arg1 willShowViewAtIndex:(unsigned int)arg2;
- (void)TBSNSPageControlView:(id)arg1 didShowViewAtIndex:(unsigned int)arg2;
- (void)TBSNSPageControlView:(id)arg1 willShowViewAtIndex:(unsigned int)arg2;
- (id)TBSNSPageControlView:(id)arg1 atIndex:(unsigned int)arg2;
- (unsigned int)numberOfSectionsInPageControlView:(id)arg1;
- (void)TBSNSPageControlView:(id)arg1 didAtIndex:(unsigned int)arg2;
- (void)changeShowStatus:(id)arg1;
- (void)clearListener;
- (void)setCardIdWithDic:(id)arg1;
- (id)getShadowImageDictionaryWithIndex:(unsigned int)arg1;
- (id)getImageWidgetDictionaryWithIndex:(unsigned int)arg1;
- (id)getImageDictionaryWithIndex:(unsigned int)arg1;
- (void)getAccountCardId;
- (void)setBackGroundColor:(unsigned int)arg1;
- (void)setPersonInfo:(unsigned int)arg1;
- (void)preButtonClick:(id)arg1;
- (void)nextButtonClick:(id)arg1;
- (void)startButtonClick:(id)arg1;
- (void)closeButtonClick:(id)arg1;
- (void)initListener;
- (void)initCloseButton;
- (void)setUpView;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppearAtFirstTime;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;
- (BOOL)needRefresh;
- (BOOL)needNextPage;

@end
