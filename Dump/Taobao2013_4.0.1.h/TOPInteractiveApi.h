//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBIInteractiveApi.h"

@class NSMutableDictionary;

@interface TOPInteractiveApi : NSObject <TBIInteractiveApi>
{
    NSMutableDictionary *_protocolParams;
    NSMutableDictionary *_businessParams;
    NSMutableDictionary *_attribute;
}

- (void).cxx_destruct;
- (id)protectedGetOriginASIHttpRequest;
- (void)protectedSetApiMethod:(id)arg1;
- (void)protectedRemoveProtocolParam:(id)arg1;
- (void)protectedSetProtocolParam:(id)arg1 forKey:(id)arg2;
- (void)needSession;
- (id)getAttribute;
- (id)dictToQueryString:(id)arg1;
- (id)getHttpRequest;
- (id)getResponseParser;
- (id)init;

@end

