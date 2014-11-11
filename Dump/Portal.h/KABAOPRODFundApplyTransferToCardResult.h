/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "KABAOPRODKabaoCommonResult.h"

@class NSArray, NSString, NSDictionary;

@interface KABAOPRODFundApplyTransferToCardResult : KABAOPRODKabaoCommonResult {
@private
	NSString* _totalAmount;
	NSString* _canTransferTimeString;
	NSString* _quotaContent;
	NSArray* _bankCards;
	NSString* _passwordType;
	NSDictionary* _extraInfo;
}
@property(retain, nonatomic) NSDictionary* extraInfo;
@property(retain, nonatomic) NSString* passwordType;
@property(retain, nonatomic) NSArray* bankCards;
@property(retain, nonatomic) NSString* quotaContent;
@property(retain, nonatomic) NSString* canTransferTimeString;
@property(retain, nonatomic) NSString* totalAmount;
+(Class)extraInfoElementClass;
+(Class)bankCardsElementClass;
-(void).cxx_destruct;
@end
