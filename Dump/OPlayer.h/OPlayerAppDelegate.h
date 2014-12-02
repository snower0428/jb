//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIResponder.h"

#import "DBRestClientDelegate.h"
#import "UIApplicationDelegate.h"
#import "WXApiDelegate.h"

@class AKTabBarController, ChromecastDeviceController, MPMoviePlayerViewController, NSMutableArray, NSString, PlayViewController, UITabBarController, UIWindow;

__attribute__((visibility("hidden")))
@interface OPlayerAppDelegate : UIResponder <UIApplicationDelegate, DBRestClientDelegate, WXApiDelegate>
{
    UIWindow *window;
    UITabBarController *rootController;
    NSString *url;
    int _networkingCount;
    int inBackground;
    BOOL tv_out;
    BOOL inTvoutMode;
    BOOL chromecast_out;
    BOOL locked;
    BOOL is_landscape;
    BOOL lockSubtitlePos;
    NSString *password;
    PlayViewController *globalPlayViewController;
    BOOL isLocking;
    BOOL isPlayingOnTop;
    int currentPlaylistIndex;
    int currentPlaylistDetailIndex;
    NSMutableArray *playlistMutableArray;
    NSMutableArray *dropboxDownloadSessions;
    float tv_width;
    float tv_height;
    NSString *shareAlbumid;
    int _scene;
    NSString *originalConvertPath;
    MPMoviePlayerViewController *theMoviePlayer;
    int theMoviePlayerCurrentPos;
    BOOL full_screen;
    BOOL isMyAddressAvaliable;
    UIWindow *_akwindow;
    AKTabBarController *_tabBarController;
    ChromecastDeviceController *_chromecastDeviceController;
}

+ (id)sharedAppDelegate;
@property(retain, nonatomic) ChromecastDeviceController *chromecastDeviceController; // @synthesize chromecastDeviceController=_chromecastDeviceController;
@property BOOL isMyAddressAvaliable; // @synthesize isMyAddressAvaliable;
@property(retain, nonatomic) AKTabBarController *aktabBarController; // @synthesize aktabBarController=_tabBarController;
@property(retain, nonatomic) UIWindow *akwindow; // @synthesize akwindow=_akwindow;
@property BOOL full_screen; // @synthesize full_screen;
@property int theMoviePlayerCurrentPos; // @synthesize theMoviePlayerCurrentPos;
@property(retain, nonatomic) MPMoviePlayerViewController *theMoviePlayer; // @synthesize theMoviePlayer;
@property(retain, nonatomic) NSString *originalConvertPath; // @synthesize originalConvertPath;
@property(retain, nonatomic) NSString *shareAlbumid; // @synthesize shareAlbumid;
@property float tv_height; // @synthesize tv_height;
@property float tv_width; // @synthesize tv_width;
@property(retain, nonatomic) NSMutableArray *dropboxDownloadSessions; // @synthesize dropboxDownloadSessions;
@property(retain, nonatomic) NSMutableArray *playlistMutableArray; // @synthesize playlistMutableArray;
@property int currentPlaylistDetailIndex; // @synthesize currentPlaylistDetailIndex;
@property int currentPlaylistIndex; // @synthesize currentPlaylistIndex;
@property(retain, nonatomic) PlayViewController *globalPlayViewController; // @synthesize globalPlayViewController;
@property BOOL isPlayingOnTop; // @synthesize isPlayingOnTop;
@property BOOL isLocking; // @synthesize isLocking;
@property BOOL is_landscape; // @synthesize is_landscape;
@property BOOL lockSubtitlePos; // @synthesize lockSubtitlePos;
@property BOOL locked; // @synthesize locked;
@property BOOL inTvoutMode; // @synthesize inTvoutMode;
@property BOOL chromecast_out; // @synthesize chromecast_out;
@property BOOL tv_out; // @synthesize tv_out;
@property(nonatomic) int inBackground; // @synthesize inBackground;
@property(nonatomic) int networkingCount; // @synthesize networkingCount=_networkingCount;
@property(retain, nonatomic) NSString *url; // @synthesize url;
@property(retain, nonatomic) UITabBarController *rootController; // @synthesize rootController;
@property(retain, nonatomic) UIWindow *window; // @synthesize window;
- (void)shareWeiXin:(id)arg1;
- (void)sendImageContent:(id)arg1;
- (void)sendLinkContent:(id)arg1;
- (void)onResp:(id)arg1;
- (void)onReq:(id)arg1;
- (void)restClient:(id)arg1 loadFileFailedWithError:(id)arg2 loadFilePath:(id)arg3;
- (void)restClient:(id)arg1 loadedFile:(id)arg2;
- (void)restClient:(id)arg1 loadProgress:(float)arg2 forFile:(id)arg3;
- (void)stopOrResumeDropboxDownload:(BOOL)arg1 downloadInfo:(id)arg2;
- (void)updateDownloadArray:(id)arg1 downloadStatus:(int)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)cableDidDisconnect;
- (void)cableDidConnect;
- (void)getPlaylist;
- (void)didStopNetworking;
- (void)didStartNetworking;
- (void)dealloc;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)promptBuy;
- (void)showBuyAlertView;
- (void)applicationDidBecomeActive:(id)arg1;
- (BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (BOOL)application:(id)arg1 handleOpenURL:(id)arg2;
- (void)testOffline;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)isAddressAvailable:(id)arg1;
- (BOOL)isConnectionAvailable;
- (id)configFilePathForOldSystem:(id)arg1;
- (id)downloadingFilePath;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

