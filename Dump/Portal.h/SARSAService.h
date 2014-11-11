/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "DTService.h"


@protocol SARSAService <DTService>
-(void)RSAEncryptAsync:(id)async needTS:(BOOL)ts onComplete:(id)complete;
-(id)RSAEncryptSync:(id)sync needTS:(BOOL)ts;
-(void)getRsaAsync:(id)async;
-(id)getRsaSync;
-(id)RSAEncrypt:(id)encrypt needTS:(BOOL)ts;
-(id)RSA;
@end

