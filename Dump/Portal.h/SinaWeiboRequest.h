/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary, NSMutableData, NSString, SinaWeibo, NSURLConnection;
@protocol SinaWeiboRequestDelegate;

@interface SinaWeiboRequest : XXUnknownSuperclass {
	SinaWeibo* sinaweibo;
	NSString* url;
	NSString* httpMethod;
	NSDictionary* params;
	NSURLConnection* connection;
	NSMutableData* responseData;
	id<SinaWeiboRequestDelegate> delegate;
}
@property(assign, nonatomic) id<SinaWeiboRequestDelegate> delegate;
@property(retain, nonatomic) NSDictionary* params;
@property(retain, nonatomic) NSString* httpMethod;
@property(retain, nonatomic) NSString* url;
@property(assign, nonatomic) SinaWeibo* sinaweibo;
+(id)requestWithAccessToken:(id)accessToken url:(id)url httpMethod:(id)method params:(id)params delegate:(id)delegate;
+(id)requestWithURL:(id)url httpMethod:(id)method params:(id)params delegate:(id)delegate;
+(id)serializeURL:(id)url params:(id)params httpMethod:(id)method;
+(id)getParamValueFromUrl:(id)url paramName:(id)name;
-(void)connection:(id)connection didFailWithError:(id)error;
-(void)connectionDidFinishLoading:(id)connection;
-(id)connection:(id)connection willCacheResponse:(id)response;
-(void)connection:(id)connection didReceiveData:(id)data;
-(void)connection:(id)connection didReceiveResponse:(id)response;
-(void)disconnect;
-(void)connect;
-(void)failedWithError:(id)error;
-(id)errorWithCode:(int)code userInfo:(id)info;
-(id)parseJSONData:(id)data error:(id*)error;
-(void)handleResponseData:(id)data;
-(id)postBodyHasRawData:(BOOL*)data;
-(void)appendUTF8Body:(id)body dataString:(id)string;
-(void)dealloc;
@end
