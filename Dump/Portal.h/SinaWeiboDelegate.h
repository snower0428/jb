/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol SinaWeiboDelegate <NSObject>
@optional
-(void)sinaweibo:(id)sinaweibo accessTokenInvalidOrExpired:(id)expired;
-(void)sinaweibo:(id)sinaweibo logInDidFailWithError:(id)logIn;
-(void)sinaweiboLogInDidCancel:(id)sinaweiboLogIn;
-(void)sinaweiboDidLogOut:(id)sinaweibo;
-(void)sinaweiboDidLogIn:(id)sinaweibo;
@end

