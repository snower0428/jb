//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSData, NSDictionary, NSError, NSString;

@interface AlixLightRequest : NSOperation
{
    NSError *error;
    double timeoutInterval;
    NSData *response;
    NSString *logs;
    NSString *_url;
    NSDictionary *_paramsDic;
    id _delegate;
    NSDictionary *responseDataDic;
}

@property(retain, nonatomic) NSDictionary *responseDataDic; // @synthesize responseDataDic;
@property(retain, nonatomic) NSString *logs; // @synthesize logs;
@property(retain) NSData *response; // @synthesize response;
@property double timeoutInterval; // @synthesize timeoutInterval;
@property(retain) NSError *error; // @synthesize error;
- (void).cxx_destruct;
- (id)returnRequestModelDictionary;
- (void)main;
- (void)setDelegate:(id)arg1;
- (id)responseString;
- (id)responseData;
- (void)dealloc;
- (id)initWithUrl:(id)arg1 paramsDic:(id)arg2 Log:(id)arg3;

@end
