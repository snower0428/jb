//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTCacheDAO.h"

@interface MTDailyRecommendDAO : MTCacheDAO
{
}

- (void)saveOnceRecommendDeals:(id)arg1 withUserID:(int)arg2 timeStamp:(id)arg3;
- (id)findOnceRecommendDealsByUserID:(int)arg1 timeStamp:(id)arg2 error:(id *)arg3;
- (void)saveUserDailyRecommendRecord:(id)arg1 withUserID:(int)arg2;
- (id)findUserDailyRecommendRecordByUserID:(int)arg1 error:(id *)arg2;
- (id)_fingerPrintWithUserID:(int)arg1 timeStamp:(id)arg2;
- (id)_keyWithUserID:(int)arg1;

@end
