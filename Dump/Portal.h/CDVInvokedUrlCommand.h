/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSMutableArray, NSMutableDictionary;

@interface CDVInvokedUrlCommand : XXUnknownSuperclass {
	NSString* className;
	NSString* methodName;
	NSMutableArray* arguments;
	NSMutableDictionary* options;
}
@property(copy) NSString* methodName;
@property(copy) NSString* className;
@property(retain) NSMutableDictionary* options;
@property(retain) NSMutableArray* arguments;
+(id)commandFromObject:(id)object;
-(void)dealloc;
@end

