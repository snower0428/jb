//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TBItmeSearchHistoryKeywordManager : NSObject
{
}

+ (id)covertStringToDate:(id)arg1;
+ (id)covertDateToString:(id)arg1;
+ (BOOL)deleteAllSearchHistoryKeyword;
+ (BOOL)deleteSearchHistoryKeyword:(id)arg1 searchHistoryType:(int)arg2;
+ (BOOL)addSearchHistoryKeyword:(id)arg1 searchHistoryType:(int)arg2 savingDate:(id)arg3;
+ (BOOL)addSearchHistoryKeyword:(id)arg1 searchHistoryType:(int)arg2;
+ (id)getSearchHistoryKeywordObjects;
+ (id)getSearchHistoryKeyword;

@end

