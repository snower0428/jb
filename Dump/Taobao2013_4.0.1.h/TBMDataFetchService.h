//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TBMDataFetchService : NSObject
{
}

+ (id)formatCurrentTimeWithType:(int)arg1;
+ (id)formatDate:(id)arg1 withType:(int)arg2;
+ (id)formatDateByCurrentTime:(id)arg1;
+ (BOOL)TBMovieOpenLoginURL:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (id)alipayUrl4Dev:(id)arg1;
+ (id)cloneButton:(id)arg1;
+ (id)getDicFromMainBundlePlistByname:(id)arg1;
+ (double)dateStrToSecond:(id)arg1;
+ (id)showFullScreenPosterInfo;
+ (id)parseArgFromUrlquery:(id)arg1;
+ (void)setAppCallFromUrl:(id)arg1;
+ (id)getAppCallFromUrl;
+ (BOOL)isSameDay:(id)arg1 andOther:(id)arg2;
+ (id)formatDateTimeStrFromTimeStamp:(id)arg1 andType:(int)arg2;
+ (id)getDeviceID;
+ (id)urlEncode:(id)arg1;
+ (id)getUserOrdersByType:(id)arg1 typeOfOrders:(id)arg2;
+ (BOOL)saveUserOrdersToPlistByType:(id)arg1 userNick:(id)arg2 typeOfOrders:(id)arg3;
+ (id)getUserTypesOfTickets:(id)arg1;
+ (BOOL)saveUserTypesOfTicketsToPlist:(id)arg1 userNick:(id)arg2;
+ (id)getUserRecordsToPlist:(id)arg1;
+ (BOOL)saveUserRecordsToPlist:(id)arg1 userNick:(id)arg2;
+ (id)getUserInfoFromPlist:(id)arg1;
+ (BOOL)saveUserInfoToPlist:(id)arg1 userNick:(id)arg2;
+ (BOOL)makeDirectory:(id)arg1;
+ (BOOL)setCurrentPosition:(struct CGPoint)arg1;
+ (struct CGPoint)getCurrentPosition;
+ (BOOL)setDeviceCity:(id)arg1;
+ (id)getDeviceCity;
+ (BOOL)setCurrentCity:(id)arg1;
+ (id)getCurrentCity;
+ (BOOL)setCurrentUsernam:(id)arg1;
+ (id)getAutoLoginToken;
+ (BOOL)setAutoLoginToken:(id)arg1;
+ (id)getCurrentUsername;
+ (BOOL)setLastLoginUsernam:(id)arg1;
+ (id)getLastLoginUsername;
+ (id)piccacheGetByName:(id)arg1;
+ (BOOL)picCacheSetByName:(id)arg1 pictostore:(id)arg2;
+ (id)computeMD5:(id)arg1;
+ (BOOL)saveDicToPlist:(id)arg1 forNameNoSubfix:(id)arg2;
+ (id)getDicFromPlistByname:(id)arg1;
+ (void)printJsonObject:(id)arg1 intoOutput:(id)arg2;
+ (id)getStringByURLobj:(id)arg1;
+ (id)getStringByURL:(id)arg1;
+ (id)hotCityList;

@end

