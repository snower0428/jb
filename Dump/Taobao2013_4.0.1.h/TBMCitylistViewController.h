//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBMBaseViewController.h"

#import "TBMLocationDelegate.h"
#import "TBSDKServerDelegate.h"

@class CLLocationManager, NSArray, NSMutableDictionary, TBMCity, TBMLocation, TBSDKMTOPServer, UITableView;

@interface TBMCitylistViewController : TBMBaseViewController <TBSDKServerDelegate, TBMLocationDelegate>
{
    BOOL isListInCache;
    NSArray *hotCityList;
    NSMutableDictionary *allCityList;
    UITableView *citlistTableview;
    NSArray *sortedKeys;
    TBMLocation *locobj;
    TBMCity *nowReversCity;
    TBSDKMTOPServer *currentMtopRequest;
    CLLocationManager *_locationManager;
}

@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(retain, nonatomic) TBSDKMTOPServer *currentMtopRequest; // @synthesize currentMtopRequest;
@property(nonatomic) BOOL isListInCache; // @synthesize isListInCache;
@property(retain, nonatomic) TBMCity *nowReversCity; // @synthesize nowReversCity;
@property(retain, nonatomic) TBMLocation *locobj; // @synthesize locobj;
@property(retain, nonatomic) NSArray *sortedKeys; // @synthesize sortedKeys;
@property(retain, nonatomic) UITableView *citlistTableview; // @synthesize citlistTableview;
@property(retain, nonatomic) NSMutableDictionary *allCityList; // @synthesize allCityList;
@property(retain, nonatomic) NSArray *hotCityList; // @synthesize hotCityList;
- (void)reverseCityFailed:(id)arg1;
- (void)reverseCitySucc:(id)arg1;
- (void)getLoctionFailed:(id)arg1 isLocON:(BOOL)arg2;
- (void)getLoctionSucc:(id)arg1 oldLocation:(id)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)onRelocButtonTouch:(id)arg1;
- (void)doBack:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)toLoadcitylist;
- (BOOL)checkCacheCityList;
- (BOOL)setCityList2Cache;
- (void)toLoadcitylistFail:(id)arg1;
- (void)toLoadcitylistSucc:(id)arg1;
- (void)viewDidUnload;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)setupTarItem;
- (BOOL)shouldAutorotate;
- (void)loadView;

@end

