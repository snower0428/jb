//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface CPMatchFilter : NSObject
{
    int _concedeFlag;
    int _proportionFlag;
    NSMutableArray *_gamePredicateArray;
    NSMutableArray *_sporttypePredicateArray;
    int _backConcedeFlag;
    int _backProportionFlag;
    NSMutableArray *_backupGamePredicateArray;
    NSMutableArray *_backupSporttypePredicateArray;
    int _lotteryType;
}

@property(nonatomic) int lotteryType; // @synthesize lotteryType=_lotteryType;
@property(retain, nonatomic) NSMutableArray *sporttypePredicateArray; // @synthesize sporttypePredicateArray=_sporttypePredicateArray;
@property(retain, nonatomic) NSMutableArray *gamePredicateArray; // @synthesize gamePredicateArray=_gamePredicateArray;
@property(nonatomic) int proportionFlag; // @synthesize proportionFlag=_proportionFlag;
@property(nonatomic) int concedeFlag; // @synthesize concedeFlag=_concedeFlag;
- (void).cxx_destruct;
- (id)getSporttypePredicateFormat;
- (id)getGamePredicateFormat;
- (id)getProportionPredicateFormat;
- (id)getConcedePredicateFormat;
- (void)restoreFromBackup;
- (void)backupFilterOptions;
- (void)restoreToOriginal;
- (id)getPredicate;
- (void)setSporttypePredicateArrayWithDayMatchs:(id)arg1;
- (void)setGamePredicateArrayWithDayMatchs:(id)arg1;
- (id)filterMatchs:(id)arg1;
- (id)init;

@end

