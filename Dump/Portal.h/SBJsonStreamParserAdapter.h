/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SBJsonStreamParserDelegate.h"

@class NSMutableArray, NSMutableDictionary;
@protocol SBJsonStreamParserAdapterDelegate;

@interface SBJsonStreamParserAdapter : XXUnknownSuperclass <SBJsonStreamParserDelegate> {
@private
	unsigned depth;
	NSMutableArray* array;
	NSMutableDictionary* dict;
	NSMutableArray* keyStack;
	NSMutableArray* stack;
	int currentType;
	id<SBJsonStreamParserAdapterDelegate> delegate;
	unsigned levelsToSkip;
}
@property(assign) id<SBJsonStreamParserAdapterDelegate> delegate;
@property(assign) unsigned levelsToSkip;
-(void).cxx_destruct;
-(void)parser:(id)parser foundString:(id)string;
-(void)parser:(id)parser foundNumber:(id)number;
-(void)parserFoundNull:(id)null;
-(void)parser:(id)parser foundBoolean:(BOOL)boolean;
-(void)parserFoundArrayEnd:(id)end;
-(void)parserFoundArrayStart:(id)start;
-(void)parserFoundObjectEnd:(id)end;
-(void)parser:(id)parser foundObjectKey:(id)key;
-(void)parserFoundObjectStart:(id)start;
-(void)parser:(id)parser found:(id)found;
-(void)pop;
-(id)init;
@end

