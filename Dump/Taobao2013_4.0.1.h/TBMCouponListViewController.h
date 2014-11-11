//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBMBasePullTableViewController.h"

#import "TBMLocationDelegate.h"

@class NSIndexPath, NSString, TBMCity, TBMLocation, UIButton;

@interface TBMCouponListViewController : TBMBasePullTableViewController <TBMLocationDelegate>
{
    BOOL isTableUpdating;
    BOOL _hasLoadedMovieList;
    NSString *_cityCode;
    NSString *_cityName;
    TBMLocation *_location;
    NSIndexPath *_openedIndexPath;
    UIButton *_movieButton;
    UIButton *_couponButton;
    UIButton *_userButton;
    TBMCity *_currentReverseCity;
    struct CGPoint _currentPosition;
}

@property(retain, nonatomic) TBMCity *currentReverseCity; // @synthesize currentReverseCity=_currentReverseCity;
@property(retain, nonatomic) UIButton *userButton; // @synthesize userButton=_userButton;
@property(retain, nonatomic) UIButton *couponButton; // @synthesize couponButton=_couponButton;
@property(retain, nonatomic) UIButton *movieButton; // @synthesize movieButton=_movieButton;
@property(nonatomic) BOOL hasLoadedMovieList; // @synthesize hasLoadedMovieList=_hasLoadedMovieList;
@property(retain, nonatomic) NSIndexPath *openedIndexPath; // @synthesize openedIndexPath=_openedIndexPath;
@property(retain, nonatomic) TBMLocation *location; // @synthesize location=_location;
@property(nonatomic) struct CGPoint currentPosition; // @synthesize currentPosition=_currentPosition;
@property(retain, nonatomic) NSString *cityName; // @synthesize cityName=_cityName;
@property(retain, nonatomic) NSString *cityCode; // @synthesize cityCode=_cityCode;
@property(nonatomic) BOOL isTableUpdating; // @synthesize isTableUpdating;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)requestDidCanceled:(id)arg1;
- (void)requestDidFailed:(id)arg1;
- (void)doChangeCity;
- (void)requestDidFinished:(id)arg1;
- (void)requestDidStarted:(id)arg1;
- (void)loadData;
- (void)checkLoc2ReloadClist;
- (void)backItemClicked:(id)arg1;
- (void)onButtonGotoMoviePage:(id)arg1;
- (void)switchToUserCentre;
- (void)gotoUserCenter:(id)arg1;
- (void)setupInitItems;
- (void)didReceiveMemoryWarning;
- (void)viewDidUnload;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithArgs:(id)arg1;

@end

