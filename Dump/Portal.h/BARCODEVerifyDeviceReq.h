/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface BARCODEVerifyDeviceReq : XXUnknownSuperclass {
@private
	NSString* _tid;
	NSString* _imei;
	NSString* _imsi;
	NSString* _vimei;
	NSString* _vimsi;
	NSString* _clientKey;
	NSString* _userId;
}
@property(retain, nonatomic) NSString* userId;
@property(retain, nonatomic) NSString* clientKey;
@property(retain, nonatomic) NSString* vimsi;
@property(retain, nonatomic) NSString* vimei;
@property(retain, nonatomic) NSString* imsi;
@property(retain, nonatomic) NSString* imei;
@property(retain, nonatomic) NSString* tid;
-(void).cxx_destruct;
@end
