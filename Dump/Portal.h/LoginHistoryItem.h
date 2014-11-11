/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSCoding.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, NSString, HomeCachedInfo;

@interface LoginHistoryItem : XXUnknownSuperclass <NSCoding> {
	NSString* alipayAccountId;
	NSString* taobaoAccountId;
	NSString* alipayPassword;
	NSString* taobaoPassword;
	NSString* lastPassword;
	NSString* encryptedPassword;
	NSString* userId;
	double lastLoginTime;
	NSString* userName;
	NSString* showAccount;
	NSString* realAccount;
	NSString* unlockKey;
	BOOL isLockSetting;
	NSString* headThumbnailPath;
	HomeCachedInfo* _cachedInfo;
@private
	BOOL _autoLogin;
	BOOL _certified;
	BOOL _soundWaveTipDisplayed;
	NSArray* _storedUserMessages;
	NSString* _balance;
}
@property(retain, nonatomic) NSArray* storedUserMessages;
@property(assign, nonatomic) BOOL soundWaveTipDisplayed;
@property(copy, nonatomic) NSString* balance;
@property(retain, nonatomic) HomeCachedInfo* cachedInfo;
@property(copy, nonatomic) NSString* headThumbnailPath;
@property(assign, nonatomic) BOOL certified;
@property(assign, nonatomic) BOOL autoLogin;
@property(assign, nonatomic) BOOL isLockSetting;
@property(copy, nonatomic) NSString* unlockKey;
@property(copy, nonatomic) NSString* realAccount;
@property(copy, nonatomic) NSString* showAccount;
@property(copy, nonatomic) NSString* userName;
@property(assign, nonatomic) double lastLoginTime;
@property(copy, nonatomic) NSString* userId;
@property(retain, nonatomic) NSString* encryptedPassword;
@property(retain, nonatomic) NSString* lastPassword;
@property(copy, nonatomic) NSString* taobaoPassword;
@property(copy, nonatomic) NSString* alipayPassword;
@property(copy, nonatomic) NSString* taobaoAccountId;
@property(copy, nonatomic) NSString* alipayAccountId;
-(void)dealloc;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(id)_decrypteData:(id)data withPassword:(id)password;
-(id)_encrypteString:(id)string withPassword:(id)password;
@end
