/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "DTService.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "SPSafePayService.h"
#import "SafePayDelegate.h"


@interface SPSafePayServiceDefault : XXUnknownSuperclass <DTService, SPSafePayService, SafePayDelegate> {
@private
	id<SafePayDelegate> _delegate;
}
@property(assign, nonatomic) __weak id<SafePayDelegate> delegate;
-(void).cxx_destruct;
-(void)getSettingViewControllerWithExternal:(id)external exToken:(id)token CompletionBlock:(id)block;
-(void)AliSetPaySys:(int)sys param:(id)param notify:(id)notify;
-(id)AliGetPaySysInfo:(int)info;
-(void)clearTid;
-(void)safepayDidFinishWithResult:(id)safepay;
-(BOOL)depositWithPartner:(id)partner externToken:(id)token fromAppScheme:(id)appScheme;
-(BOOL)transferToCardWithExternToken:(id)externToken tradeNo:(id)no orderSuffix:(id)suffix;
-(BOOL)transferToCardWithExternToken:(id)externToken tradeNo:(id)no;
-(BOOL)payWithPartner:(id)partner externToken:(id)token outTradeNo:(id)no bizType:(id)type bizNo:(id)no5 bizSubType:(id)type6 fromAppScheme:(id)appScheme logonId:(id)anId withCashier:(id)cashier orderSuffix:(id)suffix;
-(BOOL)alipayWithPartner:(id)partner externToken:(id)token bizNo:(id)no bizType:(id)type bizSubType:(id)type5 fromAppScheme:(id)appScheme orderSuffix:(id)suffix;
-(BOOL)alipayWithPartner:(id)partner externToken:(id)token bizNo:(id)no bizType:(id)type bizSubType:(id)type5 fromAppScheme:(id)appScheme;
-(BOOL)alipayWithPartner:(id)partner externToken:(id)token outTradeNo:(id)no bizType:(id)type bizSubType:(id)type5 totalFee:(float)fee fromAppScheme:(id)appScheme orderSuffix:(id)suffix;
-(BOOL)alipayWithPartner:(id)partner externToken:(id)token outTradeNo:(id)no bizType:(id)type bizSubType:(id)type5 totalFee:(float)fee fromAppScheme:(id)appScheme;
-(BOOL)alipayWithPartner:(id)partner externToken:(id)token outTradeNo:(id)no bizType:(id)type bizSubType:(id)type5 deliverMobile:(id)mobile fromAppScheme:(id)appScheme orderSuffix:(id)suffix;
-(BOOL)alipayWithPartner:(id)partner externToken:(id)token outTradeNo:(id)no bizType:(id)type bizSubType:(id)type5 deliverMobile:(id)mobile fromAppScheme:(id)appScheme;
-(BOOL)alipayWithPartner:(id)partner externToken:(id)token outTradeNo:(id)no bizType:(id)type bizSubType:(id)type5 fromAppScheme:(id)appScheme orderSuffix:(id)suffix;
-(BOOL)alipayWithPartner:(id)partner externToken:(id)token outTradeNo:(id)no bizType:(id)type bizSubType:(id)type5 fromAppScheme:(id)appScheme;
-(BOOL)alipayWithPartner:(id)partner externToken:(id)token outTradeNo:(id)no bizType:(id)type bizSubType:(id)type5 fromAppScheme:(id)appScheme withCashier:(id)cashier orderSuffix:(id)suffix;
-(BOOL)alipayWithPartner:(id)partner externToken:(id)token outTradeNo:(id)no bizType:(id)type bizSubType:(id)type5 fromAppScheme:(id)appScheme withCashier:(id)cashier;
-(id)createOrderString:(id)string suffix:(id)suffix;
-(BOOL)callSafepayService:(id)service;
-(void)setSafePayURL:(id)url;
-(void)onLoginSuccess:(id)success;
-(void)applicationDidEnterBackground:(id)application;
-(void)start;
-(id)init;
@end

