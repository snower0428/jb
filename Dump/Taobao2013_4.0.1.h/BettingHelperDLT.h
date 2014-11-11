//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BettingHelperBase.h"

@interface BettingHelperDLT : BettingHelperBase
{
    BOOL _isDLTPursueBet;
}

+ (id)createStakeFromStr:(id)arg1;
+ (BOOL)isSurpportStake:(id)arg1;
+ (id)createRandonStake;
@property(nonatomic) BOOL isDLTPursueBet; // @synthesize isDLTPursueBet=_isDLTPursueBet;
- (id)promptText;
- (void)resetLabelContent:(id)arg1;
- (void)resetTopLabelContent:(id)arg1;
- (id)getAttributedLabelComponentFromArray:(id)arg1 withColor:(id)arg2;
- (void)createBettingItemsArray;
- (id)createRandonStakeFromInstance;
- (BOOL)onBetconfirm;
- (BOOL)computeStackAndMoney;
- (id)initWithPlayMethod:(int)arg1;

@end
