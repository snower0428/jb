/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "KABAOPRODKabaoCommonResult.h"

@class NSDictionary, NSArray, NSString, KABAOPRODFundUserInfo, KABAOPRODFundInfo;

@interface KABAOPRODFundOpenInfoResult : KABAOPRODKabaoCommonResult {
@private
	KABAOPRODFundInfo* _fundInfo;
	KABAOPRODFundUserInfo* _fundUserInfo;
	NSArray* _bankCards;
	NSString* _jumpIndex;
	NSDictionary* _extraInfo;
}
@property(retain, nonatomic) NSDictionary* extraInfo;
@property(retain, nonatomic) NSString* jumpIndex;
@property(retain, nonatomic) NSArray* bankCards;
@property(retain, nonatomic) KABAOPRODFundUserInfo* fundUserInfo;
@property(retain, nonatomic) KABAOPRODFundInfo* fundInfo;
+(Class)extraInfoElementClass;
+(Class)bankCardsElementClass;
-(void).cxx_destruct;
@end

