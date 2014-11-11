/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface ALPV1CouponHelper : XXUnknownSuperclass {
	NSString* _alipassFolder;
	NSString* _alipassSafeFolder;
}
@property(retain, nonatomic) NSString* alipassSafeFolder;
@property(copy, nonatomic) NSString* alipassFolder;
-(void).cxx_destruct;
-(void)uploadAll:(id)all;
-(id)uploadV1CouponData:(id)data;
-(id)enumAliPassFileName;
-(id)modifyDate:(id)date;
-(void)removeV1CouponFile:(id)file;
-(id)loadAliPassFile:(id)file;
-(id)saveV1CouponDataFromClipboard:(id)clipboard;
-(id)save:(id)save withData:(id)data;
-(id)getPowerSearchPath;
-(BOOL)createDirectory:(id)directory;
-(BOOL)copyV1CouponFile:(id)file;
-(BOOL)isFileExist:(id)exist;
-(BOOL)isDirectoryExist:(id)exist;
-(BOOL)deleteExistFile:(id)file;
-(void)deleteAlipassFile:(id)file;
@end

