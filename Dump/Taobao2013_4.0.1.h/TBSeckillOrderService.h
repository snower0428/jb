//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBService.h"

@class TBTradeCreateOrderExRequestModel;

@interface TBSeckillOrderService : TBService
{
    TBTradeCreateOrderExRequestModel *_tradeCreateOrderExRequestModel;
}

- (void).cxx_destruct;
- (id)getCreateOrderResponseResult;
@property(readonly, nonatomic) TBTradeCreateOrderExRequestModel *tradeCreateOrderExRequestModel; // @synthesize tradeCreateOrderExRequestModel=_tradeCreateOrderExRequestModel;
- (void)createOrderExWithAnswer:(id)arg1 detailValidKeyName:(id)arg2 detailValidKeyValue:(id)arg3 encryptStr:(id)arg4 quantity:(id)arg5 skuId:(id)arg6 itemId:(id)arg7 context:(id)arg8;
- (void)dealloc;

@end
