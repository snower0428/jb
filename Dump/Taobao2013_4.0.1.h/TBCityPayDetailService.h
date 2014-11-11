//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBCityService.h"

@class TBCityOrderDetailItem, TBCityPayDetailModel;

@interface TBCityPayDetailService : TBCityService
{
    TBCityPayDetailModel *_payDetailModel;
}

@property(retain, nonatomic) TBCityPayDetailModel *payDetailModel; // @synthesize payDetailModel=_payDetailModel;
- (void).cxx_destruct;
@property(readonly, nonatomic) TBCityOrderDetailItem *orderDetailItem;
- (void)createWithPriceWithContext:(id)arg1 price:(id)arg2 flag:(id)arg3 context:(id)arg4;
- (void)scanAndCreateWithPriceWithContext:(id)arg1 price:(id)arg2 context:(id)arg3;
- (void)getScanInfoWithContext:(id)arg1 context:(id)arg2;
- (void)payOrderWithContext:(id)arg1 tickets:(id)arg2 context:(id)arg3;
- (void)getScanOrderDetailWithContext:(id)arg1 context:(id)arg2;
- (void)dealloc;

@end

