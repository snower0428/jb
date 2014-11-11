/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "DTRpcInterceptor.h"


@interface DTRpcAuthInterceptor : XXUnknownSuperclass <DTRpcInterceptor> {
@private
	BOOL _lastRpcBizFatal;
	long _lastRpcOkTime;
}
@property(assign, nonatomic) BOOL lastRpcBizFatal;
@property(assign, nonatomic) long lastRpcOkTime;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)showExceptionToast:(id)toast;
-(void)showConnectionsLimit:(id)limit;
-(void)showServerBusy:(id)busy;
-(void)showBizFatal:(id)fatal;
-(void)showNetTimeout:(id)timeout;
-(void)showNetworkError:(id)error;
-(void)handleException:(id)exception;
-(void)notifySessionInvalid;
-(id)getSAAccountService;
-(id)getSSAuthService;
-(void)autoAuth;
-(void)applicationDidBecomeActive:(id)application;
-(id)handleSessionForOperation:(id)operation;
-(id)afterRpcOperation:(id)operation;
-(id)beforeRpcOperation:(id)operation;
-(void)dealloc;
-(id)init;
@end
