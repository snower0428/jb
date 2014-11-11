/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "APConfigService.h"

@class NSDictionary;

@interface APConfigCenter : XXUnknownSuperclass <APConfigService> {
@private
	NSDictionary* _config;
}
@property(retain, nonatomic) NSDictionary* config;
+(id)pathForConfig;
-(void).cxx_destruct;
-(id)stringValueForKey:(id)key;
-(void)fetchConfigFromServer;
-(void)applicationWillEnterForeground:(id)application;
-(void)applicationDidFinishLaunching:(id)application;
-(void)dealloc;
-(void)start;
@end
