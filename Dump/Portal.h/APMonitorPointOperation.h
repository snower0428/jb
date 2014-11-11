/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSData, NSMutableData, NSString, NSURLConnection;

@interface APMonitorPointOperation : XXUnknownSuperclass {
@private
	id _delegate;
	NSData* _postData;
	NSString* _URL;
	NSURLConnection* _connection;
	NSMutableData* _responseData;
}
@property(retain, nonatomic) NSMutableData* responseData;
@property(retain, nonatomic) NSURLConnection* connection;
@property(retain, nonatomic) NSString* URL;
@property(retain, nonatomic) NSData* postData;
@property(assign, nonatomic) id delegate;
-(void).cxx_destruct;
-(void)connection:(id)connection didReceiveResponse:(id)response;
-(void)connection:(id)connection didFailWithError:(id)error;
-(void)connectionDidFinishLoading:(id)connection;
-(void)connection:(id)connection didReceiveData:(id)data;
-(void)main;
-(void)cancel;
-(id)initWithPostData:(id)postData;
-(void)dealloc;
@end
