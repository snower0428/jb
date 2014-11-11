//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface AppRegisterInfo : NSObject <NSCoding>
{
    unsigned int appInfoVer;
    BOOL needUpdateInfo;
    BOOL needUpdateIcon;
    NSString *appName;
    NSString *appName4ZhTw;
    NSString *appName4EnUs;
    NSString *appID;
    NSString *appIdentifier;
    BOOL needUpdateWatermark;
    BOOL appAddedByUser;
    NSString *appDescription;
    NSString *appDescription4ZhTw;
    NSString *appDescription4EnUs;
    NSString *appInstallUrl;
    NSString *appIconUrl;
    NSString *appWatermarkUrl;
    unsigned long lastUpdateInfoTime;
    unsigned long lastUpdateWatermarkTime;
    unsigned long lastUpdateIconTime;
    NSString *appTypeList;
    NSString *appDevInfo;
    unsigned long appInfoFlag;
    unsigned long appUpdateVersion;
    BOOL appCanShowNew;
    BOOL isNewApp;
}

@property(nonatomic) BOOL isNewApp; // @synthesize isNewApp;
@property(nonatomic) BOOL appCanShowNew; // @synthesize appCanShowNew;
@property(nonatomic) unsigned long appUpdateVersion; // @synthesize appUpdateVersion;
@property(nonatomic) unsigned long appInfoFlag; // @synthesize appInfoFlag;
@property(retain, nonatomic) NSString *appDevInfo; // @synthesize appDevInfo;
@property(retain, nonatomic) NSString *appTypeList; // @synthesize appTypeList;
@property(nonatomic) unsigned long lastUpdateIconTime; // @synthesize lastUpdateIconTime;
@property(nonatomic) unsigned long lastUpdateWatermarkTime; // @synthesize lastUpdateWatermarkTime;
@property(nonatomic) unsigned long lastUpdateInfoTime; // @synthesize lastUpdateInfoTime;
@property(retain, nonatomic) NSString *appWatermarkUrl; // @synthesize appWatermarkUrl;
@property(retain, nonatomic) NSString *appIconUrl; // @synthesize appIconUrl;
@property(retain, nonatomic) NSString *appInstallUrl; // @synthesize appInstallUrl;
@property(retain, nonatomic) NSString *appDescription4EnUs; // @synthesize appDescription4EnUs;
@property(retain, nonatomic) NSString *appDescription4ZhTw; // @synthesize appDescription4ZhTw;
@property(retain, nonatomic) NSString *appDescription; // @synthesize appDescription;
@property(nonatomic) BOOL appAddedByUser; // @synthesize appAddedByUser;
@property(nonatomic) BOOL needUpdateWatermark; // @synthesize needUpdateWatermark;
@property(retain, nonatomic) NSString *appIdentifier; // @synthesize appIdentifier;
@property(retain, nonatomic) NSString *appID; // @synthesize appID;
@property(retain, nonatomic) NSString *appName4EnUs; // @synthesize appName4EnUs;
@property(retain, nonatomic) NSString *appName4ZhTw; // @synthesize appName4ZhTw;
@property(retain, nonatomic) NSString *appName; // @synthesize appName;
@property(nonatomic) BOOL needUpdateIcon; // @synthesize needUpdateIcon;
@property(nonatomic) BOOL needUpdateInfo; // @synthesize needUpdateInfo;
@property(nonatomic) unsigned int appInfoVer; // @synthesize appInfoVer;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;

@end

