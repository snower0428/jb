//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBSDKRequestModel.h"

@class TBItemList;

__attribute__((visibility("hidden")))
@interface TBCategoryModel : TBSDKRequestModel
{
    int _pageIndex;
    TBItemList *_categoryItemList;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TBItemList *categoryItemList; // @synthesize categoryItemList=_categoryItemList;
- (void)requestDidLoadFailed:(id)arg1;
- (void)requestDidFinishLoad:(id)arg1;
- (void)resetForLoadType:(int)arg1;
- (void)reset;
- (void)loadCategoryForCatId:(id)arg1;

@end
