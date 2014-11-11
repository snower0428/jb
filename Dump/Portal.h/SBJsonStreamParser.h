/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, SBJsonStreamParserState, NSString, SBJsonStreamTokeniser;
@protocol SBJsonStreamParserDelegate;

@interface SBJsonStreamParser : XXUnknownSuperclass {
@private
	SBJsonStreamTokeniser* tokeniser;
	BOOL supportMultipleDocuments;
	NSString* error;
	id<SBJsonStreamParserDelegate> delegate;
	unsigned maxDepth;
	SBJsonStreamParserState* state;
	NSMutableArray* stateStack;
}
@property(copy) NSString* error;
@property(assign) unsigned maxDepth;
@property(assign) id<SBJsonStreamParserDelegate> delegate;
@property(assign) BOOL supportMultipleDocuments;
@property(readonly, assign, nonatomic) NSMutableArray* stateStack;
@property(assign, nonatomic) SBJsonStreamParserState* state;
-(void).cxx_destruct;
-(id)decodeStringToken:(char*)token length:(unsigned)length;
-(unsigned short)decodeHexQuad:(char*)quad;
-(int)parse:(id)parse;
-(void)handleTokenNotExpectedHere:(int)here;
-(void)handleArrayEnd:(int)end;
-(void)handleArrayStart;
-(void)handleObjectEnd:(int)end;
-(void)handleObjectStart;
-(void)maxDepthError;
-(id)tokenName:(int)name;
-(id)init;
@end

