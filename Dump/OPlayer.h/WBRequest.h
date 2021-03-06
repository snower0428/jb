//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableData, NSString, NSURLConnection;

__attribute__((visibility("hidden")))
@interface WBRequest : NSObject
{
    NSString *url;
    NSString *httpMethod;
    NSDictionary *params;
    int postDataType;
    NSDictionary *httpHeaderFields;
    NSURLConnection *connection;
    NSMutableData *responseData;
    id <WBRequestDelegate> delegate;
}

+ (id)serializeURL:(id)arg1 params:(id)arg2 httpMethod:(id)arg3;
+ (id)requestWithAccessToken:(id)arg1 url:(id)arg2 httpMethod:(id)arg3 params:(id)arg4 postDataType:(int)arg5 httpHeaderFields:(id)arg6 delegate:(id)arg7;
+ (id)requestWithURL:(id)arg1 httpMethod:(id)arg2 params:(id)arg3 postDataType:(int)arg4 httpHeaderFields:(id)arg5 delegate:(id)arg6;
+ (void)appendUTF8Body:(id)arg1 dataString:(id)arg2;
+ (id)stringFromDictionary:(id)arg1;
@property(nonatomic) id <WBRequestDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) NSDictionary *httpHeaderFields; // @synthesize httpHeaderFields;
@property int postDataType; // @synthesize postDataType;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params;
@property(retain, nonatomic) NSString *httpMethod; // @synthesize httpMethod;
@property(retain, nonatomic) NSString *url; // @synthesize url;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)disconnect;
- (void)connect;
- (void)failedWithError:(id)arg1;
- (id)errorWithCode:(int)arg1 userInfo:(id)arg2;
- (id)parseJSONData:(id)arg1 error:(id *)arg2;
- (void)handleResponseData:(id)arg1;
- (id)postBody;
- (void)dealloc;

@end

