/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class CLLocation, DTRpcAsyncCaller, NSMutableDictionary;

@interface FindUserUtil : XXUnknownSuperclass {
@private
	BOOL _startMessage;
	NSMutableDictionary* _userDict;
	int _messageState;
	CLLocation* _currentLocation;
	DTRpcAsyncCaller* _rpcCaller;
}
@property(assign, nonatomic) BOOL startMessage;
@property(retain, nonatomic) DTRpcAsyncCaller* rpcCaller;
@property(retain) CLLocation* currentLocation;
@property(assign) int messageState;
@property(retain) NSMutableDictionary* userDict;
+(id)sharedInstance;
-(void).cxx_destruct;
-(id)rpcBlock:(id)block block:(id)block2;
-(void)stopMessage;
-(void)sendMessage:(id)message radius:(int)radius appID:(id)anId action:(id)action;
-(void)loopMessage:(id)message;
-(id)init;
@end
