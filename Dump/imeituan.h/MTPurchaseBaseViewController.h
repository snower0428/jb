//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTBaseViewController.h"

@class MTGroupPurchaseService, MTPurchaseController;

@interface MTPurchaseBaseViewController : MTBaseViewController
{
    MTPurchaseController *_purchaseController;
}

@property(readonly, nonatomic) MTPurchaseController *purchaseController; // @synthesize purchaseController=_purchaseController;
- (void).cxx_destruct;
@property(readonly, nonatomic) MTGroupPurchaseService *purchaseService;
- (id)initWithPurchaseController:(id)arg1;

@end
