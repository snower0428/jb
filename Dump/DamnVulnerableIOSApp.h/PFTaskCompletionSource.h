/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class PFTask;

@interface PFTaskCompletionSource : XXUnknownSuperclass {
	PFTask* _task;
}
@property(retain, nonatomic) PFTask* task;
+(id)taskCompletionSource;
-(void).cxx_destruct;
-(BOOL)trySetCancelled;
-(BOOL)trySetException:(id)exception;
-(BOOL)trySetError:(id)error;
-(BOOL)trySetResult:(id)result;
-(void)cancel;
-(void)setException:(id)exception;
-(void)setError:(id)error;
-(void)setResult:(id)result;
-(id)init;
@end
