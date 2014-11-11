//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GetSystemConfigProtocol.h"

@class NSDictionary, NSString, NdAdsBriefInfoList, NdAppBriefInfoList, NdGCUserInfo;

@interface NdAPUserData : NSObject <GetSystemConfigProtocol>
{
    NSDictionary *appId2AppInfo;
    NSDictionary *identifier2AppInfo;
    NdAppBriefInfoList *appList;
    NdAdsBriefInfoList *adsList;
    NdGCUserInfo *userInfo;
    NSString *deviceToken;
    NSString *baseForumUrl;
    NSString *baseGiftMallUrl;
    NSString *basePointUrl;
    NSString *baseOrderListUrl;
}

+ (id)sharedInstanceNoSynch;
+ (id)sharedInstanceSynch;
+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)purgeSharedInstance;
+ (void)prepare;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)retain;
- (unsigned int)retainCount;
- (unsigned int)retainCountDoNothing;
- (unsigned int)retainCountDoSomething;
- (void)release;
- (void)releaseDoNothing;
- (void)releaseDoSomething;
- (id)autorelease;
- (id)autoreleaseDoNothing;
- (id)autoreleaseDoSomething;
@property(nonatomic) BOOL shouldNotNotifyUpdate;
- (BOOL)hasCachedAppList;
@property(readonly, nonatomic) NSString *lastAppListModifyDate;
@property(readonly, nonatomic) NSString *lastAdsListModifyDate;
- (void)refreshAppMapCache;
- (id)appInfoForID:(int)arg1;
- (id)appInfoForIdentifier:(id)arg1;
- (id)appIdentifierForID:(int)arg1;
- (int)appIdForIdentifier:(id)arg1;
- (id)fromatUrl:(id)arg1;
- (BOOL)needRefreshURLs;
- (int)refreshURLs;
- (void)operation:(id)arg1 getSystemConfigDidFinish:(id)arg2 forumUrl:(id)arg3 giftMallUrl:(id)arg4 pointUrl:(id)arg5 orderListUrl:(id)arg6;
- (id)getFormURL;
- (id)getGiftMallURL;
- (id)getPointURL;
- (id)getOrderListURL;
@property(retain, nonatomic) NSString *baseOrderListUrl; // @synthesize baseOrderListUrl;
@property(retain, nonatomic) NSString *basePointUrl; // @synthesize basePointUrl;
@property(retain, nonatomic) NSString *baseGiftMallUrl; // @synthesize baseGiftMallUrl;
@property(retain, nonatomic) NSString *baseForumUrl; // @synthesize baseForumUrl;
@property(retain, nonatomic) NSString *deviceToken; // @synthesize deviceToken;
@property(retain, nonatomic) NdGCUserInfo *userInfo; // @synthesize userInfo;
@property(retain, nonatomic) NdAdsBriefInfoList *adsList; // @synthesize adsList;
@property(retain, nonatomic) NdAppBriefInfoList *appList; // @synthesize appList;
@property(retain, nonatomic) NSDictionary *identifier2AppInfo; // @synthesize identifier2AppInfo;
@property(retain, nonatomic) NSDictionary *appId2AppInfo; // @synthesize appId2AppInfo;

@end

