//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NdMIUtility : NSObject
{
}

+ (void *)openMobileInstallation;
+ (void)closeMobileInstallation:(void *)arg1;
+ (id)allInstalledAppInfo;
+ (BOOL)install:(id)arg1 error:(id *)arg2;
+ (BOOL)uninstall:(id)arg1 error:(id *)arg2;

@end
