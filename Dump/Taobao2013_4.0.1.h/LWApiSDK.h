//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface LWApiSDK : NSObject
{
}

+ (id)parse:(id)arg1;
+ (BOOL)sendResponse:(id)arg1;
+ (BOOL)sendRequest:(id)arg1;
+ (BOOL)handleOpenURL:(id)arg1 delegate:(id)arg2;
+ (BOOL)openLWApp;
+ (void)enableDebugMode:(BOOL)arg1;
+ (BOOL)isLWAppInstalled;
+ (id)getApiVersion;
+ (void)registerApp:(id)arg1 secret:(id)arg2 description:(id)arg3;

@end

