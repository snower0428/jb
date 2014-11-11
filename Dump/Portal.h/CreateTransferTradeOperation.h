/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BaseOperation.h"

@class NSString;

@interface CreateTransferTradeOperation : BaseOperation {
	NSString* _receiverMobile;
	NSString* _receiverName;
	NSString* _transferSpeedName;
	NSString* _bankShortName;
	NSString* _transferAmount;
	NSString* _memo;
	NSString* _toPayMemo;
	NSString* billNo;
@private
	NSString* _promotion;
}
@property(copy, nonatomic) NSString* promotion;
@property(readonly, assign, nonatomic) NSString* billNo;
-(void)main;
-(id)initWithRceiverMobile:(id)rceiverMobile receiverName:(id)name transferSpeedName:(id)name3 bankShortName:(id)name4 transferAmount:(id)amount memo:(id)memo toPayMemo:(id)payMemo;
-(void)dealloc;
@end
