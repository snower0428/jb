//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AdMoGoAudienceDelegate.h"
#import "AdMoGoLocationDelegate.h"

@class AdMoGoAdNetworkAdapter, AdMoGoConfigData, AdMoGoCoreAdCount, AdMoGoDeviceInfoHelper, NSData, NSDictionary, NSString, NSTimer, UIView, UIWindow;

@interface AdMoGoSplashAds : NSObject <AdMoGoLocationDelegate, AdMoGoAudienceDelegate>
{
    BOOL isFinished;
    AdMoGoConfigData *userConfigData;
    int curPriority;
    int lastWeightType;
    int lastWeightPriority;
    AdMoGoCoreAdCount *adCount;
    AdMoGoCoreAdCount *adTapCount;
    AdMoGoAdNetworkAdapter *tempAdapter;
    NSTimer *getConfigTimer;
    BOOL isGetConfigData;
    UIView *splash_background_view;
    int adViewType;
    AdMoGoDeviceInfoHelper *deviceInfoHelper;
    BOOL isExecutedClickServer;
    BOOL isReady;
    id <AdMoGoSplashAdsDelegate> delegate;
    id <AdMoGoWebBrowserControllerUserDelegate> adWebBrowswerDelegate;
    NSString *config_key;
    UIWindow *_window;
    NSString *_mogoID;
    NSDictionary *_splashConfigDict;
    NSData *_serverConfigData;
}

@property(retain, nonatomic) NSData *serverConfigData; // @synthesize serverConfigData=_serverConfigData;
@property(retain, nonatomic) NSDictionary *splashConfigDict; // @synthesize splashConfigDict=_splashConfigDict;
@property(retain, nonatomic) NSString *mogoID; // @synthesize mogoID=_mogoID;
@property(nonatomic) UIWindow *window; // @synthesize window=_window;
@property(retain, nonatomic) NSString *config_key; // @synthesize config_key;
@property(nonatomic) id <AdMoGoWebBrowserControllerUserDelegate> adWebBrowswerDelegate; // @synthesize adWebBrowswerDelegate;
@property(nonatomic) id <AdMoGoSplashAdsDelegate> delegate; // @synthesize delegate;
@property(nonatomic) BOOL isReady; // @synthesize isReady;
- (void)requestMoGoServerWithUrl:(id)arg1 andParams:(id)arg2 withStaticType:(id)arg3;
- (void)sendClickCountWithAdAdpter:(id)arg1;
- (void)sendBlankCountWithAdCount:(id)arg1;
- (void)sendExmetCountWithAdCount:(id)arg1;
- (void)sendRequestCount:(id)arg1;
- (void)adSplash:(id)arg1 didDismiss:(id)arg2;
- (void)adSplash:(id)arg1 WillDismiss:(id)arg2;
- (void)adSplash:(id)arg1 DidPresent:(id)arg2;
- (void)adSplash:(id)arg1 WillPresent:(id)arg2;
- (void)adSplashFail:(id)arg1 withError:(id)arg2;
- (void)adSplashSuccess:(id)arg1 withSplash:(id)arg2;
- (void)adapterDidStartRequestSplashAd:(id)arg1;
- (void)requestServer;
- (void)builderSplashAdapter:(id)arg1;
- (void)startRequestSplashAds:(id)arg1;
- (void)requestSplashPlatforms;
- (void)hiddenBackgoundView;
- (void)removeBackgoundView;
- (void)adsMoGoCleanData;
- (void)setIsFinish:(BOOL)arg1;
- (BOOL)getIsFinish;
- (void)isGetedConfig;
- (float)getCurOrientation;
- (void)setServerConfidData:(id)arg1;
- (void)hadGetConfigData;
- (BOOL)isConfigThreadFinish;
- (BOOL)getSplashConfigByCacheFile:(id)arg1;
- (void)sendAudience;
- (void)AdMoGoCountryCodeHelper:(BOOL)arg1;
- (void)sendAudienceInMainThread;
- (void)getSplashConfigInThread;
- (void)getSplashServerConfig;
- (id)getAdCount;
- (BOOL)isCurrentInterfaceIsPortrait;
- (void)initSplashBackgroundView;
- (void)dealloc;
- (void)presentSplashAd;
- (void)requestSplashAd;
- (id)getBackgroundView;
- (id)getMogoID;
- (id)cacheFileName;
- (id)getBackgroundImageName;
- (id)getWindow;
- (id)initWithAppKey:(id)arg1 adMoGoSplashAdsDelegate:(id)arg2 window:(id)arg3;

@end
