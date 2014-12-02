//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MPURLRequestParameter, NSArray, NSString;

@protocol MPOAuthParameterFactory <NSObject>
@property(readonly, nonatomic) NSString *timestamp;
@property(readonly, nonatomic) NSString *signingKey;
@property(retain, nonatomic) NSString *signatureMethod;
- (MPURLRequestParameter *)oauthVersionParameter;
- (MPURLRequestParameter *)oauthNonceParameter;
- (MPURLRequestParameter *)oauthTimestampParameter;
- (MPURLRequestParameter *)oauthSignatureMethodParameter;
- (MPURLRequestParameter *)oauthTokenParameter;
- (MPURLRequestParameter *)oauthConsumerKeyParameter;
- (NSArray *)oauthParameters;
@end

