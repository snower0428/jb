/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "KABAOPRODKabaoCommonResult.h"

@class NSString, NSDictionary;

@interface AssetAlipassRes : KABAOPRODKabaoCommonResult {
@private
	BOOL freezeTravel;
	BOOL freezePhone;
	BOOL freezeVoucher;
	BOOL hiddenTravel;
	BOOL hiddenPhone;
	BOOL hiddenVoucher;
	BOOL markTravel;
	BOOL markPhone;
	BOOL markVoucher;
	BOOL _showRefreshBtn;
	NSString* bindingMobileNo;
	NSString* travelTitle;
	NSString* phoneTitle;
	NSString* voucherTitle;
	NSDictionary* contextMap;
	double availableBalance;
	double totalAmount;
}
@property(retain, nonatomic) NSDictionary* contextMap;
@property(assign, nonatomic) BOOL showRefreshBtn;
@property(assign, nonatomic) BOOL markVoucher;
@property(assign, nonatomic) BOOL markPhone;
@property(assign, nonatomic) BOOL markTravel;
@property(assign, nonatomic) BOOL hiddenVoucher;
@property(assign, nonatomic) BOOL hiddenPhone;
@property(assign, nonatomic) BOOL hiddenTravel;
@property(assign, nonatomic) BOOL freezeVoucher;
@property(assign, nonatomic) BOOL freezePhone;
@property(assign, nonatomic) BOOL freezeTravel;
@property(retain, nonatomic) NSString* voucherTitle;
@property(retain, nonatomic) NSString* phoneTitle;
@property(retain, nonatomic) NSString* travelTitle;
@property(retain, nonatomic) NSString* bindingMobileNo;
@property(assign, nonatomic) double totalAmount;
@property(assign, nonatomic) double availableBalance;
+(Class)contextMapElementClass;
-(void).cxx_destruct;
-(double)creatTime_voucher;
-(double)createTime;
@end
