/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "Runtime.h"

@class NSMutableString, NSString, CLLocation, UIViewController;

@interface WebappRuntime : XXUnknownSuperclass <Runtime> {
@private
	BOOL SafepayRunning;
	UIViewController* _rootController;
	NSString* _domain;
	NSMutableString* logData;
	int runningCommandCount;
	NSString* userHistory;
	NSString* defaultBackFunction;
	UIViewController* _entryController;
	NSString* webAppStyle;
	CLLocation* recentLocation;
	NSString* popEvent;
	UIViewController* hostController;
}
@property(retain, nonatomic) NSString* popEvent;
@property(assign, nonatomic) UIViewController* hostController;
@property(retain, nonatomic) CLLocation* recentLocation;
@property(retain, nonatomic) NSString* webAppStyle;
@property(retain, nonatomic) NSString* defaultBackFunction;
@property(retain, nonatomic) NSString* userHistory;
@property(assign, nonatomic) BOOL SafepayRunning;
@property(assign, nonatomic) int runningCommandCount;
@property(retain, nonatomic) NSMutableString* logData;
@property(retain, nonatomic) NSString* domain;
@property(assign, nonatomic) UIViewController* entryController;
@property(retain, nonatomic) UIViewController* rootController;
-(void)dealloc;
-(void)loginNotify:(id)notify;
-(id)controllerWithBundleLoader:(id)bundleLoader;
@end
