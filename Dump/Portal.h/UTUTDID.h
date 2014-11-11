/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UTPersistentConf, NSString, UIPasteboard, UTUTDIDHelper;

@interface UTUTDID : XXUnknownSuperclass {
@private
	NSString* mDomainKey;
	UIPasteboard* mUIPasteBoard;
	NSString* mUtdidKey;
	NSString* mCFUUID;
	NSString* mPrivateKey;
	NSString* mFilePath;
	UTUTDIDHelper* mUtdidHelper;
	UTPersistentConf* mDevicePersistentConfig;
}
+(id)generateUtdid;
+(id)uniqueGlobalDeviceIdentifier;
-(void).cxx_destruct;
-(id)value;
-(void)saveUtdid:(id)utdid;
-(void)syncUtdid;
-(bool)isUtdidValid:(id)valid;
-(id)generateUtdidAndSave;
-(void)preInit;
@end
