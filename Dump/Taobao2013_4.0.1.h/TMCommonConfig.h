//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TMCommonConfig : NSObject
{
    int _environmentType;
    NSString *_mtopServiceChannelID;
    NSString *_mtopServiceWapTTID;
    NSString *_mtopServiceAppKey;
    NSString *_mtopServiceAppSecret;
    NSString *_tmallServiceChannelID;
    NSString *_tmallServiceWapTTID;
    NSString *_tmallServiceAppKey;
    NSString *_tmallServiceAppSecret;
    NSString *_tmallServiceHostName;
    NSString *_tmallServiceAppVersion;
    NSString *_tmsServiceHostName;
}

+ (void)setHighResolutionMode:(BOOL)arg1;
+ (BOOL)isHighResolutionMode;
+ (id)tmsServiceHostName;
+ (id)tmallServiceAppVersion;
+ (id)tmallServiceWapTTID;
+ (id)tmallServiceChannelID;
+ (id)tmallServiceAppSecret;
+ (id)tmallServiceAppKey;
+ (id)tmallServiceHostName;
+ (id)mtopServiceAppSecret;
+ (id)mtopServiceAppKey;
+ (id)mtopServiceWapTTID;
+ (id)mtopServiceChannelID;
+ (int)envType;
+ (void)setEnvironmentType:(int)arg1;
+ (id)copyWithZone:(struct _NSZone *)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSString *tmsServiceHostName; // @synthesize tmsServiceHostName=_tmsServiceHostName;
@property(retain, nonatomic) NSString *tmallServiceAppVersion; // @synthesize tmallServiceAppVersion=_tmallServiceAppVersion;
@property(retain, nonatomic) NSString *tmallServiceHostName; // @synthesize tmallServiceHostName=_tmallServiceHostName;
@property(retain, nonatomic) NSString *tmallServiceAppSecret; // @synthesize tmallServiceAppSecret=_tmallServiceAppSecret;
@property(retain, nonatomic) NSString *tmallServiceAppKey; // @synthesize tmallServiceAppKey=_tmallServiceAppKey;
@property(retain, nonatomic) NSString *tmallServiceWapTTID; // @synthesize tmallServiceWapTTID=_tmallServiceWapTTID;
@property(retain, nonatomic) NSString *tmallServiceChannelID; // @synthesize tmallServiceChannelID=_tmallServiceChannelID;
@property(retain, nonatomic) NSString *mtopServiceAppSecret; // @synthesize mtopServiceAppSecret=_mtopServiceAppSecret;
@property(retain, nonatomic) NSString *mtopServiceAppKey; // @synthesize mtopServiceAppKey=_mtopServiceAppKey;
@property(retain, nonatomic) NSString *mtopServiceWapTTID; // @synthesize mtopServiceWapTTID=_mtopServiceWapTTID;
@property(retain, nonatomic) NSString *mtopServiceChannelID; // @synthesize mtopServiceChannelID=_mtopServiceChannelID;
@property(nonatomic) int environmentType; // @synthesize environmentType=_environmentType;
- (void)setProductTmsConfig;
- (void)setStageTmsConfig;
- (void)setDailyTmsConfig;
- (id)getVersionString;
- (void)setProductTmallConfig;
- (void)setStageTmallConfig;
- (void)setDailyTmallConfig;
- (void)setProductMtopConfig;
- (void)setStageMtopConfig;
- (void)setDailyMtopConfig;
- (id)autorelease;
- (oneway void)release;
- (unsigned int)retainCount;
- (id)retain;
- (void)dealloc;
- (id)init;

@end
