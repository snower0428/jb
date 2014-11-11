//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBSNSBasicService.h"

@class NSDictionary;

@interface TBSNSDynamicService : TBSNSBasicService
{
    BOOL _isForceRemoveAllObject;
    BOOL _needUploadIncrementalData;
    BOOL _needCacheDataUsed;
    BOOL _isTimeStampUsed;
    BOOL _isNotFirstLoad;
    unsigned long _newDataCount;
    NSDictionary *_params;
    unsigned long long _serviceTimestamp;
}

@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(nonatomic) BOOL isNotFirstLoad; // @synthesize isNotFirstLoad=_isNotFirstLoad;
@property(nonatomic) BOOL isTimeStampUsed; // @synthesize isTimeStampUsed=_isTimeStampUsed;
@property(nonatomic) unsigned long long serviceTimestamp; // @synthesize serviceTimestamp=_serviceTimestamp;
@property(nonatomic) unsigned long newDataCount; // @synthesize newDataCount=_newDataCount;
@property(nonatomic) BOOL needCacheDataUsed; // @synthesize needCacheDataUsed=_needCacheDataUsed;
@property(nonatomic) BOOL needUploadIncrementalData; // @synthesize needUploadIncrementalData=_needUploadIncrementalData;
@property(nonatomic) BOOL isForceRemoveAllObject; // @synthesize isForceRemoveAllObject=_isForceRemoveAllObject;
- (void).cxx_destruct;
- (void)trimTimeStamp;
- (void)dataUnique;
- (void)modelDidFinishLoad:(id)arg1;
- (void)modelCacheDidFinishLoad:(id)arg1;
- (void)model:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)useFeedItemClass;
- (void)useDefaultItemClass;
- (void)loadRecommendFeedDynamicListCache;
- (void)loadRecommendFeedDynamicListWithPagination:(id)arg1;
- (id)loadFeedDynamicListCacheWithCategrayID:(unsigned int)arg1;
- (void)loadFeedDynamicListCache;
- (BOOL)loadFeedDynamicListWithPagination:(id)arg1;
- (BOOL)loadFeedDynamicListWithPagination:(id)arg1 withCategrayID:(unsigned int)arg2;
- (void)nextPage;
- (void)refreshPagedList;
- (id)loadAccountDynamicListWithPagination:(id)arg1;
- (id)loadAccountDynamicListWithSid:(unsigned long long)arg1 Pagination:(id)arg2;
- (id)init;

@end
