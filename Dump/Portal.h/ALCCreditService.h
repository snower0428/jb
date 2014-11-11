/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class ALCCreditManager, DTRpcAsyncCaller;

@interface ALCCreditService : XXUnknownSuperclass {
@private
	ALCCreditManager* _creditManager;
	DTRpcAsyncCaller* _creditManagerCaller;
}
@property(retain, nonatomic) DTRpcAsyncCaller* creditManagerCaller;
@property(retain) ALCCreditManager* creditManager;
+(id)sharedInstance;
-(void).cxx_destruct;
-(void)cancelRpcRequest;
-(void)queryMyPromptCountWithCompletionBlock:(id)completionBlock;
-(void)queryMyCreditExaltInfoWithCompletionBlock:(id)completionBlock;
-(void)queryCreditExaltInfo:(id)info completionBlock:(id)block;
@end
