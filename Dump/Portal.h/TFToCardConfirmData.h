/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class TFToCardFormData, NSString;

@interface TFToCardConfirmData : XXUnknownSuperclass {
@private
	BOOL _chargeFeeReqSucceed;
	TFToCardFormData* _formData;
	NSString* _memo;
	NSString* _oppMobileNo;
	NSString* _speed;
	NSString* _speedMsg;
	NSString* _fee;
	NSString* _tradeNo;
	NSString* _bizType;
	NSString* _subBizType;
}
@property(assign, nonatomic) BOOL chargeFeeReqSucceed;
@property(retain, nonatomic) NSString* subBizType;
@property(retain, nonatomic) NSString* bizType;
@property(retain, nonatomic) NSString* tradeNo;
@property(retain, nonatomic) NSString* fee;
@property(retain, nonatomic) NSString* speedMsg;
@property(retain, nonatomic) NSString* speed;
@property(retain, nonatomic) NSString* oppMobileNo;
@property(retain, nonatomic) NSString* memo;
@property(retain, nonatomic) TFToCardFormData* formData;
-(void).cxx_destruct;
-(id)initWithTFToCardFormData:(id)cardFormData;
@end
