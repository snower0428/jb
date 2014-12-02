//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MPOAuthCredentialConcreteStore, MPOAuthURLRequest, MPOAuthURLResponse, NSData, NSError, NSMutableData, NSString;

__attribute__((visibility("hidden")))
@interface MPOAuthAPIRequestLoader : NSObject
{
    MPOAuthCredentialConcreteStore *_credentials;
    MPOAuthURLRequest *_oauthRequest;
    MPOAuthURLResponse *_oauthResponse;
    NSMutableData *_dataBuffer;
    NSString *_dataAsString;
    NSError *_error;
    id _target;
    SEL _action;
}

@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) id target; // @synthesize target=_target;
@property(retain, nonatomic) NSString *responseString; // @synthesize responseString=_dataAsString;
@property(retain, nonatomic) NSData *data; // @synthesize data=_dataBuffer;
@property(retain, nonatomic) MPOAuthURLResponse *oauthResponse; // @synthesize oauthResponse=_oauthResponse;
@property(retain, nonatomic) MPOAuthURLRequest *oauthRequest; // @synthesize oauthRequest=_oauthRequest;
@property(retain, nonatomic) id <MPOAuthCredentialStore><MPOAuthParameterFactory> credentials; // @synthesize credentials=_credentials;
- (void)_interrogateResponseForOAuthData;
- (void)connectionDidFinishLoading:(id)arg1;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)loadSynchronously:(BOOL)arg1;
- (oneway void)dealloc;
- (id)initWithRequest:(id)arg1;
- (id)initWithURL:(id)arg1;

@end

