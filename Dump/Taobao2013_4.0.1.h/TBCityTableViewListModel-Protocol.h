//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableArray, NSString;

@protocol TBCityTableViewListModel <NSObject>
- (NSMutableArray *)parseJsonResponse:(id)arg1;
- (NSString *)keyForPageNumber;
- (int)pz;
- (BOOL)useCache;
- (BOOL)needEcodeSign;
- (NSString *)methodName;
- (NSDictionary *)mtopParamsToLoad;
- (NSDictionary *)dataParamsToLoad;
@end

