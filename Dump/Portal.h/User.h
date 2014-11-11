/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, NSString;

@interface User : XXUnknownSuperclass {
	NSString* _accountId;
	NSString* _password;
	NSString* _userId;
	NSString* _balance;
	NSString* _name;
	NSString* _accountType;
	NSString* _mobileNO;
	NSString* _token;
	NSString* _barcodeToken;
	NSString* _loginToken;
	NSString* _qrCodePrefix;
	int _messageCount;
	NSString* _tradeRecordTime;
	NSString* _lastTradeRecordTime;
	int _tradeCount;
	BOOL _autoLogin;
	BOOL _authenticated;
	BOOL _isLoginState;
	BOOL _isCertified;
	BOOL _alreadyReadTradeList;
	NSArray* _storedUserMessages;
	NSString* _taobaoSid;
	NSString* _lastLoginTime;
}
@property(copy, nonatomic) NSString* lastLoginTime;
@property(copy, nonatomic) NSString* taobaoSid;
@property(assign, nonatomic) BOOL isLoginState;
@property(assign, nonatomic, getter=hasAuthenticated) BOOL authenticated;
@property(assign, nonatomic, getter=isAutoLogin) BOOL autoLogin;
@property(assign, nonatomic) int tradeCount;
@property(assign, nonatomic) int messageCount;
@property(retain, nonatomic) NSArray* storedUserMessages;
@property(copy, nonatomic) NSString* loginToken;
@property(copy, nonatomic) NSString* barcodeToken;
@property(copy, nonatomic) NSString* lastTradeRecordTime;
@property(copy, nonatomic) NSString* tradeRecordTime;
@property(copy, nonatomic) NSString* mobileNO;
@property(copy, nonatomic) NSString* accountType;
@property(copy, nonatomic) NSString* password;
@property(copy, nonatomic) NSString* balance;
@property(assign, nonatomic) BOOL isCertified;
@property(copy, nonatomic) NSString* qrCodePrefix;
@property(copy, nonatomic) NSString* token;
@property(copy, nonatomic) NSString* name;
@property(copy, nonatomic) NSString* userId;
@property(copy, nonatomic) NSString* accountId;
+(void)logout;
+(id)currentUser;
+(void)setCurrentUser:(id)user;
+(void)initWithDictionary:(id)dictionary;
+(void)initWithSAUerInfo:(id)sauerInfo;
-(void)setAlreadyReadTradeList:(BOOL)list;
-(void)setLastUpdateTradeRecordTime:(id)time;
-(id)getLastUpdateTradeRecordTime;
-(BOOL)alreadyReadTradeList;
-(id)initWithLoginHistoryItem:(id)loginHistoryItem;
-(void)dealloc;
@end

