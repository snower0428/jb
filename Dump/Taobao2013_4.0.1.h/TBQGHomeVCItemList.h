//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBModel.h"

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface TBQGHomeVCItemList : TBModel
{
    int _totalCount;
    NSMutableArray *_itemArry;
    NSString *_responseBatchId;
}

@property(retain, nonatomic) NSString *responseBatchId; // @synthesize responseBatchId=_responseBatchId;
@property(retain, nonatomic) NSMutableArray *itemArry; // @synthesize itemArry=_itemArry;
@property(nonatomic) int totalCount; // @synthesize totalCount=_totalCount;
- (void).cxx_destruct;

@end
