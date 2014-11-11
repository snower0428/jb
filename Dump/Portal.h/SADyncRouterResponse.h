/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary;
@protocol SADyncRouterResponseDelegate;

@interface SADyncRouterResponse : XXUnknownSuperclass {
@private
	NSDictionary* _rpcResponse;
	id<SADyncRouterResponseDelegate> _delegate;
	int _actionType;
}
@property(assign, nonatomic) int actionType;
@property(assign, nonatomic) __weak id<SADyncRouterResponseDelegate> delegate;
@property(retain, nonatomic) NSDictionary* rpcResponse;
+(Class)responseClassWithRpcResponse:(id)rpcResponse;
+(id)responseWithRpcResponse:(id)rpcResponse;
-(void).cxx_destruct;
-(void)cancelPerformAction;
-(void)performAction;
-(BOOL)canPerformAction;
-(void)dealloc;
-(id)initWithRpcResponse:(id)rpcResponse;
-(void)notifyDyncRouterResponse:(id)response didFailPerformAction:(id)action;
-(void)notifyDyncRouterResponse:(id)response didFinishPerformAction:(id)action;
@end
