//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface OrderDetailReq : NSObject
{
    NSString *_orderId;
    int _orderType;
    NSString *_payId;
    NSString *_issueId;
    int _lotteryType;
}

@property(nonatomic) int lotteryType; // @synthesize lotteryType=_lotteryType;
@property(retain, nonatomic) NSString *issueId; // @synthesize issueId=_issueId;
@property(retain, nonatomic) NSString *payId; // @synthesize payId=_payId;
@property(nonatomic) int orderType; // @synthesize orderType=_orderType;
@property(retain, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
- (void).cxx_destruct;

@end

