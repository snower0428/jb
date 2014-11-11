/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "KABAOPRODKabaoCommonResult.h"

@class NSArray, NSString;

@interface KABAOPRODInputElementResult : KABAOPRODKabaoCommonResult {
@private
	BOOL _certified;
	NSString* _cardNoLast4;
	NSString* _bankName;
	NSString* _instId;
	NSString* _cardType;
	NSString* _bankLogo;
	NSString* _cardHolderName;
	NSString* _certNo;
	NSArray* _checkItemList;
	NSString* _bankProcotolUrl;
	NSString* _alipayProcotolUrl;
	NSString* _expressCacheKey;
}
@property(retain, nonatomic) NSString* expressCacheKey;
@property(retain, nonatomic) NSString* alipayProcotolUrl;
@property(retain, nonatomic) NSString* bankProcotolUrl;
@property(retain, nonatomic) NSArray* checkItemList;
@property(assign, nonatomic) BOOL certified;
@property(retain, nonatomic) NSString* certNo;
@property(retain, nonatomic) NSString* cardHolderName;
@property(retain, nonatomic) NSString* bankLogo;
@property(retain, nonatomic) NSString* cardType;
@property(retain, nonatomic) NSString* instId;
@property(retain, nonatomic) NSString* bankName;
@property(retain, nonatomic) NSString* cardNoLast4;
+(Class)checkItemListElementClass;
-(void).cxx_destruct;
@end

