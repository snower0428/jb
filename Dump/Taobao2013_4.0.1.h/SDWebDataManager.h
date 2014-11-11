//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SDDataCacheDelegate.h"
#import "SDWebDataDownloaderDelegate.h"

@class NSMutableArray, NSMutableDictionary;

@interface SDWebDataManager : NSObject <SDDataCacheDelegate, SDWebDataDownloaderDelegate>
{
    NSMutableArray *delegates;
    NSMutableArray *downloaders;
    NSMutableDictionary *downloaderForURL;
    NSMutableArray *failedURLs;
}

+ (id)sharedManager;
- (void)dataDownloader:(id)arg1 didFailWithError:(id)arg2;
- (void)dataDownloader:(id)arg1 didFinishWithData:(id)arg2;
- (void)dataCache:(id)arg1 didNotFindDataForKey:(id)arg2 userInfo:(id)arg3;
- (void)dataCache:(id)arg1 didFindData:(id)arg2 forKey:(id)arg3 userInfo:(id)arg4;
- (void)cancelForDelegate:(id)arg1;
- (void)downloadWithURL:(id)arg1 delegate:(id)arg2 refreshCache:(BOOL)arg3 retryFailed:(BOOL)arg4 lowPriority:(BOOL)arg5;
- (void)downloadWithURL:(id)arg1 delegate:(id)arg2 refreshCache:(BOOL)arg3 retryFailed:(BOOL)arg4;
- (void)downloadWithURL:(id)arg1 delegate:(id)arg2 refreshCache:(BOOL)arg3;
- (void)downloadWithURL:(id)arg1 delegate:(id)arg2;
- (id)dataWithURL:(id)arg1;
- (void)dealloc;
- (id)init;

@end

