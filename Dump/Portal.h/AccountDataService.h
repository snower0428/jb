/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class KABAOPRODCouponManager, UserAccountInfoFacade, UserPointListFacade, DTRpcAsyncCaller;

@interface AccountDataService : XXUnknownSuperclass {
	UserAccountInfoFacade* _accountInfoService;
	KABAOPRODCouponManager* _couponListService;
	UserPointListFacade* _pointListService;
	DTRpcAsyncCaller* _accontRpcCaller;
	DTRpcAsyncCaller* _couponListRpcCaller;
	DTRpcAsyncCaller* _pointListCaller;
}
@property(retain, nonatomic) DTRpcAsyncCaller* pointListCaller;
@property(retain, nonatomic) DTRpcAsyncCaller* couponListRpcCaller;
@property(retain, nonatomic) DTRpcAsyncCaller* accontRpcCaller;
+(id)sharedInstance;
-(void).cxx_destruct;
-(void)cancelPointListRpcRequest;
-(void)cancelCouponListRpcRequest;
-(void)cancelAccontInfoRpcRequest;
-(void)pointListServiceReq:(id)req completionBlock:(id)block;
-(void)couponListServiceReq:(id)req completionBlock:(id)block;
-(void)accountInfoServiceReq:(id)req completionBlock:(id)block;
@end
