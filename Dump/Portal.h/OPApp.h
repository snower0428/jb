/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "OPAppProtocol.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, OPAppStatus, MOBILEAPPMobileAppInfoVO;

@interface OPApp : XXUnknownSuperclass <OPAppProtocol> {
	MOBILEAPPMobileAppInfoVO* appInfo;
	NSMutableDictionary* params;
@private
	OPAppStatus* _appStatus;
}
@property(retain, nonatomic) OPAppStatus* appStatus;
@property(retain, nonatomic) MOBILEAPPMobileAppInfoVO* appInfo;
@property(retain, nonatomic) NSMutableDictionary* params;
-(void).cxx_destruct;
-(id)copyOneObj:(Class)obj typeObj:(id)obj2;
-(id)copyOneObj:(Class)obj;
-(id)urlencodeWith:(id)with;
-(id)userInfo;
-(BOOL)isLoginState;
-(void)doLogin:(id)login;
-(void)toastView:(id)view;
-(id)getSSAuthService;
-(void)cancel;
-(BOOL)authOpenApp;
-(BOOL)isGetAuth_LAUNCH_WEB;
-(BOOL)gotoAuthStatusAync_LAUNCH_WEB:(id)web;
-(BOOL)gotoAuthStatusAync:(id)aync;
-(BOOL)authApp;
-(BOOL)openApp;
-(void)setInfoContent:(id)content setCreateFlags:(BOOL)flags;
-(BOOL)downloadApp:(id)app;
-(int)isAppInstalled;
-(id)init;
-(void)dealloc;
@end

