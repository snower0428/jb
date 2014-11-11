/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "DTCancellable.h"
#import "NSURLConnectionDataDelegate.h"

@class NSURLResponse, NSThread, NSData, NSOutputStream, NSInputStream, NSRecursiveLock, NSString, NSURLRequest, NSError, NSURLConnection, NSSet;

@interface DTURLRequestOperation : XXUnknownSuperclass <NSURLConnectionDataDelegate, DTCancellable> {
@private
	BOOL _cancelled;
	NSURLRequest* _request;
	NSURLResponse* _response;
	NSData* _responseData;
	NSString* _responseString;
	NSError* _error;
	NSInputStream* _inputStream;
	NSOutputStream* _outputStream;
	NSSet* _runLoopModes;
	int _totalBytesRead;
	NSRecursiveLock* _lock;
	NSThread* _runningThread;
	NSThread* _createdThread;
	NSURLConnection* _connection;
	id _responseObject;
	int _state;
}
@property(assign, nonatomic) BOOL cancelled;
@property(assign, nonatomic) int state;
@property(retain, nonatomic) id responseObject;
@property(retain, nonatomic) NSURLConnection* connection;
@property(retain, nonatomic) NSThread* createdThread;
@property(retain, nonatomic) NSThread* runningThread;
@property(retain, nonatomic) NSRecursiveLock* lock;
@property(assign, nonatomic) int totalBytesRead;
@property(retain, nonatomic) NSSet* runLoopModes;
@property(retain, nonatomic) NSOutputStream* outputStream;
@property(retain, nonatomic) NSInputStream* inputStream;
@property(retain, nonatomic) NSError* error;
@property(retain, nonatomic) NSString* responseString;
@property(retain, nonatomic) NSData* responseData;
@property(retain, nonatomic) NSURLResponse* response;
@property(retain, nonatomic) NSURLRequest* request;
+(BOOL)stateTransitionIsValid:(int)valid toState:(int)state cancelled:(BOOL)cancelled;
+(id)keyPathFromState:(int)state;
+(id)URLRequestThread;
+(void)URLRequestThreadProc:(id)proc;
+(id)defaultOperationQueue;
-(void).cxx_destruct;
-(void)connection:(id)connection didFailWithError:(id)error;
-(void)connectionDidFinishLoading:(id)connection;
-(void)connection:(id)connection didReceiveData:(id)data;
-(void)connection:(id)connection didReceiveResponse:(id)response;
-(void)cancelConnection;
-(void)finish;
-(void)startConnection;
-(BOOL)isCancelled;
-(void)cancel;
-(void)start;
-(BOOL)isReady;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isConcurrent;
-(void)didFinish;
-(void)didStart;
-(void)dealloc;
-(void)commonInit;
-(id)initWithRequest:(id)request outputStream:(id)stream;
-(id)initWithRequest:(id)request;
-(id)init;
@end

