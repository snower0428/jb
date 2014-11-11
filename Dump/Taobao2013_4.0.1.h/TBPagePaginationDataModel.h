//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTURLRequestModel.h"

@class NSMutableArray, NSMutableDictionary, TBPageTable;

@interface TBPagePaginationDataModel : TTURLRequestModel
{
    TBPageTable *_pageTable;
    double _dataExpirationAge;
    NSMutableDictionary *_paginationDataPropertiesContainer;
    NSMutableArray *_itemObjectList;
}

@property(retain, nonatomic) NSMutableArray *itemObjectList; // @synthesize itemObjectList=_itemObjectList;
@property(readonly, nonatomic) double dataExpirationAge; // @synthesize dataExpirationAge=_dataExpirationAge;
@property(readonly, nonatomic) TBPageTable *pageTable; // @synthesize pageTable=_pageTable;
- (void)requestDidFinishLoad:(id)arg1;
- (BOOL)isOutdated;
- (void)load:(int)arg1 more:(BOOL)arg2;
- (void)handleRequestDidFinishLoadInBackground:(id)arg1;
- (void)callSuperRequestDidFinishLoad:(id)arg1;
- (void)callRequestDidFailLoadWithObjects:(id)arg1;
- (void)markedStabledStatus:(BOOL)arg1;
- (id)getRequestURLWithPaginationDataURL:(id)arg1 nextPage:(int)arg2 pageSize:(int)arg3;
- (id)initWithPageTable:(id)arg1 dataExpirationAge:(double)arg2;
- (void)dealloc;

@end
