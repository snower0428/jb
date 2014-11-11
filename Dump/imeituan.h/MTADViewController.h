//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTBaseViewController.h"

#import "MTADScrollViewDataSource.h"
#import "MTADScrollViewDelegate.h"

@class MTADConfigService, MTADInfoService, MTADScrollView, MTCity, NSArray, NSTimer;

@interface MTADViewController : MTBaseViewController <MTADScrollViewDelegate, MTADScrollViewDataSource>
{
    NSArray *_ADInfoArray;
    MTADScrollView *_scrollView;
    NSTimer *_timer;
    MTADInfoService *_infoService;
    MTADConfigService *_configService;
    MTCity *_city;
    int _categoryID;
}

@property(nonatomic) int categoryID; // @synthesize categoryID=_categoryID;
@property(retain, nonatomic) MTCity *city; // @synthesize city=_city;
@property(retain, nonatomic) MTADConfigService *configService; // @synthesize configService=_configService;
@property(retain, nonatomic) MTADInfoService *infoService; // @synthesize infoService=_infoService;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) MTADScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(copy, nonatomic) NSArray *ADInfoArray; // @synthesize ADInfoArray=_ADInfoArray;
- (void).cxx_destruct;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)pageAtIndex:(int)arg1 forScrollView:(id)arg2;
- (int)pageCountForScrollView:(id)arg1;
- (void)didClickCloseButton;
- (void)refreshAdsForController:(id)arg1;
- (void)scrollNext;
- (void)loadADInfo:(CDUnknownBlockType)arg1;
- (void)loadADView:(int)arg1 finished:(CDUnknownBlockType)arg2;
- (void)updateDataSource;
- (void)dealloc;
- (id)init;

@end
