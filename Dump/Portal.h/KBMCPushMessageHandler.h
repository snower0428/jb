/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NotificationManager, KBMCCouponsManager, UIViewController;

@interface KBMCPushMessageHandler : XXUnknownSuperclass {
	UIViewController* _currentViewController;
	BOOL _pushConnectionClosed;
	NotificationManager* _pushConnection;
	KBMCCouponsManager* _couponsManager;
	NSString* _lastChangedCouponId;
	NSString* _lastTradeNO;
	BOOL _pushConnected;
	BOOL _error;
}
@property(retain, nonatomic) NSString* lastTradeNO;
@property(assign, nonatomic) BOOL error;
@property(assign, nonatomic) BOOL pushConnected;
@property(readonly, assign, nonatomic) NSString* lastChangedCouponId;
@property(retain, nonatomic) UIViewController* currentViewController;
-(void)safepayDidFinishWithResult:(id)safepay;
-(void)startSafepayWithTradeNO:(id)tradeNO;
-(void)pushConnectionDisconnectedError:(id)error;
-(void)pushConnectionDidConnected:(id)pushConnection;
-(void)pushConnectionDidReceivedData:(id)pushConnection;
-(BOOL)isPushConnected;
-(void)closePushConnection;
-(void)openPushConnection;
-(id)initWithCouponsManager:(id)couponsManager;
-(void)dealloc;
@end
