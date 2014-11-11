//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTFiltersViewController.h"

@class MTDealFilterService, NSDictionary;

@interface MTDealFiltersViewController : MTFiltersViewController
{
    MTDealFilterService *_dealFilterService;
    int _oldCategoryID;
    int _oldCriteria;
    int _oldCriteriaID;
    int _criteria;
    int _criteriaID;
    int _categoryID;
    NSDictionary *_portalURLParamsDictionary;
}

@property(copy, nonatomic) NSDictionary *portalURLParamsDictionary; // @synthesize portalURLParamsDictionary=_portalURLParamsDictionary;
@property(nonatomic) int categoryID; // @synthesize categoryID=_categoryID;
@property(nonatomic) int criteriaID; // @synthesize criteriaID=_criteriaID;
@property(nonatomic) int criteria; // @synthesize criteria=_criteria;
- (void).cxx_destruct;
- (void)actualShowFilterView;
- (void)showFilterView;
- (void)resetFilter;
- (void)clearFilterInfo;
- (void)viewDidLoad;
- (id)init;

@end
