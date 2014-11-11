/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, UIView;

@interface TransferPayService : XXUnknownSuperclass {
@private
	UIView* _toast;
	NSString* _tradeNo;
	NSString* _bizType;
	NSString* _subActionType;
	NSString* _trasferToCardSpeed;
}
@property(retain, nonatomic) UIView* toast;
@property(copy) NSString* trasferToCardSpeed;
@property(copy) NSString* subActionType;
@property(copy) NSString* bizType;
@property(copy) NSString* tradeNo;
+(id)sharedService;
-(void)safepayDidFinishWithResult:(id)safepay;
-(void)changeTSBillSpeedOperationDidFinish:(id)changeTSBillSpeedOperation;
-(void)checkBillCanReduceBank;
-(void)alertView:(id)view didDismissWithButtonIndex:(int)buttonIndex;
-(void)checkTSBillOperationDidFinish:(id)checkTSBillOperation;
-(void)checkBillCanPaid;
-(void)dismissToast;
-(void)showToast;
-(void)sendCollectionMsgOperationDidFinish:(id)sendCollectionMsgOperation;
-(void)remindReceiver;
-(void)dealloc;
@end
