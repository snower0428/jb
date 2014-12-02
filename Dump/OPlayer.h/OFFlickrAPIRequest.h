//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LFHTTPRequest, NSString, OFFlickrAPIContext;

@interface OFFlickrAPIRequest : NSObject
{
    OFFlickrAPIContext *context;
    LFHTTPRequest *HTTPRequest;
    id <OFFlickrAPIRequestDelegate> delegate;
    id sessionInfo;
    NSString *uploadTempFilename;
    id oauthState;
}

- (void)httpRequest:(id)arg1 sentBytes:(unsigned int)arg2 total:(unsigned int)arg3;
- (void)httpRequest:(id)arg1 didFailWithError:(id)arg2;
- (void)httpRequestDidComplete:(id)arg1;
- (BOOL)uploadImageStream:(id)arg1 suggestedFilename:(id)arg2 MIMEType:(id)arg3 arguments:(id)arg4;
- (BOOL)callAPIMethodWithPOST:(id)arg1 arguments:(id)arg2;
- (BOOL)callAPIMethodWithGET:(id)arg1 arguments:(id)arg2;
- (BOOL)fetchOAuthAccessTokenWithRequestToken:(id)arg1 verifier:(id)arg2;
- (BOOL)fetchOAuthRequestTokenWithCallbackURL:(id)arg1;
- (void)cancel;
- (BOOL)isRunning;
@property(nonatomic) double requestTimeoutInterval;
@property(retain, nonatomic) id sessionInfo;
@property(nonatomic) id <OFFlickrAPIRequestDelegate> delegate;
@property(readonly, nonatomic) OFFlickrAPIContext *context;
- (id)initWithAPIContext:(id)arg1;
- (void)dealloc;
- (void)cleanUpTempFile;

@end
