/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface MQPSecurity : XXUnknownSuperclass {
}
+(id)decryptWithText:(id)text key:(id)key;
+(id)encryptWithText:(id)text key:(id)key;
+(id)TripleDES:(id)des encryptOrDecrypt:(unsigned)decrypt key:(id)key;
+(id)encrypt:(id)encrypt encryptOrDecrypt:(unsigned)decrypt key:(id)key;
+(id)md5ForData:(id)data;
+(id)sha1ForData:(id)data;
+(id)fullUrlForShortAuctionPicPath:(id)shortAuctionPicPath;
+(id)signString:(id)string;
+(id)urlEncode:(id)encode;
+(id)rsaEncrypt:(id)encrypt pubKey:(id)key;
@end

