//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBModel.h"

@class NSArray, NSString;

@interface TBOrderInfoItem : TBModel
{
    NSString *_bizOrderId;
    NSString *_confirmTime;
    NSString *_createTime;
    NSArray *_icon;
    NSArray *_orderCell;
    NSArray *_orderMessage;
    NSString *_orderStatus;
    NSString *_orderStatusCode;
    NSArray *_payDesc;
    NSString *_payOrderId;
    NSString *_payTime;
    NSString *_postFee;
    NSArray *_promotion;
    NSString *_sendTime;
    NSString *_totalPrice;
    NSString *_version;
}

@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *totalPrice; // @synthesize totalPrice=_totalPrice;
@property(retain, nonatomic) NSString *sendTime; // @synthesize sendTime=_sendTime;
@property(retain, nonatomic) NSArray *promotion; // @synthesize promotion=_promotion;
@property(retain, nonatomic) NSString *postFee; // @synthesize postFee=_postFee;
@property(retain, nonatomic) NSString *payTime; // @synthesize payTime=_payTime;
@property(retain, nonatomic) NSString *payOrderId; // @synthesize payOrderId=_payOrderId;
@property(retain, nonatomic) NSArray *payDesc; // @synthesize payDesc=_payDesc;
@property(retain, nonatomic) NSString *orderStatusCode; // @synthesize orderStatusCode=_orderStatusCode;
@property(retain, nonatomic) NSString *orderStatus; // @synthesize orderStatus=_orderStatus;
@property(retain, nonatomic) NSArray *orderMessage; // @synthesize orderMessage=_orderMessage;
@property(retain, nonatomic) NSArray *orderCell; // @synthesize orderCell=_orderCell;
@property(retain, nonatomic) NSArray *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSString *confirmTime; // @synthesize confirmTime=_confirmTime;
@property(retain, nonatomic) NSString *bizOrderId; // @synthesize bizOrderId=_bizOrderId;
- (void).cxx_destruct;
- (id)JSONRepresentation;
- (id)toDictionary;
- (void)setFromDictionary:(id)arg1;

@end
