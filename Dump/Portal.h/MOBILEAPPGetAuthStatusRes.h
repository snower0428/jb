/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface MOBILEAPPGetAuthStatusRes : XXUnknownSuperclass {
@private
	BOOL _signStatus;
	int _resultStatus;
	NSString* _memo;
	NSString* _authCode;
	NSString* _agreementDesc;
	NSString* _agreementUrl;
}
@property(retain, nonatomic) NSString* agreementUrl;
@property(retain, nonatomic) NSString* agreementDesc;
@property(retain, nonatomic) NSString* authCode;
@property(assign, nonatomic) BOOL signStatus;
@property(retain, nonatomic) NSString* memo;
@property(assign, nonatomic) int resultStatus;
-(void).cxx_destruct;
@end
