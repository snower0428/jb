//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface buyTogetherListInfo : NSObject
{
    int _totalItem;
    int _totalPage;
    int _page;
    NSMutableArray *_arrayAllData;
    int _itemCount;
    int totalItem;
    int totalPage;
    int page;
}

@property(nonatomic) int itemCount; // @synthesize itemCount=_itemCount;
@property(retain, nonatomic) NSMutableArray *arrayAllData; // @synthesize arrayAllData=_arrayAllData;
@property(nonatomic) int page; // @synthesize page;
@property(nonatomic) int totalPage; // @synthesize totalPage;
@property(nonatomic) int totalItem; // @synthesize totalItem;
- (void).cxx_destruct;
- (id)description;
- (id)getAlldata;
- (id)objetAtIndex:(int)arg1;
- (void)AddInfoWithStruct:(id)arg1;
- (void)AddInfoWithDictionary:(id)arg1;
- (void)addListInfo:(id)arg1;
- (void)clearAll;
- (id)init;

@end
