/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "DTSchemeHandler.h"

@class NSCondition, NSArray, NSDictionary;

@interface DFStartMicroAppSchemeHandler : DTSchemeHandler {
@private
	BOOL _fromLaunching;
	BOOL _userChanged;
	NSArray* _legacyAppsList;
	NSDictionary* _launchOptions;
	NSCondition* _taskPenddingCondition;
	int _instanceSequence;
}
@property(assign, nonatomic) int instanceSequence;
@property(assign, nonatomic) BOOL userChanged;
@property(assign, nonatomic) BOOL fromLaunching;
@property(retain, nonatomic) NSCondition* taskPenddingCondition;
@property(retain, nonatomic) NSDictionary* launchOptions;
@property(retain, nonatomic) NSArray* legacyAppsList;
+(id)methodFromURL:(id)url;
+(BOOL)canHandleOpenURL:(id)url;
+(BOOL)checkSupportedScheme:(id)scheme;
-(void).cxx_destruct;
-(void)loginControllerDidDissmiss:(id)loginController;
-(void)applicationDidFinishLaunching:(id)application;
-(void)gestureWindowDidDissmiss:(id)gestureWindow;
-(void)notifyStartingApp;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(BOOL)isLegacyApp:(id)app;
-(void)startAppWithId:(id)anId;
-(id)appId;
-(BOOL)checkVersion;
-(id)launchOptionsFormURL:(id)url;
-(void)waitForGestrueAndLoginWithTarget:(id)target;
-(BOOL)handleOpenURL:(id)url userInfo:(id)info;
-(void)dealloc;
-(id)init;
@end
