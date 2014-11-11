//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface CPSeriesPass : NSObject <NSCopying>
{
    int _matchCount;
    int _seriesPassIndex;
    int _stakeCount;
    BOOL _isForbiden;
    BOOL _isSelected;
    BOOL _isCommitSelected;
}

@property(nonatomic) BOOL isCommitSelected; // @synthesize isCommitSelected=_isCommitSelected;
@property(nonatomic) BOOL isSelected; // @synthesize isSelected=_isSelected;
@property(nonatomic) BOOL isForbiden; // @synthesize isForbiden=_isForbiden;
@property(nonatomic) int stakeCount; // @synthesize stakeCount=_stakeCount;
@property(readonly, nonatomic) int matchCount; // @synthesize matchCount=_matchCount;
- (BOOL)isMultiSpWithSpCountArray:(id)arg1;
- (int)getExistCountOfOneMatch;
- (BOOL)isValidRewardWithCourages:(int)arg1 andHitedCourages:(int)arg2;
- (int)computeStakeCountFromSpCountArray:(id)arg1 andCounrageSpCountArray:(id)arg2;
- (id)getBetStr;
- (id)getSeriesPassName;
- (int)getSeriesPassCount;
- (void)resetForbidenStatusWithCourage:(int)arg1;
- (int)minHitMatchCount;
- (BOOL)isHitMatchCount:(int)arg1;
- (BOOL)isCheckboxSelect;
- (id)initWithMatch:(int)arg1 andSeriesPassIndex:(int)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

