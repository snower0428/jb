//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBSDKRequestModel.h"

@class NSMutableArray, NSString, TBQGHomeVCItemList;

__attribute__((visibility("hidden")))
@interface TBQGHomeVCRequestModel : TBSDKRequestModel
{
    NSString *oldBatchId;
    int type;
    NSMutableArray *timeBatchIdArry;
    NSMutableArray *categoryBatchIdArry;
    TBQGHomeVCItemList *itemList;
}

@property(retain, nonatomic) TBQGHomeVCItemList *itemList; // @synthesize itemList;
- (void).cxx_destruct;
- (void)requestDidLoadFailed:(id)arg1;
- (void)requestDidFinishLoad:(id)arg1;
- (void)loadCategoryBatchItem:(id)arg1 serviceContext:(id)arg2 offset:(int)arg3 limit:(int)arg4;
- (void)loadBatchItem:(id)arg1 serviceContext:(id)arg2;
- (id)init;

@end
