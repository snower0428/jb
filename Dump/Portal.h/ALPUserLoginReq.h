/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface ALPUserLoginReq : XXUnknownSuperclass {
@private
	NSString* _loginId;
	NSString* _loginPassword;
	NSString* _loginType;
	NSString* _loginCheckCode;
	NSString* _clientId;
	NSString* _tbCheckCodeId;
	NSString* _tbCheckCode;
	NSString* _clientDigest;
	NSString* _secTS;
	NSString* _productId;
	NSString* _productVersion;
	NSString* _userAgent;
	NSString* _screenWidth;
	NSString* _screenHigh;
	NSString* _channels;
	NSString* _osVersion;
	NSString* _did;
	NSString* _walletKey;
}
@property(retain, nonatomic) NSString* walletKey;
@property(retain, nonatomic) NSString* did;
@property(retain, nonatomic) NSString* osVersion;
@property(retain, nonatomic) NSString* channels;
@property(retain, nonatomic) NSString* screenHigh;
@property(retain, nonatomic) NSString* screenWidth;
@property(retain, nonatomic) NSString* userAgent;
@property(retain, nonatomic) NSString* productVersion;
@property(retain, nonatomic) NSString* productId;
@property(retain, nonatomic) NSString* secTS;
@property(retain, nonatomic) NSString* clientDigest;
@property(retain, nonatomic) NSString* tbCheckCode;
@property(retain, nonatomic) NSString* tbCheckCodeId;
@property(retain, nonatomic) NSString* clientId;
@property(retain, nonatomic) NSString* loginCheckCode;
@property(retain, nonatomic) NSString* loginType;
@property(retain, nonatomic) NSString* loginPassword;
@property(retain, nonatomic) NSString* loginId;
-(void).cxx_destruct;
@end
