/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MSToString.h"

@class NSString;

@interface MSMobileBindVerifyReq : MSToString {
@private
	NSString* _paymentPwd;
	NSString* _authCode;
	NSString* _logonId;
	NSString* _bindMobile;
	NSString* _isp;
}
@property(retain, nonatomic) NSString* isp;
@property(retain, nonatomic) NSString* bindMobile;
@property(retain, nonatomic) NSString* logonId;
@property(retain, nonatomic) NSString* authCode;
@property(retain, nonatomic) NSString* paymentPwd;
-(void).cxx_destruct;
@end
