//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBService.h"

@class NSArray, NSString, TBItemList, TBItemSearchModel, TBItemSearchOption, TBItemSearchSmartNavigationModel;

@interface TBItemSearchService : NSObject <TBService>
{
    TBItemSearchModel *_itemSearchModel;
    TBItemSearchSmartNavigationModel *_smartNavigationModel;
    NSString *_keyword;
    TBItemSearchOption *_searchOption;
}

@property(retain, nonatomic) TBItemSearchOption *searchOption; // @synthesize searchOption=_searchOption;
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
- (void).cxx_destruct;
- (BOOL)hasMoreForTarget:(id)arg1;
- (id)delegatesForTarget:(id)arg1;
- (void)loadMoreForTarget:(id)arg1;
- (id)loadingContextForModel:(id)arg1;
- (id)modelForTarget:(id)arg1;
@property(readonly, nonatomic) NSString *abtest;
@property(readonly, nonatomic) NSString *RN;
@property(readonly, nonatomic) NSArray *locationList;
@property(readonly, nonatomic) NSArray *smartNavigationList;
@property(readonly, nonatomic) TBItemList *itemList;
@property(readonly, nonatomic) TBItemSearchSmartNavigationModel *smartNavigationModel;
@property(readonly, nonatomic) TBItemSearchModel *itemSearchModel;
- (void)getSmartCategoryList;
- (void)searchWithKeyword:(id)arg1 option:(id)arg2;
- (void)searchWithKeyword:(id)arg1;
- (id)initWithKeyword:(id)arg1;
- (void)dealloc;

@end

