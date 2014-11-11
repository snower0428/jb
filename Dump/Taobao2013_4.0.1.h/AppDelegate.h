//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIResponder.h"

#import "UIAlertViewDelegate.h"
#import "UIApplicationDelegate.h"

@class NSMutableArray, NSMutableData, NSMutableDictionary, NSString, Reachability, TBMainViewController, TBRightSidePanelVC, TBServiceContext, TBTCCityService, UIWindow;

__attribute__((visibility("hidden")))
@interface AppDelegate : UIResponder <UIApplicationDelegate, UIAlertViewDelegate>
{
    BOOL _haveSetStartUp;
    Reachability *hostReach;
    TBTCCityService *_cityService;
    TBServiceContext *_cityServiceContext;
    NSMutableArray *_calendarJumpUrlArray;
    NSMutableDictionary *_calendarUserTrackDict;
    TBRightSidePanelVC *_rightSidePanelVC;
    UIWindow *_window;
    TBMainViewController *_mainViewController;
    NSString *_tmsMarkedKeyword;
    NSMutableData *_receiveData;
    NSString *_pushUrlStr;
}

+ (id)getInstance;
@property(retain, nonatomic) NSString *pushUrlStr; // @synthesize pushUrlStr=_pushUrlStr;
@property(retain, nonatomic) TBServiceContext *cityServiceContext; // @synthesize cityServiceContext=_cityServiceContext;
@property(retain, nonatomic) NSMutableData *receiveData; // @synthesize receiveData=_receiveData;
@property(retain, nonatomic) NSString *tmsMarkedKeyword; // @synthesize tmsMarkedKeyword=_tmsMarkedKeyword;
@property(retain, nonatomic) TBMainViewController *mainViewController; // @synthesize mainViewController=_mainViewController;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;
- (void)configTrustedDeviceVerification;
- (void)autoCleanImageCache;
- (void)configWVUserConfig;
- (void)initYYZPlugin;
- (void)statUserRunApp;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)application:(id)arg1 didReceiveLocalNotification:(id)arg2;
- (void)applicationDidReceiveMemoryWarning:(id)arg1;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2;
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
- (void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)checkNewVersion;
- (id)cityService;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)dnsSwitchNotification:(id)arg1;
- (void)dnsSwitch;
- (void)openCalendarMyPlanVC:(id)arg1;
- (BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (void)tbRequestSuccess:(id)arg1;
- (void)tbRequestFailed:(id)arg1;
- (void)userLoginOut;
- (void)userLogined;
- (BOOL)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (void)processPushURL:(id)arg1;
- (void)registerPlugins;
- (void)setupUserTrack;
- (void)initWindowAndRootViewController;
- (void)autoResetSession;
- (void)configTBSDKNetworkSDK;
- (void)configOtherDetail;
- (void)removeHomeLoadingView;
- (void)initApplicationEnvironment;
- (void)initTBSDNSCenter;
- (void)didReceiveServerTimeDiffTooMuchNotification:(id)arg1;
- (void)handleServerTimeDiffTooMuchNotification:(id)arg1;
- (void)registerResponseDataErrorNotification;
- (void)didReceiveResponseDataErrorNotification:(id)arg1;
- (void)responseDataErrSelector:(id)arg1;
- (void)beginNetworkListener;
- (void)reachabilityChanged:(id)arg1;
- (id)isShowMoreBadge;

@end
