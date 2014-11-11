/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSURLConnectionDataDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableData, NSURL, NSURLConnection;

@interface PPChatMediaDownloader : XXUnknownSuperclass <NSURLConnectionDataDelegate> {
@private
	id _onProgress;
	id _onComplete;
	NSURL* _url;
	NSURLConnection* _connection;
	int _totalBytes;
	NSMutableData* _data;
}
@property(retain, nonatomic) NSMutableData* data;
@property(assign, nonatomic) int totalBytes;
@property(readonly, assign, nonatomic) NSURLConnection* connection;
@property(readonly, assign, nonatomic) NSURL* url;
@property(copy, nonatomic) id onComplete;
@property(copy, nonatomic) id onProgress;
+(void)download:(id)download withProgress:(id)progress complete:(id)complete;
-(void).cxx_destruct;
-(void)connection:(id)connection didReceiveData:(id)data;
-(void)connectionDidFinishLoading:(id)connection;
-(void)connection:(id)connection didReceiveResponse:(id)response;
-(void)connection:(id)connection didFailWithError:(id)error;
-(void)start;
-(id)initWithUrl:(id)url;
@end

