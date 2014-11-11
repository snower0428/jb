/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class DTAsyncCaller, AssetGetBankListServiceFacade;

@interface AssetGetBankListService : XXUnknownSuperclass {
	AssetGetBankListServiceFacade* _serviceFacade;
	id completionBlock;
	BOOL cancel;
@private
	DTAsyncCaller* _caller;
}
@property(retain, nonatomic) DTAsyncCaller* caller;
@property(assign, nonatomic) BOOL cancel;
@property(readonly, assign, nonatomic) AssetGetBankListServiceFacade* serviceFacade;
-(void).cxx_destruct;
-(void)cancelBankListRequest;
-(void)startService;
-(void)setCompletionBlock:(id)block;
@end

