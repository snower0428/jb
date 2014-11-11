/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class MQPKeychainItemWrapper, NSString, NSArray;

@interface MQPKeychain : XXUnknownSuperclass {
	NSArray* schemes;
	MQPKeychainItemWrapper* keychainItem;
	NSString* urlScheme;
	NSString* _calledScheme;
	NSString* tripleDesKey;
}
@property(retain) NSString* tripleDesKey;
@property(retain, nonatomic) NSString* urlScheme;
@property(retain) MQPKeychainItemWrapper* keychainItem;
@property(retain, nonatomic) NSArray* schemes;
+(id)shared;
-(void)dealloc;
-(void)destoryKeychainWarpper;
-(void)createKeychainWarpper;
-(id)_gainTid:(id)tid;
-(BOOL)_dependAppIsInstalled;
-(id)getVUDIDToKeychain;
-(id)getUDIDToKeychain;
-(id)getTidAndClientKeyInKeychain;
-(void)writeVUDIDToKeychain:(id)keychain;
-(void)writeUDIDToKeychain:(id)keychain;
-(void)writeCertDataToKeychain:(id)keychain;
-(void)writeTidToKeychain:(id)keychain;
-(void)getCertDataFromKeychainAndStore;
-(void)getTidFromKeychainAndStore;
-(void)setUserDefaultTidWithData:(id)data;
-(void)resetKeychain:(id)keychain AndTimeStamp:(double)stamp;
-(BOOL)updateTidIfNeeded;
-(void)cleanTidIfNeeded;
-(id)getKeychainTid;
-(id)init;
@end

