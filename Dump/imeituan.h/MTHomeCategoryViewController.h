//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTTableViewController.h"

@class MTHomeCategoryResponse, MTHomeCategoryService;

@interface MTHomeCategoryViewController : MTTableViewController
{
    MTHomeCategoryService *_service;
    MTHomeCategoryResponse *_response;
}

@property(readonly, nonatomic) MTHomeCategoryService *service; // @synthesize service=_service;
@property(retain, nonatomic) MTHomeCategoryResponse *response; // @synthesize response=_response;
- (void).cxx_destruct;
- (void)didClickHomeCategoryItem:(id)arg1;
- (void)updateDataSource;
- (void)updateDataSourceUseCache:(BOOL)arg1;
- (void)loadItems;
- (void)addMoreHomeCategory;
- (void)viewDidLoad;
- (void)didReceiveHotDealMoreItemDidSelectNotification;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;

@end
