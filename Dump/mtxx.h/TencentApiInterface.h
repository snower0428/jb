//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TencentApiInterface : NSObject
{
}

+ (BOOL)isTencentAppSupportTencentApi:(int)arg1;
+ (BOOL)isTencentAppInstall:(int)arg1;
+ (void)registApp:(id)arg1;
+ (void)openThirdApp:(id)arg1;
+ (BOOL)iphoneQZoneSupportApi;
+ (BOOL)installIphoneQZone;
+ (id)getTencentAppInstallUrl:(int)arg1;
+ (BOOL)canOpenURL:(id)arg1 delegate:(id)arg2;
+ (BOOL)handleOpenURL:(id)arg1 delegate:(id)arg2;
+ (int)sendRespMessaageToThirdApp:(id)arg1 appId:(id)arg2;
+ (int)sendRespMessageToTencentApp:(id)arg1;

@end
