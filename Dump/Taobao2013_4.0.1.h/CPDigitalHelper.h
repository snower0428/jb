//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBBettingHelper.h"

@class NSMutableArray, NSString;

@interface CPDigitalHelper : NSObject <TBBettingHelper>
{
    NSString *_lotteryName;
    NSString *_lotteryLogo;
    int _lotteryTypeId;
    int _maxPursue;
    int _maxMultiNum;
    int _maxFee;
    BOOL _isCanCooperate;
    NSMutableArray *_methods;
}

@property(retain, nonatomic) NSMutableArray *methods; // @synthesize methods=_methods;
@property(nonatomic) BOOL isCanCooperate; // @synthesize isCanCooperate=_isCanCooperate;
@property(nonatomic) int maxFee; // @synthesize maxFee=_maxFee;
@property(nonatomic) int maxPursue; // @synthesize maxPursue=_maxPursue;
@property(nonatomic) int lotteryTypeId; // @synthesize lotteryTypeId=_lotteryTypeId;
@property(retain, nonatomic) NSString *lotteryLogo; // @synthesize lotteryLogo=_lotteryLogo;
@property(retain, nonatomic) NSString *lotteryName; // @synthesize lotteryName=_lotteryName;
- (void).cxx_destruct;
- (id)randomStakes;
- (id)createStakeFromStr:(id)arg1;
@property(readonly, nonatomic) int maxMultiNum;
- (void)resetLabelContent:(id)arg1;
- (BOOL)isHadSelected;
- (id)methodWithId:(int)arg1;
- (void)setWithLotteryInfoDictionary:(id)arg1 andSpecifiedMethods:(id)arg2;
- (id)initWithLotteryInfoDictionary:(id)arg1 andSpecifiedMethods:(id)arg2;

@end
