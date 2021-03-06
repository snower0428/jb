//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SKPaymentTransactionObserver.h"
#import "SKProductsRequestDelegate.h"
#import "UIAlertViewDelegate.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface AppStoreHelper : NSObject <UIAlertViewDelegate, SKPaymentTransactionObserver, SKProductsRequestDelegate>
{
    int buyType;
}

+ (id)sharedInstance;
- (void)dealloc;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)paymentQueue:(id)arg1 restoreCompletedTransactionsFailedWithError:(id)arg2;
- (void)restoreTransaction:(id)arg1;
- (void)paymentQueueRestoreCompletedTransactionsFinished:(id)arg1;
- (void)failedTransaction:(id)arg1;
- (void)completeTransaction:(id)arg1;
- (void)paymentQueue:(id)arg1 updatedTransactions:(id)arg2;
- (void)PurchasedTransaction:(id)arg1;
- (void)requestDidFinish:(id)arg1;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)requestProUpgradeProductData;
- (void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (void)RequestProductData;
- (_Bool)CanMakePay;
- (void)RestoreInapp;
- (void)buy:(int)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

