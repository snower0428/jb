//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBSNSBasicService.h"

@interface TBSNSRecommendAccountService : TBSNSBasicService
{
}

- (void)useDefaultItemClass;
- (void)loadAccountPersonalityListWithPagination:(id)arg1;
- (id)getSearchSuggestionKeyWords;
- (id)getSearchSuggestionListWithKeyword:(id)arg1 Pagination:(id)arg2 Order:(id)arg3;
- (void)loadNewUserListWithCardId:(id)arg1 Pagination:(id)arg2;
- (id)loadAccountGuideListWithPagination:(id)arg1 Order:(id)arg2;
- (id)loadLogoutRecommendedListWithPagination:(id)arg1 Order:(id)arg2;
- (id)loadAllAccountListWithPagination:(id)arg1 Order:(id)arg2;
- (id)loadAccountListWithPagination:(id)arg1 Order:(id)arg2;
- (void)refreshPagedList;
- (id)loadAccountListWithPagination:(id)arg1 Sid:(long)arg2 Order:(id)arg3;
- (void)loadAccountListWithPagination:(id)arg1 Params:(id)arg2;
- (void)getSquareAboutMeHome;
- (void)getSquareCataAccountList:(id)arg1 pagination:(id)arg2;

@end

