//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBModel.h"

@class NSString;

@interface TBUserCredit : TBModel
{
    int level;
    int score;
    int total_num;
    int good_num;
    NSString *goodRatePercentage;
}

+ (int)gradeOfScore:(int)arg1;
+ (id)gradeImage:(int)arg1 isBuyer:(BOOL)arg2;
@property(copy, nonatomic) NSString *goodRatePercentage; // @synthesize goodRatePercentage;
@property int good_num; // @synthesize good_num;
@property int total_num; // @synthesize total_num;
@property int score; // @synthesize score;
@property int level; // @synthesize level;
- (void)dealloc;
- (id)gradeImage:(BOOL)arg1;

@end
