//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface NdCPAppInfoMng : NSObject
{
    NSString *strPath;
    NSMutableDictionary *dicAppInfoList;
}

+ (id)getAppVersion;
+ (id)getBundleVersion;
+ (id)getCurrentAppIdentifier;
+ (id)getCurrentOsVersion;
+ (id)getIphonePlatform;
+ (id)getCurrentAppInfo;
+ (void)releaseSingleton;
+ (id)singleton;
@property(retain, nonatomic) NSMutableDictionary *dicAppInfoList; // @synthesize dicAppInfoList;
@property(retain, nonatomic) NSString *strPath; // @synthesize strPath;
- (void)saveAppInfoToFile;
- (void)loadAppInfoFromFile;
- (void)checkInCurrentAppInfo;
- (id)getNdCPAppInfoListFile;
- (void)dealloc;
- (id)init;

@end
