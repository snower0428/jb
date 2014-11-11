/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "TFBaseReqVO.h"

@class NSString;

@interface TFCreateToAccountReq : TFBaseReqVO {
@private
	BOOL _withVoice;
	NSString* _receiverAccount;
	NSString* _receiverMobile;
	NSString* _receiverUserId;
	NSString* _sign;
	NSString* _mobileBindingType;
	NSString* _transferMode;
	NSString* _memo;
	NSString* _transferAmount;
	NSString* _promotion;
	NSString* _orderSource;
}
@property(assign, nonatomic) BOOL withVoice;
@property(retain, nonatomic) NSString* orderSource;
@property(retain, nonatomic) NSString* promotion;
@property(retain, nonatomic) NSString* transferAmount;
@property(retain, nonatomic) NSString* memo;
@property(retain, nonatomic) NSString* transferMode;
@property(retain, nonatomic) NSString* mobileBindingType;
@property(retain, nonatomic) NSString* sign;
@property(retain, nonatomic) NSString* receiverUserId;
@property(retain, nonatomic) NSString* receiverMobile;
@property(retain, nonatomic) NSString* receiverAccount;
-(void).cxx_destruct;
@end
