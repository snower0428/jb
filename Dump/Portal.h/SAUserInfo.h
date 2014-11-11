/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSCoding.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface SAUserInfo : XXUnknownSuperclass <NSCoding> {
@private
	BOOL _autoLoginEnabled;
	BOOL _isLoginState;
	BOOL _needResetGeusture;
	BOOL _isSkipGesture;
	BOOL _isCertified;
	BOOL _mobileBinded;
	BOOL _setSecurityQA;
	BOOL _openedUKey;
	BOOL _openedDigitalCert;
	BOOL _openedDynamicPwd;
	BOOL _openedMobileOtp;
	BOOL _isBindCard;
	NSString* _loginId;
	NSString* _taobaoLoginId;
	NSString* _userId;
	NSString* _iconUrl;
	NSString* _loginServerTime;
	NSString* _taobaoSid;
	NSString* _barcodePayToken;
	NSString* _extern_token;
	NSString* _loginToken;
	NSString* _sessionId;
	NSString* _currentProductVersion;
	NSString* _appId;
	NSString* _existNewVersion;
	NSString* _updateMemo;
	NSString* _downloadURL;
	NSString* _loginCheckCodeUrl;
	NSString* _loginCheckCodeImg;
	NSString* _tbCheckCodeId;
	NSString* _tbCheckCodeUrl;
	NSString* _loginContext;
	NSString* _password;
	unsigned _loginType;
	NSString* _swPwdSwitch;
	NSString* _gesturePassword;
	int _gestureTryCount;
	NSString* _userName;
	NSString* _mobileNo;
	NSString* _lastSecurityScore;
	unsigned _accountType;
}
@property(assign, nonatomic) BOOL isBindCard;
@property(assign, nonatomic) unsigned accountType;
@property(copy, nonatomic) NSString* lastSecurityScore;
@property(assign, nonatomic) BOOL openedMobileOtp;
@property(assign, nonatomic) BOOL openedDynamicPwd;
@property(assign, nonatomic) BOOL openedDigitalCert;
@property(assign, nonatomic) BOOL openedUKey;
@property(assign, nonatomic) BOOL setSecurityQA;
@property(assign, nonatomic) BOOL mobileBinded;
@property(assign, nonatomic) BOOL isCertified;
@property(copy, nonatomic) NSString* mobileNo;
@property(copy, nonatomic) NSString* userName;
@property(assign, nonatomic) int gestureTryCount;
@property(assign, nonatomic) BOOL isSkipGesture;
@property(assign, nonatomic) BOOL needResetGeusture;
@property(copy, nonatomic) NSString* gesturePassword;
@property(copy, nonatomic) NSString* swPwdSwitch;
@property(assign, nonatomic) BOOL isLoginState;
@property(assign, nonatomic) unsigned loginType;
@property(copy, nonatomic) NSString* password;
@property(copy, nonatomic) NSString* loginContext;
@property(copy, nonatomic) NSString* tbCheckCodeUrl;
@property(copy, nonatomic) NSString* tbCheckCodeId;
@property(copy, nonatomic) NSString* loginCheckCodeImg;
@property(copy, nonatomic) NSString* loginCheckCodeUrl;
@property(copy, nonatomic) NSString* downloadURL;
@property(copy, nonatomic) NSString* updateMemo;
@property(copy, nonatomic) NSString* existNewVersion;
@property(copy, nonatomic) NSString* appId;
@property(copy, nonatomic) NSString* currentProductVersion;
@property(retain, nonatomic) NSString* sessionId;
@property(copy, nonatomic) NSString* loginToken;
@property(copy, nonatomic) NSString* extern_token;
@property(copy, nonatomic) NSString* barcodePayToken;
@property(copy, nonatomic) NSString* taobaoSid;
@property(copy, nonatomic) NSString* loginServerTime;
@property(copy, nonatomic) NSString* iconUrl;
@property(assign, nonatomic) BOOL autoLoginEnabled;
@property(copy, nonatomic) NSString* userId;
@property(copy, nonatomic) NSString* taobaoLoginId;
@property(copy, nonatomic) NSString* loginId;
-(void).cxx_destruct;
-(id)decodeObjectAndDecryptWithCoder:(id)coder key:(id)key;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(id)init;
@end

