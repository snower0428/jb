//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface YouMiConfig : NSObject
{
}

+ (void)setFullScreenWindow:(id)arg1;
+ (BOOL)useInAppStore;
+ (void)setUseInAppStore:(BOOL)arg1;
+ (BOOL)shouldGetLocation;
+ (void)setShouldGetLocation:(BOOL)arg1;
+ (BOOL)isTesting;
+ (void)setIsTesting:(BOOL)arg1;
+ (id)userID;
+ (void)setUserID:(id)arg1;
+ (id)channelDesc;
+ (int)channelID;
+ (void)setChannelID:(int)arg1 description:(id)arg2;
+ (id)appSecret;
+ (void)setAppSecret:(id)arg1;
+ (id)appID;
+ (void)setAppID:(id)arg1;
+ (id)onlineValueForKey:(id)arg1;
+ (void)launchWithAppID:(id)arg1 appSecret:(id)arg2;

@end

