/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "CDVPlugin.h"

@class CDVReachability, NSString;

@interface CDVConnection : CDVPlugin {
	NSString* type;
	CDVReachability* internetReach;
@private
	NSString* connectionType;
}
@property(retain) CDVReachability* internetReach;
@property(copy) NSString* connectionType;
-(void)dealloc;
-(id)initWithWebView:(id)webView;
-(void)onResume;
-(void)onPause;
-(void)prepare;
-(void)updateOnlineStatus;
-(void)updateConnectionType:(id)type;
-(void)updateReachability:(id)reachability;
-(BOOL)isCellularConnection:(id)connection;
-(id)w3cConnectionTypeFor:(id)aFor;
-(void)getConnectionInfo:(id)info withDict:(id)dict;
@end

