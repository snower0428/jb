/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSURLResponse, NSData, NSOutputStream, NSInputStream, NSError, NSURLRequest, NSURLConnection, NSSet;

@interface DTURLConnection : XXUnknownSuperclass {
@private
	NSError* _error;
	NSURLRequest* _request;
	NSURLResponse* _response;
	NSData* _responseData;
	NSInputStream* _inputStream;
	NSOutputStream* _outputStream;
	NSSet* _runLoopModes;
	id _completionBlock;
	NSURLConnection* _underlyingConnection;
}
@property(retain, nonatomic) NSURLConnection* underlyingConnection;
@property(copy, nonatomic) id completionBlock;
@property(retain, nonatomic) NSSet* runLoopModes;
@property(retain, nonatomic) NSOutputStream* outputStream;
@property(retain, nonatomic) NSInputStream* inputStream;
@property(retain, nonatomic) NSData* responseData;
@property(retain, nonatomic) NSURLResponse* response;
@property(retain, nonatomic) NSURLRequest* request;
@property(retain, nonatomic) NSError* error;
-(void).cxx_destruct;
-(void)connectionDidComplete;
-(void)connection:(id)connection didFailWithError:(id)error;
-(void)connectionDidFinishLoading:(id)connection;
-(void)connection:(id)connection didReceiveData:(id)data;
-(void)connection:(id)connection didReceiveResponse:(id)response;
-(void)cancelConnection;
-(void)startConnection;
-(id)responseString;
-(void)start;
-(void)scheduleInRunLoop:(id)runLoop forMode:(id)mode;
-(id)initWithURL:(id)url timeoutInterval:(double)interval;
-(id)initWithURL:(id)url;
@end
