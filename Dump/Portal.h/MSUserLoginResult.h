/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface MSUserLoginResult : XXUnknownSuperclass {
@private
	BOOL _wirelessUser;
	BOOL _bindCard;
	int _resultStatus;
	NSString* _memo;
	NSString* _loginId;
	NSString* _userId;
	NSString* _userName;
	NSString* _mobileNo;
	NSString* _isCertified;
	NSString* _loginServerTime;
	NSString* _taobaoSid;
	NSString* _barcodePayToken;
	NSString* _extern_token;
	NSString* _loginToken;
	NSString* _sessionId;
	NSString* _currentProductVersion;
	NSString* _existNewVersion;
	NSString* _downloadURL;
	NSString* _loginCheckCodeUrl;
	NSString* _loginCheckCodeImg;
	NSString* _tbCheckCodeId;
	NSString* _tbCheckCodeUrl;
	NSString* _loginContext;
}
@property(assign, nonatomic) BOOL bindCard;
@property(assign, nonatomic) BOOL wirelessUser;
@property(retain, nonatomic) NSString* loginContext;
@property(retain, nonatomic) NSString* tbCheckCodeUrl;
@property(retain, nonatomic) NSString* tbCheckCodeId;
@property(retain, nonatomic) NSString* loginCheckCodeImg;
@property(retain, nonatomic) NSString* loginCheckCodeUrl;
@property(retain, nonatomic) NSString* downloadURL;
@property(retain, nonatomic) NSString* existNewVersion;
@property(retain, nonatomic) NSString* currentProductVersion;
@property(retain, nonatomic) NSString* sessionId;
@property(retain, nonatomic) NSString* loginToken;
@property(retain, nonatomic) NSString* extern_token;
@property(retain, nonatomic) NSString* barcodePayToken;
@property(retain, nonatomic) NSString* taobaoSid;
@property(retain, nonatomic) NSString* loginServerTime;
@property(retain, nonatomic) NSString* isCertified;
@property(retain, nonatomic) NSString* mobileNo;
@property(retain, nonatomic) NSString* userName;
@property(retain, nonatomic) NSString* userId;
@property(retain, nonatomic) NSString* loginId;
@property(retain, nonatomic) NSString* memo;
@property(assign, nonatomic) int resultStatus;
-(void).cxx_destruct;
@end
