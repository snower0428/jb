//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BettingHelperBase.h"

@interface BettingHelperQXC : BettingHelperBase
{
}

+ (id)createStakeFromStr:(id)arg1;
+ (BOOL)isSurpportStake:(id)arg1;
+ (id)createRandonStake;
- (void)resetLabelContent:(id)arg1;
- (void)resetTopLabelContent:(id)arg1;
- (void)setTitleOfBettingItem:(id)arg1 inPlayMethod:(int)arg2 andType:(int)arg3;
- (id)getAttributedLabel;
- (void)createBettingItemsArray;
- (BOOL)computeStackAndMoney;
- (id)createRandonStakeFromInstance;
- (BOOL)onBetconfirm;
- (id)promptText;
- (id)initWithPlayMethod:(int)arg1;

@end
