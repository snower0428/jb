/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSError, NSException, NSCondition, NSMutableArray, NSObject;

@interface PFTask : XXUnknownSuperclass {
	id _result;
	NSError* _error;
	NSException* _exception;
	BOOL _cancelled;
	BOOL _completed;
	NSObject* _lock;
	NSCondition* _condition;
	NSMutableArray* _callbacks;
}
@property(retain, nonatomic) NSMutableArray* callbacks;
@property(assign, nonatomic) BOOL completed;
@property(retain, nonatomic) NSCondition* condition;
@property(retain, nonatomic) NSObject* lock;
+(id)delay:(int)delay;
+(id)whenAll:(id)all;
+(id)cancelledTask;
+(id)taskWithException:(id)exception;
+(id)taskWithError:(id)error;
+(id)taskWithResult:(id)result;
-(void).cxx_destruct;
-(id)waitForResult:(id*)result;
-(id)thenCallBackOnMainThreadWithBoolValueAsync:(id)boolValueAsync;
-(id)thenCallBackOnMainThreadAsync:(id)async;
-(void)waitUntilFinished;
-(void)warnOperationOnMainThreadNoOp;
-(void)warnOperationOnMainThread;
-(id)onSuccess:(id)success;
-(id)continueWith:(id)with;
-(void)runContinuations;
-(void)setCompleted;
-(BOOL)isCompleted;
-(BOOL)trySetCancelled;
-(void)cancel;
-(BOOL)isCancelled;
-(BOOL)trySetException:(id)exception;
-(void)setException:(id)exception;
-(id)exception;
-(BOOL)trySetError:(id)error;
-(void)setError:(id)error;
-(id)error;
-(BOOL)trySetResult:(id)result;
-(void)setResult:(id)result;
-(id)result;
-(id)init;
@end

