//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CPFunctionPresentReq : NSObject
{
    int _lotteryType;
    NSString *_issue;
    int _totalStake;
    float _totalFee;
    NSString *_fees;
    NSString *_numbers;
    NSString *_mobiles;
    NSString *_present_word;
    NSString *_stakes;
    NSString *_multis;
    BOOL _self_buy;
    NSString *_shopId;
}

@property(retain, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
@property(retain, nonatomic) NSString *fees; // @synthesize fees=_fees;
@property(retain, nonatomic) NSString *multis; // @synthesize multis=_multis;
@property(retain, nonatomic) NSString *stakes; // @synthesize stakes=_stakes;
@property(nonatomic) BOOL self_buy; // @synthesize self_buy=_self_buy;
@property(retain, nonatomic) NSString *issue; // @synthesize issue=_issue;
@property(nonatomic) int totalStake; // @synthesize totalStake=_totalStake;
@property(nonatomic) float totalFee; // @synthesize totalFee=_totalFee;
@property(retain, nonatomic) NSString *mobiles; // @synthesize mobiles=_mobiles;
@property(retain, nonatomic) NSString *numbers; // @synthesize numbers=_numbers;
@property(nonatomic) int lotteryType; // @synthesize lotteryType=_lotteryType;
@property(retain, nonatomic) NSString *present_word; // @synthesize present_word=_present_word;
- (void).cxx_destruct;

@end
