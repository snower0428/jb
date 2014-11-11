/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface RSAManager : XXUnknownSuperclass {
	NSString* mRsaPK;
	NSString* mRsaTS;
}
@property(readonly, assign, nonatomic) NSString* rsaTS;
@property(readonly, assign, nonatomic) NSString* rsaPK;
+(id)sharedManager;
-(id)encryptPlainText:(id)text rsaPK:(id)pk rsaTS:(id)ts;
-(id)encryptPlainTextWithoutTimesnap:(id)timesnap;
-(id)encryptPlainText:(id)text;
-(void)dealloc;
-(void)initWithResponse:(id)response;
@end
