/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BaseOperation.h"

@class NSString;

@interface APGetBarcodeByLicenseOperation : BaseOperation {
	NSString* _account;
	NSString* _barcodeKey;
	NSString* _barcodePrefix;
	NSString* _externToken;
	NSString* _barcodePayToken;
	NSString* _returnAccount;
	BOOL _isActive;
}
@property(readonly, assign, nonatomic) NSString* returnAccount;
@property(readonly, assign, nonatomic) NSString* barcodePayToken;
@property(readonly, assign, nonatomic) NSString* externToken;
@property(readonly, assign, nonatomic) NSString* barcodePrefix;
@property(readonly, assign, nonatomic) NSString* barcodeKey;
@property(readonly, assign, nonatomic) BOOL isReturnUserId;
-(void)main;
-(void)dealloc;
-(id)initWithAccount:(id)account isActive:(BOOL)active;
@end
