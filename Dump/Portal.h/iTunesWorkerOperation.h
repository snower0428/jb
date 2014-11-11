/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSURLConnection, NSURLRequest, NSMutableData;

@interface iTunesWorkerOperation : XXUnknownSuperclass {
	BOOL isFinish;
	NSURLRequest* _request;
	NSMutableData* _data;
	id _observer;
	int _command_id;
	NSURLConnection* _connection;
}
-(void)connection:(id)connection didReceiveResponse:(id)response;
-(void)connection:(id)connection didFailWithError:(id)error;
-(void)connectionDidFinishLoading:(id)connection;
-(void)connection:(id)connection didReceiveData:(id)data;
-(void)start;
-(BOOL)isConcurrent;
-(void)cancel;
-(void)dealloc;
-(id)initWithRequest:(id)request delegate:(id)delegate requestId:(int)anId;
@end
