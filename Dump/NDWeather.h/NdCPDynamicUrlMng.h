//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NdCPUrlOperationDelegate.h"

@class NSMutableDictionary, NSString, NdCPUrlOperation;

@interface NdCPDynamicUrlMng : NSObject <NdCPUrlOperationDelegate>
{
    NSMutableDictionary *dicActionNumber2Url;
    NdCPUrlOperation *operationForCheck;
    NdCPUrlOperation *operationForData;
    NSString *theNewUrlVersion;
    BOOL dataIsReady;
    BOOL canStartToUse;
}

+ (id)processStringUrl:(id)arg1 withActionNumber:(int)arg2;
+ (id)sharedInstance;
@property(retain, nonatomic) NSString *theNewUrlVersion; // @synthesize theNewUrlVersion;
@property(retain, nonatomic) NdCPUrlOperation *operationForData; // @synthesize operationForData;
@property(retain, nonatomic) NdCPUrlOperation *operationForCheck; // @synthesize operationForCheck;
@property(retain, nonatomic) NSMutableDictionary *dicActionNumber2Url; // @synthesize dicActionNumber2Url;
- (void)checkNewVersionInBackground;
- (void)checkNewVersionScheduleDidFinish;
- (void)checkNewVersionSchedule;
- (BOOL)isOnMainThread;
- (id)stringUrlForActionNumber:(int)arg1;
- (void)urlOperation:(id)arg1 didLoadData:(id)arg2 fromStringUrl:(id)arg3 error:(id)arg4;
- (void)didDownloadUrlData:(id)arg1 error:(id)arg2;
- (void)doDownloadUrlDataFromService:(id)arg1 withNewVersion:(id)arg2;
- (void)didCheckNewVersion:(id)arg1 error:(id)arg2;
- (void)doCheckNewVersion;
- (id)urlForNewVersionData:(id)arg1;
- (id)urlForCheckVersion;
- (BOOL)needDownloadUrlDataForNewVersion:(id)arg1;
- (void)updateCheckDate;
- (BOOL)needCheckVersion;
- (void)saveCache;
- (void)loadCache;
- (id)pathForCacheFile;
- (void)dealloc;

@end
