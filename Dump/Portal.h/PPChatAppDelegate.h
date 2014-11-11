/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ThirdPartyAccountDataDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "DTMicroApplicationDelegate.h"

@class MBProgressHUD, NSString, PPChatDataController, PPChatContext, UIViewController;

@interface PPChatAppDelegate : XXUnknownSuperclass <ThirdPartyAccountDataDelegate, DTMicroApplicationDelegate> {
@private
	UIViewController* _rootController;
	NSString* _publicId;
	NSString* _followType;
	NSString* _publicName;
	NSString* _initialAction;
	MBProgressHUD* _progressHUD;
	UIViewController* _topController;
	PPChatContext* _context;
	PPChatDataController* _dataController;
}
@property(retain, nonatomic) PPChatDataController* dataController;
@property(retain, nonatomic) PPChatContext* context;
@property(assign, nonatomic) __weak UIViewController* topController;
@property(retain, nonatomic) MBProgressHUD* progressHUD;
@property(retain, nonatomic) NSString* initialAction;
@property(retain, nonatomic) NSString* publicName;
@property(retain, nonatomic) NSString* followType;
@property(retain, nonatomic) NSString* publicId;
@property(retain, nonatomic) UIViewController* rootController;
+(id)context;
+(void)clearDataForPublicId:(id)publicId;
+(id)currentInstance;
-(void).cxx_destruct;
-(void)safepayDidFinishWithNotification:(id)safepay;
-(id)match:(id)match withPattern:(id)pattern index:(int)index;
-(void)safePayDidStart;
-(void)notifyLastMessage;
-(void)notifyThirdPartyAccountsChange;
-(void)notifyFollow;
-(void)notifyUnfollow;
-(void)thirdPartyAccountDataRequestAddingUriFailWithError:(id)error;
-(void)thirdPartyAccountDataDidLoadAddingUri:(id)thirdPartyAccountData;
-(void)returnFromWebWithNotification:(id)notification;
-(void)addThirdPartyAccount;
-(void)applicationWillTerminate:(id)application animated:(BOOL)animated;
-(void)application:(id)application willResumeWithOptions:(id)options;
-(void)applicationWillPause:(id)application;
-(void)applicationDidFinishLaunching:(id)application;
-(void)application:(id)application willStartLaunchingWithOptions:(id)options;
-(void)applicationDidCreate:(id)application;
-(id)rootControllerInApplication:(id)application;
-(void)dealloc;
-(id)init;
@end

