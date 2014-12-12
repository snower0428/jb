/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "PFAuthenticationProvider.h"

@class PF_Twitter;

@interface PFTwitterAuthenticationProvider : XXUnknownSuperclass <PFAuthenticationProvider> {
	PF_Twitter* twitter;
}
@property(retain, nonatomic) PF_Twitter* twitter;
-(void).cxx_destruct;
-(id)authType;
-(void)cancel;
-(BOOL)restoreAuthentication:(id)authentication;
-(void)deauthenticate;
-(void)authenticateWithSuccess:(id)success failure:(id)failure cancel:(id)cancel;
-(id)authDataWithTwitterId:(id)twitterId screenName:(id)name authToken:(id)token secret:(id)secret;
-(id)initWithTwitter:(id)twitter;
@end
