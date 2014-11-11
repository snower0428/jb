//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FortuneDBInterface.h"

__attribute__((visibility("hidden")))
@interface FortuneDBImplement : NSObject <FortuneDBInterface>
{
}

+ (id)sharedInstance;
- (BOOL)replaceShengxiaoYunshi:(id)arg1 Data:(id)arg2;
- (BOOL)removeShengxiaoYunshi:(id)arg1;
- (id)getShengxiaoYunshi:(id)arg1;
- (BOOL)pickPeopleFromQuery:(id)arg1 Query:(struct AWCppSQLite3Query *)arg2;
- (BOOL)replaceFortune:(id)arg1 YsType:(int)arg2 Date:(id)arg3 JsonData:(id)arg4;
- (BOOL)removeFortune:(id)arg1 YsType:(int)arg2 Date:(id)arg3;
- (BOOL)removeFortune:(id)arg1 YsType:(int)arg2;
- (BOOL)getFortune:(id)arg1 YsType:(int)arg2 toDate:(id)arg3 toExpjs:(id *)arg4;
- (BOOL)getFortune:(id)arg1 YsType:(int)arg2 Date:(id)arg3 toExpjs:(id *)arg4;
- (id)makePeplSumInfoByGUID:(id)arg1;
- (BOOL)synUpdatePeopleInfo:(id)arg1;
- (BOOL)addPeopleInfo:(id)arg1;
- (id)getFirstUnDelPeople;
- (BOOL)removePopleInfoBysGUID:(id)arg1;
- (id)getPeopleInfoBysGUID:(id)arg1;
- (BOOL)removePersonInfo:(id)arg1;
- (id)getPeopleInfo;
- (BOOL)setAllPeopleSynced;
- (id)getAllPeopleInfoListWithAllAccount;
- (id)getAllPeopleInfoList;
- (id)getHostPeopleList;
- (id)getBeSyncdPeopleInfoList;
- (int)getBeSyncdPeopleCount;
- (BOOL)getHuangDesc:(id)arg1:(id)arg2:(id *)arg3:(id *)arg4;
- (BOOL)getHuangDescName:(id)arg1:(id *)arg2:(id *)arg3;

@end

