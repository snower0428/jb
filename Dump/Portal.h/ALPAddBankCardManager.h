/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class KABAOPRODFundQuickOpenManager, DTRpcAsyncCaller;

@interface ALPAddBankCardManager : XXUnknownSuperclass {
@private
	DTRpcAsyncCaller* _inputCardNoCaller;
	DTRpcAsyncCaller* _inputCardInfoCaller;
	DTRpcAsyncCaller* _applyCheckCodeCaller;
	KABAOPRODFundQuickOpenManager* _quickOpenManager;
}
@property(retain) KABAOPRODFundQuickOpenManager* quickOpenManager;
@property(retain) DTRpcAsyncCaller* applyCheckCodeCaller;
@property(retain) DTRpcAsyncCaller* inputCardInfoCaller;
@property(retain) DTRpcAsyncCaller* inputCardNoCaller;
+(id)shareInstance;
-(void).cxx_destruct;
-(void)cancelAll;
-(void)validateCheckCodeAndOpen:(id)open tairKey:(id)key completion:(id)completion;
-(void)applyFundQuickOpen:(id)open completion:(id)completion;
-(void)inputTransferInCardNo:(id)cardNo completion:(id)completion;
@end
