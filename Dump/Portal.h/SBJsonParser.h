/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface SBJsonParser : XXUnknownSuperclass {
@private
	unsigned maxDepth;
	NSString* error;
}
@property(copy) NSString* error;
@property(assign) unsigned maxDepth;
-(void).cxx_destruct;
-(id)objectWithString:(id)string;
-(id)objectWithData:(id)data;
-(id)init;
@end
