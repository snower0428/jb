//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NdPagination;

@interface NdBasePageList : NSObject
{
    NdPagination *pagination;
    int totalCount;
    NSArray *records;
}

@property(retain, nonatomic) NSArray *records; // @synthesize records;
@property(nonatomic) int totalCount; // @synthesize totalCount;
@property(retain, nonatomic) NdPagination *pagination; // @synthesize pagination;
- (id)description;
- (void)dealloc;
- (id)init;

@end
