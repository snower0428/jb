/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class DTRpcAsyncCaller, ALCCreditQueryManager;

@interface ALCCreditQueryService : XXUnknownSuperclass {
@private
	ALCCreditQueryManager* _creditQueryManager;
	DTRpcAsyncCaller* _creditManagerCaller;
}
@property(retain, nonatomic) DTRpcAsyncCaller* creditManagerCaller;
@property(retain) ALCCreditQueryManager* creditQueryManager;
+(id)sharedInstance;
-(void).cxx_destruct;
-(void)queryCreditList:(id)list completionBlock:(id)block;
-(void)queryMyWithcompletionBlock:(id)block;
@end
