//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTBaseService.h"

#import "MTCityBasedService.h"
#import "MTUserBasedService.h"

@class MTCity, MTUserDailyRecommendRecord, SAKUser;

@interface MTDailyRecommendService : MTBaseService <MTUserBasedService, MTCityBasedService>
{
    MTUserDailyRecommendRecord *_recommendRecord;
    BOOL _checking;
}

+ (id)defaultService;
- (void).cxx_destruct;
- (void)loadRecommendDealsForLastDays:(unsigned int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)checkDailyRecommendFinished:(CDUnknownBlockType)arg1;
@property(nonatomic) BOOL detailReaded;
@property(nonatomic) BOOL readed;
@property(retain, nonatomic) SAKUser *user;
- (void)updateRecommendRecord;
- (id)init;

// Remaining properties
@property(retain, nonatomic) MTCity *city;

@end

