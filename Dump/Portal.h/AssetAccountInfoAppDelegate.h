/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "DTMicroApplicationDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIViewController;

@interface AssetAccountInfoAppDelegate : XXUnknownSuperclass <DTMicroApplicationDelegate> {
@private
	UIViewController* _rootController;
}
@property(retain, nonatomic) UIViewController* rootController;
-(void).cxx_destruct;
-(void)applicationWillTerminate:(id)application;
-(void)applicationWillPause:(id)application;
-(void)applicationDidFinishLaunching:(id)application;
-(BOOL)goToErrorView:(id)errorView;
-(void)application:(id)application willResumeWithOptions:(id)options;
-(void)application:(id)application willStartLaunchingWithOptions:(id)options;
-(void)applicationDidCreate:(id)application;
-(id)rootControllerInApplication:(id)application;
@end

