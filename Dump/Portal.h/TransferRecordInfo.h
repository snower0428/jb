/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface TransferRecordInfo : XXUnknownSuperclass {
	NSString* bizType;
	NSString* userId;
	NSString* recvMobile;
	NSString* recvName;
	NSString* recvAccount;
}
@property(retain, nonatomic) NSString* recvAccount;
@property(retain, nonatomic) NSString* recvName;
@property(retain, nonatomic) NSString* recvMobile;
@property(retain, nonatomic) NSString* userId;
@property(retain, nonatomic) NSString* bizType;
-(id)accountForType;
-(id)initWithDictionary:(id)dictionary;
-(void)dealloc;
@end
