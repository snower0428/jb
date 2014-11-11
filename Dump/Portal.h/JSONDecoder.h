/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "Portal-Structs.h"


@interface JSONDecoder : XXUnknownSuperclass {
	JKParseState* parseState;
}
+(id)decoderWithParseOptions:(unsigned)parseOptions;
+(id)decoder;
-(id)mutableObjectWithData:(id)data error:(id*)error;
-(id)mutableObjectWithData:(id)data;
-(id)mutableObjectWithUTF8String:(const char*)utf8String length:(unsigned)length error:(id*)error;
-(id)mutableObjectWithUTF8String:(const char*)utf8String length:(unsigned)length;
-(id)objectWithData:(id)data error:(id*)error;
-(id)objectWithData:(id)data;
-(id)objectWithUTF8String:(const char*)utf8String length:(unsigned)length error:(id*)error;
-(id)objectWithUTF8String:(const char*)utf8String length:(unsigned)length;
-(id)parseJSONData:(id)data error:(id*)error;
-(id)parseJSONData:(id)data;
-(id)parseUTF8String:(const char*)string length:(unsigned long)length error:(id*)error;
-(id)parseUTF8String:(const char*)string length:(unsigned long)length;
-(void)clearCache;
-(void)dealloc;
-(id)initWithParseOptions:(unsigned)parseOptions;
-(id)init;
@end
