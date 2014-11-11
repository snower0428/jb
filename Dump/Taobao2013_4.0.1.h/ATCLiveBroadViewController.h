//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ATCViewController.h"

#import "ATCLiveBroadViewControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MtopArcticCircleGetBuyingCircleTrendsResponseData, NSMutableArray, NSNumber, NSString, UILabel, UITableView, UIView;

@interface ATCLiveBroadViewController : ATCViewController <ATCLiveBroadViewControllerDelegate, UITableViewDataSource, UITableViewDelegate>
{
    UITableView *_tableView;
    NSMutableArray *_buyingItems;
    UIView *_guessMeLikeView;
    MtopArcticCircleGetBuyingCircleTrendsResponseData *_data;
    NSString *_circleID;
    NSString *_circleName;
    NSString *_startTime;
    NSString *_gender;
    NSNumber *_isGuessMeLike;
    UILabel *_guessMeLikeLabel;
    NSNumber *_fromWhichKind;
    NSNumber *_requestNum;
}

+ (id)getCurrentTime;
@property(retain, nonatomic) NSNumber *requestNum; // @synthesize requestNum=_requestNum;
@property(retain, nonatomic) NSNumber *fromWhichKind; // @synthesize fromWhichKind=_fromWhichKind;
@property(retain, nonatomic) UILabel *guessMeLikeLabel; // @synthesize guessMeLikeLabel=_guessMeLikeLabel;
@property(retain, nonatomic) NSNumber *isGuessMeLike; // @synthesize isGuessMeLike=_isGuessMeLike;
@property(retain, nonatomic) NSString *gender; // @synthesize gender=_gender;
@property(retain, nonatomic) NSString *startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSString *circleName; // @synthesize circleName=_circleName;
@property(retain, nonatomic) NSString *circleID; // @synthesize circleID=_circleID;
@property(retain, nonatomic) MtopArcticCircleGetBuyingCircleTrendsResponseData *data; // @synthesize data=_data;
@property(retain, nonatomic) UIView *guessMeLikeView; // @synthesize guessMeLikeView=_guessMeLikeView;
@property(retain, nonatomic) NSMutableArray *buyingItems; // @synthesize buyingItems=_buyingItems;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)guessMeLike:(id)arg1;
- (void)resetLoadEnd;
- (void)onLoadEnd;
- (void)onLoadMoreFresh:(id)arg1 andGender:(id)arg2;
- (void)onReloadErrorCallBack;
- (void)onTopFresh:(id)arg1 andGender:(id)arg2;
- (void)configForFresh;
- (void)backAction:(id)arg1;
- (void)initNavigationView;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)didReceiveMemoryWarning;
- (id)initWithCircleId:(id)arg1 andCircleName:(id)arg2;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

