/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableData, NSMutableURLRequest, NSHTTPURLResponse, NSURLConnection;

@interface AliURLCache : XXUnknownSuperclass {
@private
	NSURLConnection* _connection;
	NSMutableData* _data;
	NSHTTPURLResponse* _httpResponse;
	NSMutableURLRequest* _cacheRequest;
}
@property(retain, nonatomic) NSMutableURLRequest* cacheRequest;
@property(retain, nonatomic) NSHTTPURLResponse* httpResponse;
@property(retain, nonatomic) NSMutableData* data;
@property(retain, nonatomic) NSURLConnection* connection;
+(void)deleteCacheWithKey:(unsigned)key;
+(void)setDelegate:(id)delegate;
+(id)canonicalRequestForRequest:(id)request;
+(BOOL)canInitWithRequest:(id)request;
+(void)registerCache;
-(void).cxx_destruct;
-(void)appendData:(id)data;
-(void)stopLoading;
-(void)connectionDidFinishLoading:(id)connection;
-(void)connection:(id)connection didReceiveResponse:(id)response;
-(void)connection:(id)connection didFailWithError:(id)error;
-(void)connection:(id)connection didReceiveData:(id)data;
-(void)startLoading;
-(id)initWithRequest:(id)request cachedResponse:(id)response client:(id)client;
-(void)dealloc;
@end
