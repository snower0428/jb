/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, PFHTTPHeaders, PFHTTPResponseBody, NSOutputStream;

@interface PFHTTPResponse : XXUnknownSuperclass {
	BOOL parseError;
	PFHTTPHeaders* headers;
	PFHTTPResponseBody* body;
	id progressBlock;
	NSOutputStream* responseStream;
	NSString* tempFilePath;
	NSString* targetFilePath;
	NSString* responseString;
}
@property(retain, nonatomic) NSString* responseString;
@property(retain, nonatomic) NSString* targetFilePath;
@property(retain, nonatomic) NSString* tempFilePath;
@property(retain, nonatomic) NSOutputStream* responseStream;
@property(assign, nonatomic) BOOL parseError;
@property(copy, nonatomic) id progressBlock;
@property(retain, nonatomic) PFHTTPResponseBody* body;
@property(retain, nonatomic) PFHTTPHeaders* headers;
+(id)response;
-(void).cxx_destruct;
-(id)maybeCreateResponseString;
-(id)responseData;
-(BOOL)done;
-(int)appendBytes:(const char*)bytes length:(unsigned)length;
-(void)streamBodyToPath:(id)path;
-(id)init;
@end
