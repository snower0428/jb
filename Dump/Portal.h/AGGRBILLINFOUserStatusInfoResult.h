/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AGGRBILLINFOResult.h"

@class NSArray, NSString, AGGRBILLINFOBillResult;

@interface AGGRBILLINFOUserStatusInfoResult : AGGRBILLINFOResult {
@private
	NSString* _routeType;
	NSArray* _allEmailsOfUser;
	NSArray* _allBanksOfUser;
	AGGRBILLINFOBillResult* _billResult;
	NSString* _emailAccount;
	NSString* _key;
	NSArray* _bankCardBills;
}
@property(retain, nonatomic) NSArray* bankCardBills;
@property(retain, nonatomic) NSString* key;
@property(retain, nonatomic) NSString* emailAccount;
@property(retain, nonatomic) AGGRBILLINFOBillResult* billResult;
@property(retain, nonatomic) NSArray* allBanksOfUser;
@property(retain, nonatomic) NSArray* allEmailsOfUser;
@property(retain, nonatomic) NSString* routeType;
+(Class)bankCardBillsElementClass;
+(Class)allBanksOfUserElementClass;
+(Class)allEmailsOfUserElementClass;
-(void).cxx_destruct;
@end

