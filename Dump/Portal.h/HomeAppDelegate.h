/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "DTMicroApplicationDelegate.h"

@class UIImagePickerController, HeadImageEditPortal, UIViewController;

@interface HomeAppDelegate : XXUnknownSuperclass <DTMicroApplicationDelegate> {
@private
	HeadImageEditPortal* headEditor;
	BOOL isNavigationBarHidden;
	UIViewController* _rootController;
	UIImagePickerController* _imagePicker;
}
@property(retain, nonatomic) UIImagePickerController* imagePicker;
@property(retain, nonatomic) UIViewController* rootController;
-(void).cxx_destruct;
-(void)applicationWillTerminate:(id)application;
-(void)applicationWillPause:(id)application;
-(void)applicationDidFinishLaunching:(id)application;
-(void)application:(id)application willStartLaunchingWithOptions:(id)options;
-(void)applicationDidCreate:(id)application;
-(id)rootControllerInApplication:(id)application;
-(BOOL)isNavigationBarHidden;
@end

