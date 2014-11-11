/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, NSString, NSMutableDictionary;

@interface CardInfoSupported : XXUnknownSuperclass {
	NSString* bankName;
	NSString* bankNamePY;
	NSString* bankMark;
	NSString* arriveDatetime;
	NSString* phoneNumber;
	NSString* amountLimit;
	NSArray* cardBinList;
	NSString* smsPhoneNumber;
	NSMutableDictionary* bankNameDic;
	struct {
		unsigned textChangesMade : 1;
		unsigned updatedAttrString : 1;
		unsigned updatedFramesetter : 1;
	} _infoFlag;
}
@property(assign, nonatomic) BOOL isHot;
@property(assign, nonatomic) BOOL chargeSupport;
@property(assign, nonatomic) BOOL chargeSpeed;
@property(retain, nonatomic) NSMutableDictionary* bankNameDic;
@property(copy, nonatomic) NSString* smsPhoneNumber;
@property(copy, nonatomic) NSArray* cardBinList;
@property(copy, nonatomic) NSString* amountLimit;
@property(copy, nonatomic) NSString* phoneNumber;
@property(copy, nonatomic) NSString* arriveDatetime;
@property(copy, nonatomic) NSString* bankMark;
@property(copy, nonatomic) NSString* bankNamePY;
@property(copy, nonatomic) NSString* bankName;
-(id)description;
-(id)initWithDictionary:(id)dictionary;
-(void)setDataFromOneCard:(id)oneCard;
-(void)_buildPY;
-(id)chineseChar:(id)aChar;
-(void)dealloc;
-(void)clear;
@end
