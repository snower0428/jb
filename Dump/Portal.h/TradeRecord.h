/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "KABAOPRODToString.h"

@class NSString;

@interface TradeRecord : KABAOPRODToString {
@private
	NSString* _transItemName;
	NSString* _transAmount;
	NSString* _transDate;
	NSString* _transType;
	NSString* _tradeNo;
}
@property(retain, nonatomic) NSString* tradeNo;
@property(retain, nonatomic) NSString* transType;
@property(retain, nonatomic) NSString* transDate;
@property(retain, nonatomic) NSString* transAmount;
@property(retain, nonatomic) NSString* transItemName;
-(void).cxx_destruct;
@end
