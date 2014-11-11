//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBSDKRequestModel.h"

@class MTOPRequest, TBCreateOrderResult, TBOrderConfirmModel;

@interface TBOrderSubmitModel : TBSDKRequestModel
{
    BOOL _helpPay;
    MTOPRequest *_buyRequest;
    TBOrderConfirmModel *_confirmModel;
    TBCreateOrderResult *_createOrderResult;
}

@property(nonatomic) BOOL helpPay; // @synthesize helpPay=_helpPay;
@property(retain, nonatomic) TBCreateOrderResult *createOrderResult; // @synthesize createOrderResult=_createOrderResult;
@property(retain, nonatomic) TBOrderConfirmModel *confirmModel; // @synthesize confirmModel=_confirmModel;
@property(retain, nonatomic) MTOPRequest *buyRequest; // @synthesize buyRequest=_buyRequest;
- (void).cxx_destruct;
- (void)requestDidLoadFailed:(id)arg1;
- (void)requestDidFinishLoad:(id)arg1;
- (void)load;
- (void)confirmBuy;
- (void)cleanDelegateAndCancel;
- (void)dealloc;
- (id)initWithConfirmModel:(id)arg1;

@end
