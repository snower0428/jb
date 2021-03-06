//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSError, NSString, OFFlickrAPIRequest;

@protocol OFFlickrAPIRequestDelegate <NSObject>

@optional
- (void)flickrAPIRequest:(OFFlickrAPIRequest *)arg1 didObtainOAuthAccessToken:(NSString *)arg2 secret:(NSString *)arg3 userFullName:(NSString *)arg4 userName:(NSString *)arg5 userNSID:(NSString *)arg6;
- (void)flickrAPIRequest:(OFFlickrAPIRequest *)arg1 didObtainOAuthRequestToken:(NSString *)arg2 secret:(NSString *)arg3;
- (void)flickrAPIRequest:(OFFlickrAPIRequest *)arg1 imageUploadSentBytes:(unsigned int)arg2 totalBytes:(unsigned int)arg3;
- (void)flickrAPIRequest:(OFFlickrAPIRequest *)arg1 didFailWithError:(NSError *)arg2;
- (void)flickrAPIRequest:(OFFlickrAPIRequest *)arg1 didCompleteWithResponse:(NSDictionary *)arg2;
@end

