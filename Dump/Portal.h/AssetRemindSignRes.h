/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "KABAOPRODKabaoCommonResult.h"

@class NSDictionary;

@interface AssetRemindSignRes : KABAOPRODKabaoCommonResult {
@private
	BOOL markTravel;
	BOOL markBank;
	BOOL markCredit;
	BOOL markMobile;
	BOOL markVoucher;
	BOOL markFund;
	NSDictionary* contextMap;
}
@property(retain, nonatomic) NSDictionary* contextMap;
@property(assign, nonatomic) BOOL markVoucher;
@property(assign, nonatomic) BOOL markMobile;
@property(assign, nonatomic) BOOL markCredit;
@property(assign, nonatomic) BOOL markBank;
@property(assign, nonatomic) BOOL markTravel;
@property(assign, nonatomic) BOOL markFund;
+(Class)contextMapElementClass;
-(void).cxx_destruct;
-(BOOL)hasFundAccount;
-(BOOL)freezePhone;
@end
