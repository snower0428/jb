//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TMCartResponse.h"

@class NSArray;

@interface TMCartDeleteResponse : TMCartResponse
{
    NSArray *_deletedItems;
    NSArray *_relatedGroups;
}

@property(retain, nonatomic) NSArray *relatedGroups; // @synthesize relatedGroups=_relatedGroups;
@property(retain, nonatomic) NSArray *deletedItems; // @synthesize deletedItems=_deletedItems;
- (void).cxx_destruct;

@end

