//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MobClickDelegate.h"
#import "QQApiInterfaceDelegate.h"
#import "SDWebImageManagerDelegate.h"
#import "SKStoreProductViewControllerDelegate.h"
#import "UIApplicationDelegate.h"
#import "WXApiDelegate.h"

@class UINavigationController, UIWindow;

__attribute__((visibility("hidden")))
@interface MTXXAppDelegate : NSObject <SDWebImageManagerDelegate, SKStoreProductViewControllerDelegate, UIApplicationDelegate, MobClickDelegate, QQApiInterfaceDelegate, WXApiDelegate>
{
    UIWindow *_window;
    UINavigationController *_navigationController;
}

@property(retain, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;
- (void)appearance;
- (void)onReq:(id)arg1;
- (void)onResp:(id)arg1;
- (void)onRequestAppMessage;
- (void)appRunOverLimitTimer;
- (void)startAnalytics;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2;
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidReceiveMemoryWarning:(id)arg1;
- (void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;
- (void)applicationDidEnterBackground:(id)arg1;
- (BOOL)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (BOOL)application:(id)arg1 handleOpenURL:(id)arg2;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)webImageManager:(id)arg1 didFinishWithImage:(id)arg2;
- (void)webImageManager:(id)arg1 didProgressWithPartialImage:(id)arg2 forURL:(id)arg3;
- (void)cancelCurrentImageLoad;
- (void)addAPIHandlers;
- (BOOL)addSkipBackupAttributeToItemAtURL:(id)arg1;
- (void)pushEventHandle:(id)arg1;
- (BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (void)dealloc;

@end

