//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TMResponse.h"

@class TMSalesAreaRestrictionModel, TMServiceDataModel, TMStockDataModel;

@interface TMItemInfoResponse : TMResponse
{
    TMServiceDataModel *_service;
    TMStockDataModel *_stock;
    TMSalesAreaRestrictionModel *_salesAreaRestriction;
    int _buyMark;
}

@property(nonatomic) int buyMark; // @synthesize buyMark=_buyMark;
@property(retain, nonatomic) TMSalesAreaRestrictionModel *salesAreaRestriction; // @synthesize salesAreaRestriction=_salesAreaRestriction;
@property(retain, nonatomic) TMStockDataModel *stock; // @synthesize stock=_stock;
@property(retain, nonatomic) TMServiceDataModel *service; // @synthesize service=_service;
- (void).cxx_destruct;

@end
