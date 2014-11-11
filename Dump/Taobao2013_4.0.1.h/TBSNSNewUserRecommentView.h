//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBSNSBasicView.h"

#import "TBSNSAccountCardViewDelegate.h"
#import "TBSNSBasicServiceDelegate.h"

@class NSMutableArray, NSString, TBSNSNewUserLeadContainerView, TBSNSNewUserRecommendMenuView, TBSNSPagedList, TBSNSRecommendAccountService, TBSNSRelationService, UIButton, UILabel;

@interface TBSNSNewUserRecommentView : TBSNSBasicView <TBSNSBasicServiceDelegate, TBSNSAccountCardViewDelegate>
{
    TBSNSRecommendAccountService *_recommendAccountService;
    TBSNSRelationService *_accountOperationService;
    TBSNSPagedList *_recommendPagedList;
    int _indexPath;
    unsigned int readCount;
    BOOL isFollowAction;
    BOOL _isFirstShowAnimation;
    UILabel *_textLabel;
    CDUnknownBlockType _dataDidFinishedBlock;
    TBSNSNewUserLeadContainerView *_snsNewUserLeadContainerView;
    NSString *_cardId;
    NSMutableArray *_dataSouce;
    UIButton *_shakeButton;
    TBSNSNewUserRecommendMenuView *_menuItemViewOne;
    TBSNSNewUserRecommendMenuView *_menuItemViewTwo;
    TBSNSNewUserRecommendMenuView *_menuItemViewThree;
    TBSNSNewUserRecommendMenuView *_menuItemViewFour;
    TBSNSNewUserRecommendMenuView *_menuItemViewFive;
    TBSNSNewUserRecommendMenuView *_menuItemViewSix;
}

@property(retain, nonatomic) TBSNSNewUserRecommendMenuView *menuItemViewSix; // @synthesize menuItemViewSix=_menuItemViewSix;
@property(retain, nonatomic) TBSNSNewUserRecommendMenuView *menuItemViewFive; // @synthesize menuItemViewFive=_menuItemViewFive;
@property(retain, nonatomic) TBSNSNewUserRecommendMenuView *menuItemViewFour; // @synthesize menuItemViewFour=_menuItemViewFour;
@property(retain, nonatomic) TBSNSNewUserRecommendMenuView *menuItemViewThree; // @synthesize menuItemViewThree=_menuItemViewThree;
@property(retain, nonatomic) TBSNSNewUserRecommendMenuView *menuItemViewTwo; // @synthesize menuItemViewTwo=_menuItemViewTwo;
@property(retain, nonatomic) TBSNSNewUserRecommendMenuView *menuItemViewOne; // @synthesize menuItemViewOne=_menuItemViewOne;
@property(retain, nonatomic) UIButton *shakeButton; // @synthesize shakeButton=_shakeButton;
@property(retain, nonatomic) NSMutableArray *dataSouce; // @synthesize dataSouce=_dataSouce;
@property(retain, nonatomic) NSString *cardId; // @synthesize cardId=_cardId;
@property(nonatomic) BOOL isFirstShowAnimation; // @synthesize isFirstShowAnimation=_isFirstShowAnimation;
@property(retain, nonatomic) TBSNSNewUserLeadContainerView *snsNewUserLeadContainerView; // @synthesize snsNewUserLeadContainerView=_snsNewUserLeadContainerView;
@property(copy, nonatomic) CDUnknownBlockType dataDidFinishedBlock; // @synthesize dataDidFinishedBlock=_dataDidFinishedBlock;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
- (void).cxx_destruct;
- (id)scale:(id)arg1 orgin:(id)arg2 durTimes:(float)arg3;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)menuView:(id)arg1 ItemViewForRowAtIndex:(int)arg2 changeItemViewFrame:(id)arg3;
- (void)menuView:(id)arg1 ItemPressedUpOutsideActionAtIndex:(int)arg2;
- (void)menuView:(id)arg1 ItemPressedAtIndex:(int)arg2;
- (void)menuView:(id)arg1 ItemPressedDownAtIndex:(int)arg2;
- (id)menuView:(id)arg1 ItemViewForRowAtIndex:(int)arg2;
- (void)menuView:(id)arg1 didSelectItemAtIndex:(int)arg2;
- (struct CGSize)menuView:(id)arg1 ItemSizeForRowAtIndex:(int)arg2;
- (int)menuViewNumberOfItems:(id)arg1;
- (id)itemAtIndexPath:(int)arg1;
- (void)setFollow:(BOOL)arg1;
- (void)accountFollowOperation:(id)arg1;
- (void)reloadDataSource;
- (void)removeOldDataInPagedList;
- (void)serviceDidFinishLoad:(id)arg1;
- (void)serviceDidCancelLoad:(id)arg1;
- (void)service:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)serviceDidStartLoad:(id)arg1;
- (void)shakeButtonClick:(id)arg1;
- (void)accountFollowOperationWithSid:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)getCacheData;
- (void)setTextLabelText:(id)arg1;
- (void)resetNewUserView;
- (void)setRecommentViewWithDic:(id)arg1;
- (void)loadRecommendAccountData;
- (void)loadDataWithCardId:(id)arg1;
- (void)loadDataWithCardId:(id)arg1 withHandle:(CDUnknownBlockType)arg2;
- (void)doAnimation;
- (void)setMenuViewFrame;
- (void)initLabel;
- (void)initRecommendView;
- (void)initService;
- (void)setUpView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (BOOL)needRefresh;
- (BOOL)needNextPage;
- (void)nextPage;

@end

