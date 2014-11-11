//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UPPayPluginDelegate.h"
#import "UmpayDelegate.h"

@class MTPurchasePaymentMethod, UIViewController;

@interface MTPaymentController : NSObject <UPPayPluginDelegate, UmpayDelegate>
{
    UIViewController *_currentViewController;
    MTPurchasePaymentMethod *_method;
    id _URLInfo;
    int _orderID;
    CDUnknownBlockType _completionCallback;
}

@property(copy, nonatomic) CDUnknownBlockType completionCallback; // @synthesize completionCallback=_completionCallback;
@property(readonly, nonatomic) int orderID; // @synthesize orderID=_orderID;
@property(readonly, nonatomic) id URLInfo; // @synthesize URLInfo=_URLInfo;
@property(readonly, nonatomic) MTPurchasePaymentMethod *method; // @synthesize method=_method;
- (void).cxx_destruct;
- (void)paymentFinishedWithResult:(int)arg1;
- (void)onPayResult:(id)arg1 resultCode:(id)arg2 resultMessage:(id)arg3;
- (void)UPPayPluginResult:(id)arg1;
- (void)didTapSetupAlixClient;
- (void)weixinPayByInfo:(id)arg1;
- (void)umpay:(id)arg1;
- (void)unionPay:(id)arg1;
- (void)alixPayWithURL:(id)arg1 orderId:(int)arg2;
- (void)payFromViewController:(id)arg1;
- (id)initWithPaymentMethod:(id)arg1 URLInfo:(id)arg2 andOrderID:(int)arg3;

@end

