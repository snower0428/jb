//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBSectionDataSource.h"

@class NSMutableArray, NSMutableDictionary;

@interface TBBuildOrderDataSource : TBSectionDataSource
{
    NSMutableArray *_orderInfoShowingArray;
    NSMutableArray *_itemInfoShowingArray;
    NSMutableArray *_tradeInfoShowingArray;
    NSMutableDictionary *_userAction;
}

@property(retain, nonatomic) NSMutableDictionary *userAction; // @synthesize userAction=_userAction;
@property(retain, nonatomic) NSMutableArray *tradeInfoShowingArray; // @synthesize tradeInfoShowingArray=_tradeInfoShowingArray;
@property(retain, nonatomic) NSMutableArray *itemInfoShowingArray; // @synthesize itemInfoShowingArray=_itemInfoShowingArray;
@property(retain, nonatomic) NSMutableArray *orderInfoShowingArray; // @synthesize orderInfoShowingArray=_orderInfoShowingArray;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
- (void)tableView:(id)arg1 cell:(id)arg2 willAppearAtIndexPath:(id)arg3;
- (void)tableViewDidLoadModel:(id)arg1;
- (void)createDataForNewInfo:(id)arg1;
- (void)createDataForOldInfo:(id)arg1;
- (id)getPayInfoTableItemsFromArray:(id)arg1;
- (id)createTradeTableItemFromNodeArray:(id)arg1 backgroudColor:(id)arg2 seprateColor:(id)arg3;
- (id)createTradeTableItemFromNodeArray:(id)arg1 withStyle:(int)arg2;
- (id)createTradeTableItemFromNodeArray:(id)arg1;
- (Class)tableView:(id)arg1 cellClassForObject:(id)arg2;
- (void)dealloc;

@end
