//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NdCPServerOperation.h"

@class NSString;

@interface NdCPServerOperationSetPhoneNum : NdCPServerOperation
{
    NSString *phoneNum;
    BOOL canBalancePay;
    BOOL canSMSPay;
    BOOL canCardPay;
    BOOL canAliPay;
}

@property(nonatomic) BOOL canAliPay; // @synthesize canAliPay;
@property(nonatomic) BOOL canCardPay; // @synthesize canCardPay;
@property(nonatomic) BOOL canSMSPay; // @synthesize canSMSPay;
@property(nonatomic) BOOL canBalancePay; // @synthesize canBalancePay;
@property(retain, nonatomic) NSString *phoneNum; // @synthesize phoneNum;
- (void)generateResponse:(id)arg1;
- (int)operation;
- (void)dealloc;
- (id)init;

@end
