/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class AssetRemindSetServiceFacade, AssetBankCardBalanceFacade, DTRpcAsyncCaller, AssetGetBankListService, AssetSyncDetailService;

@interface AssetBankDataService : XXUnknownSuperclass {
	AssetGetBankListService* _bankListService;
	AssetSyncDetailService* _syncCardDetailService;
	AssetRemindSetServiceFacade* _remindSetService;
	AssetBankCardBalanceFacade* _bankCardBalanceService;
	DTRpcAsyncCaller* _bankCardBalanceCaller;
}
@property(retain, nonatomic) DTRpcAsyncCaller* bankCardBalanceCaller;
@property(retain, nonatomic) AssetBankCardBalanceFacade* bankCardBalanceService;
@property(retain, nonatomic) AssetSyncDetailService* syncCardDetailService;
@property(retain, nonatomic) AssetGetBankListService* bankListService;
+(id)sharedInstance;
-(void).cxx_destruct;
-(void)cancelCardBalanceRequest;
-(void)queryCardBalance:(id)balance completionBlock:(id)block;
-(void)remindSet:(id)set completionBlock:(id)block;
-(void)cancelCardDetailRequest;
-(void)syncCardDetail:(id)detail completionBlock:(id)block;
-(void)cancelCardListRequest;
-(void)queryCardListCompletionBlock:(id)block;
@end
