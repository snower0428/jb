/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class DTAsyncCaller, COCBalanceInfo;

@interface COCDataBalanceManager : XXUnknownSuperclass {
@private
	DTAsyncCaller* caller;
	COCBalanceInfo* _balbanceInfo;
}
@property(retain, nonatomic) DTAsyncCaller* caller;
@property(retain, nonatomic) COCBalanceInfo* balbanceInfo;
+(id)sharedInstance;
-(void).cxx_destruct;
-(void)balanceQuery:(id)query andCardNo:(id)no holderName:(id)name completionBlock:(id)block;
-(id)_generateBalanceQueryRequestAgentCode:(id)code cardNo:(id)no holderName:(id)name;
@end

