/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BaseOperation.h"

@class NSString;

@interface APPaipaiResultOperation : BaseOperation {
	NSString* _loginAccount;
	NSString* _QRCode;
	BOOL _result;
}
-(void)main;
-(void)dealloc;
-(id)initWithQRCode:(id)qrcode isSuccess:(BOOL)success;
@end

