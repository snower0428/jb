/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "DamnVulnerableIOSApp-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSMutableDictionary, NSCondition, PFCommandCacheTestHelper;

@interface PFCommandCache : XXUnknownSuperclass {
	NSString* cachePath;
	int timeoutMaxRetries;
	float timeoutRetryWaitSeconds;
	int maxCacheSizeBytes;
	BOOL shouldStop;
	BOOL connected;
	SCNetworkReachabilityRef reachability;
	NSMutableDictionary* taskCompletionSources;
	NSCondition* lock;
	BOOL running;
	NSCondition* runningLock;
	PFCommandCacheTestHelper* testHelper;
	dispatch_queue_s* blockQueue;
}
@property(retain) NSString* cachePath;
+(id)defaultInstance;
-(id)testHelper;
-(void)notifyTestHelperObjectUpdated;
-(void)setConnected:(BOOL)connected;
-(void)clear;
-(int)pendingCount;
-(id)runEventuallyAsync:(id)async withObject:(id)object;
-(void)runLoop;
-(void)maybeRunAllCommandsNow:(int)now;
-(void)runEventuallyInternal:(id)internal taskCompletionSource:(id)source preferOldest:(BOOL)oldest withObject:(id)object;
-(int)commandsInMemory;
-(void)simulateReboot;
-(void)removeFile:(id)file error:(id*)error;
-(void)pause;
-(void)resume;
-(void)setMaxCacheSizeBytes:(int)bytes;
-(void)setTimeoutRetryWaitSeconds:(float)seconds;
-(void)setTimeoutMaxRetries:(int)retries;
-(void)dealloc;
-(id)init;
@end

