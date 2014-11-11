//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UACProtocol.h"

@class NSMutableDictionary, NSUserDefaults, NdApSoftDownloadCenter, NdApSoftInstallCenter;

@interface NdApSoftManagementCenter : NSObject <UACProtocol>
{
    int maxDownloadCount;
    NSUserDefaults *managerDefault;
    NdApSoftDownloadCenter *downloadCenter;
    NdApSoftInstallCenter *installCenter;
    NSMutableDictionary *installedAppsDict;
    NSMutableDictionary *installingAppsDict;
    NSMutableDictionary *updatableAppsDict;
    NSMutableDictionary *downloadingAppsDict;
    NSMutableDictionary *downloadedAppsDict;
}

+ (id)sharedInstanceNoSynch;
+ (id)sharedInstanceSynch;
+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)purgeSharedInstance;
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
- (id)init;
- (void)dealloc;
- (void)reportDownload:(int)arg1 appName:(id)arg2 action:(int)arg3 packageUri:(id)arg4;
- (void)operation:(id)arg1 uacDidFinish:(id)arg2 actionType:(int)arg3 points:(int)arg4 pointDesc:(id)arg5;
- (void)loadLocalInstalled91App;
- (void)updateUpdatableInfo:(id)arg1 needNotify:(BOOL)arg2;
- (void)updateUpdatableInfo:(id)arg1;
- (void)prepareToWork;
- (void)saveWork;
- (id)downloadedSoftItemList;
- (int)transverStringToVersionInt:(id)arg1;
- (int)version:(id)arg1 compareToVersion:(id)arg2;
- (BOOL)item:(id)arg1 isNewerThan:(id)arg2;
- (id)downloadingSoftItemList;
- (id)updatingSoftItemList;
- (id)updatableSoftItemList;
- (BOOL)startTask:(int)arg1;
- (void)stopTask:(int)arg1;
- (void)removeTask:(int)arg1;
- (BOOL)updateTask:(int)arg1;
- (id)softItemForAppId:(int)arg1;
- (void)downloadQueueStatusDidChange:(id)arg1 state:(int)arg2;
- (void)updateQueueStatusDidChange:(id)arg1 state:(int)arg2;
- (void)item:(id)arg1 lengthDownloaded:(long long)arg2 total:(long long)arg3;
- (void)downloadQueueDidAddItem:(id)arg1;
- (void)downloadQueueDidFinishInitItem:(id)arg1;
- (void)downloadQueueDidStartInitItem:(id)arg1;
- (void)downloadQueueDidStartItem:(id)arg1;
- (void)downloadQueueDidStopItem:(id)arg1;
- (void)downloadQueueDidFinishItem:(id)arg1;
- (void)downloadQueueDidFailItem:(id)arg1;
- (BOOL)install:(int)arg1;
- (BOOL)uninstall:(id)arg1;
- (void)askToInstall:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)doInstallWithLoading:(id)arg1;
- (void)installWithLoading:(id)arg1;
- (BOOL)isAnInstalledSoftItem:(id)arg1;
- (id)installed91SDKSoft;
- (void)open:(id)arg1;
- (void)installQueueDidAddItem:(id)arg1;
- (void)installQueueDidFinishInitItem:(id)arg1;
- (void)installQueueDidFinishItem:(id)arg1;
- (void)installQueueDidFailItem:(id)arg1;
- (id)itemFromSerializedDictionary:(id)arg1;
- (id)serializedDictionaryFromItem:(id)arg1;
- (id)serializedItemsInDictionary:(id)arg1;
- (id)deserializedDownloadingDict;
- (id)serializedDownloadingDict;
- (id)deserializedDownloadedDict;
- (id)serializedDownloadedDict;
- (id)deserializedUpdatableDict;
- (id)serializedUpdatableDict;
- (id)deserializedInstallingDict;
- (id)serializedInstallingDict;
@property(retain, nonatomic) NSMutableDictionary *downloadedAppsDict; // @synthesize downloadedAppsDict;
@property(retain, nonatomic) NSMutableDictionary *downloadingAppsDict; // @synthesize downloadingAppsDict;
@property(retain, nonatomic) NSMutableDictionary *updatableAppsDict; // @synthesize updatableAppsDict;
@property(retain, nonatomic) NSMutableDictionary *installingAppsDict; // @synthesize installingAppsDict;
@property(retain, nonatomic) NSMutableDictionary *installedAppsDict; // @synthesize installedAppsDict;
@property(retain, nonatomic) NdApSoftInstallCenter *installCenter; // @synthesize installCenter;
@property(retain, nonatomic) NdApSoftDownloadCenter *downloadCenter; // @synthesize downloadCenter;
@property(retain, nonatomic) NSUserDefaults *managerDefault; // @synthesize managerDefault;
@property(nonatomic) int maxDownloadCount; // @synthesize maxDownloadCount;

@end

