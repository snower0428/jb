//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AdMoGoConfig.h"

@class AdMoGoConfigBelowFile, AdMoGoConfigNormalFile, AdMoGoConfigNormalMemory, AdMoGoConfigNormalServer;

@interface AdMoGoConfigNormal : AdMoGoConfig
{
    AdMoGoConfigNormalMemory *_memory;
    AdMoGoConfigNormalFile *_file;
    AdMoGoConfigNormalServer *_server;
    AdMoGoConfigBelowFile *_belowfile;
    BOOL isStop;
}

- (void)dealloc;
- (void)stopGettingConfigData;
- (void)sendMessage:(id)arg1;
- (void)sendNotifi:(id)arg1;
- (void)reloadConfig;
- (void)reloadConfigMainThread;
- (void)getAdMoGoConfigData:(id)arg1;

@end
