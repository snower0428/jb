/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MSToString.h"

@class NSString;

@interface MSCheckUserCertRequest : MSToString {
@private
	NSString* _certNo;
	NSString* _certType;
	NSString* _loginId;
	NSString* _passwordType;
}
@property(retain, nonatomic) NSString* passwordType;
@property(retain, nonatomic) NSString* loginId;
@property(retain, nonatomic) NSString* certType;
@property(retain, nonatomic) NSString* certNo;
-(void).cxx_destruct;
@end

