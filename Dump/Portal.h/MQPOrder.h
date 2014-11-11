/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSMutableDictionary;

@interface MQPOrder : XXUnknownSuperclass {
@private
	NSString* _partner;
	NSString* _loginToken;
	NSString* _tradeNO;
	NSString* _bizType;
	NSString* _bizNO;
	NSString* _subBizType;
	NSString* _applicationName;
	NSString* _logonId;
	NSString* _cashier;
	NSMutableDictionary* _extraParams;
}
@property(retain, nonatomic) NSMutableDictionary* extraParams;
@property(copy, nonatomic) NSString* cashier;
@property(copy, nonatomic) NSString* logonId;
@property(copy, nonatomic) NSString* applicationName;
@property(copy, nonatomic) NSString* subBizType;
@property(copy, nonatomic) NSString* bizNO;
@property(copy, nonatomic) NSString* bizType;
@property(copy, nonatomic) NSString* tradeNO;
@property(copy, nonatomic) NSString* loginToken;
@property(copy, nonatomic) NSString* partner;
-(id)description;
-(void)dealloc;
-(id)init;
@end

