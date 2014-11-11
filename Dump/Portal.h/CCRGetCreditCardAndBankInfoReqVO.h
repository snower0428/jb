/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "CCRBaseReqVO.h"

@class NSString;

@interface CCRGetCreditCardAndBankInfoReqVO : CCRBaseReqVO {
@private
	BOOL _needAddNewCard;
	NSString* _cardNumber;
	NSString* _cardNumberType;
	NSString* _bankMark;
	NSString* _holderName;
}
@property(assign, nonatomic) BOOL needAddNewCard;
@property(retain, nonatomic) NSString* holderName;
@property(retain, nonatomic) NSString* bankMark;
@property(retain, nonatomic) NSString* cardNumberType;
@property(retain, nonatomic) NSString* cardNumber;
-(void).cxx_destruct;
@end

