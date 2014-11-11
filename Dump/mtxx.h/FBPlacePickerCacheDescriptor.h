//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBCacheDescriptor.h"

#import "FBGraphObjectPagingLoaderDelegate.h"

@class FBGraphObjectPagingLoader, NSSet, NSString;

@interface FBPlacePickerCacheDescriptor : FBCacheDescriptor <FBGraphObjectPagingLoaderDelegate>
{
    BOOL _hasCompletedFetch;
    int _radiusInMeters;
    int _resultsLimit;
    NSString *_searchText;
    NSSet *_fieldsForRequest;
    FBGraphObjectPagingLoader *_loader;
    CDStruct_2c43369c _locationCoordinate;
}

@property(nonatomic) BOOL hasCompletedFetch; // @synthesize hasCompletedFetch=_hasCompletedFetch;
@property(retain, nonatomic) FBGraphObjectPagingLoader *loader; // @synthesize loader=_loader;
@property(copy, nonatomic) NSSet *fieldsForRequest; // @synthesize fieldsForRequest=_fieldsForRequest;
@property(copy, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(nonatomic) int resultsLimit; // @synthesize resultsLimit=_resultsLimit;
@property(nonatomic) int radiusInMeters; // @synthesize radiusInMeters=_radiusInMeters;
@property(nonatomic) CDStruct_2c43369c locationCoordinate; // @synthesize locationCoordinate=_locationCoordinate;
- (void)pagingLoaderDidFinishLoading:(id)arg1;
- (void)prefetchAndCacheForSession:(id)arg1;
- (void)dealloc;
- (id)initWithLocationCoordinate:(CDStruct_2c43369c)arg1 radiusInMeters:(int)arg2 searchText:(id)arg3 resultsLimit:(int)arg4 fieldsForRequest:(id)arg5;

@end

