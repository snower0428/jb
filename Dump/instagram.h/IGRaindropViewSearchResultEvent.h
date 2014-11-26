//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBaseStruct.h"

#import "NSCoding.h"
#import "TBase.h"

@class IGRaindropPlace, NSString;

@interface IGRaindropViewSearchResultEvent : TBaseStruct <TBase, NSCoding>
{
    NSString *__thrift_searchQueryText;
    int __thrift_searchType;
    long long __thrift_selectedUserId;
    NSString *__thrift_selectedHashtag;
    long long __thrift_numOfViewedResults;
    BOOL __thrift_localResult;
    BOOL __thrift_cachedSearchedResult;
    IGRaindropPlace *__thrift_selectedPlace;
    BOOL __thrift_searchQueryText_set;
    BOOL __thrift_searchType_set;
    BOOL __thrift_selectedUserId_set;
    BOOL __thrift_selectedHashtag_set;
    BOOL __thrift_numOfViewedResults_set;
    BOOL __thrift_localResult_set;
    BOOL __thrift_cachedSearchedResult_set;
    BOOL __thrift_selectedPlace_set;
}

- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (BOOL)makeImmutable;
- (id)toDict;
@property(readonly, copy) NSString *description;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetSelectedPlace;
- (BOOL)selectedPlaceIsSet;
@property(retain, nonatomic) IGRaindropPlace *selectedPlace;
- (void)unsetCachedSearchedResult;
- (BOOL)cachedSearchedResultIsSet;
@property(nonatomic) BOOL cachedSearchedResult;
- (void)unsetLocalResult;
- (BOOL)localResultIsSet;
@property(nonatomic) BOOL localResult;
- (void)unsetNumOfViewedResults;
- (BOOL)numOfViewedResultsIsSet;
@property(nonatomic) long long numOfViewedResults;
- (void)unsetSelectedHashtag;
- (BOOL)selectedHashtagIsSet;
@property(retain, nonatomic) NSString *selectedHashtag;
- (void)unsetSelectedUserId;
- (BOOL)selectedUserIdIsSet;
@property(nonatomic) long long selectedUserId;
- (void)unsetSearchType;
- (BOOL)searchTypeIsSet;
@property(nonatomic) int searchType;
- (void)unsetSearchQueryText;
- (BOOL)searchQueryTextIsSet;
@property(retain, nonatomic) NSString *searchQueryText;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSearchQueryText:(id)arg1 searchType:(int)arg2 selectedUserId:(long long)arg3 selectedHashtag:(id)arg4 numOfViewedResults:(long long)arg5 localResult:(BOOL)arg6 cachedSearchedResult:(BOOL)arg7 selectedPlace:(id)arg8;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

