/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BaseOperation.h"

@class NSDictionary, NSString;

@interface PrepareForPublicPaymentOperation : BaseOperation {
	int _chargeType;
	NSString* _city;
	NSString* _key;
	NSString* _instId;
	NSString* _billKey;
	NSDictionary* _response;
}
@property(readonly, assign, nonatomic) NSDictionary* response;
-(void)main;
-(void)dealloc;
-(id)initWithChargeType:(int)chargeType city:(id)city key:(id)key instId:(id)anId billKey:(id)key5;
-(id)initWithChargeType:(int)chargeType city:(id)city key:(id)key;
@end

