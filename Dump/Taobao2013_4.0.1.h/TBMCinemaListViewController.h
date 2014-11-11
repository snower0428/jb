//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBMBasePullTableViewController.h"

#import "TBMCinemaSectionHeaderViewDelegate.h"
#import "TBMLocationDelegate.h"

@class NSMutableArray, NSString, TBMCity, TBMLocation, TBMShow, UIButton, UIImageView, UILabel, UIView;

@interface TBMCinemaListViewController : TBMBasePullTableViewController <TBMCinemaSectionHeaderViewDelegate, TBMLocationDelegate>
{
    UIImageView *_posterImageView;
    UIButton *_tabNearbyButton;
    UIButton *_tabDistrictButton;
    UIView *_tableContentView;
    UILabel *_movieNameLabel;
    NSString *_movieID;
    NSString *_movieName;
    NSString *_cityName;
    NSMutableArray *_itemsForNearbyTab;
    NSMutableArray *_itemsForDistrictTab;
    TBMLocation *_location;
    int _sortType;
    TBMCity *_currentReverseCity;
    TBMShow *_movieDetail;
    struct CGPoint _currentPosition;
}

@property(retain, nonatomic) TBMShow *movieDetail; // @synthesize movieDetail=_movieDetail;
@property(retain, nonatomic) TBMCity *currentReverseCity; // @synthesize currentReverseCity=_currentReverseCity;
@property(nonatomic) int sortType; // @synthesize sortType=_sortType;
@property(retain, nonatomic) TBMLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) NSMutableArray *itemsForDistrictTab; // @synthesize itemsForDistrictTab=_itemsForDistrictTab;
@property(retain, nonatomic) NSMutableArray *itemsForNearbyTab; // @synthesize itemsForNearbyTab=_itemsForNearbyTab;
@property(nonatomic) struct CGPoint currentPosition; // @synthesize currentPosition=_currentPosition;
@property(retain, nonatomic) NSString *cityName; // @synthesize cityName=_cityName;
@property(retain, nonatomic) NSString *movieName; // @synthesize movieName=_movieName;
@property(retain, nonatomic) NSString *movieID; // @synthesize movieID=_movieID;
@property(retain, nonatomic) UILabel *movieNameLabel; // @synthesize movieNameLabel=_movieNameLabel;
@property(retain, nonatomic) UIView *tableContentView; // @synthesize tableContentView=_tableContentView;
@property(retain, nonatomic) UIButton *tabDistrictButton; // @synthesize tabDistrictButton=_tabDistrictButton;
@property(retain, nonatomic) UIButton *tabNearbyButton; // @synthesize tabNearbyButton=_tabNearbyButton;
@property(retain, nonatomic) UIImageView *posterImageView; // @synthesize posterImageView=_posterImageView;
- (void)dealloc;
- (void)cinemaSectionHeaderView:(id)arg1 didChangedOpenStatusTo:(BOOL)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)reverseCityFailed:(id)arg1;
- (void)reverseCitySucc:(id)arg1;
- (void)getLoctionFailed:(id)arg1 isLocON:(BOOL)arg2;
- (void)getLoctionSucc:(id)arg1 oldLocation:(id)arg2;
- (void)setSortButtonStyle;
- (void)requestDidCanceled:(id)arg1;
- (void)requestDidFailed:(id)arg1;
- (void)requestDidFinished:(id)arg1;
- (void)requestDidStarted:(id)arg1;
- (void)loadData;
- (void)reloadTableViewDataSource;
- (void)doGetLocation;
- (void)doChangeTab:(id)arg1;
- (void)doBack:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidUnload;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)setupInitItems;
- (void)loadView;
- (id)initWithMovie:(id)arg1;

@end
