/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface COCBaseReqVO : XXUnknownSuperclass {
@private
	NSString* _service;
	NSString* _appId;
	NSString* _authCode;
	NSString* _authCodeValidate;
	NSString* _aliUserId;
	NSString* _sessionId;
}
@property(retain, nonatomic) NSString* sessionId;
@property(retain, nonatomic) NSString* aliUserId;
@property(retain, nonatomic) NSString* authCodeValidate;
@property(retain, nonatomic) NSString* authCode;
@property(retain, nonatomic) NSString* appId;
@property(retain, nonatomic) NSString* service;
-(void).cxx_destruct;
-(id)init;
@end
