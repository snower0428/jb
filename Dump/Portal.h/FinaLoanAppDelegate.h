/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "FinaCoreController.h"
#import "DTMicroApplicationDelegate.h"


@interface FinaLoanAppDelegate : FinaCoreController <DTMicroApplicationDelegate> {
	BOOL _authing;
}
-(id)rootControllerInApplication:(id)application;
-(void)exit;
-(void)logout;
-(void)login;
-(BOOL)logon;
@end

