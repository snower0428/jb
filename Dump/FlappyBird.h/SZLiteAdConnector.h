//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SZLiteAdRequest;

@interface SZLiteAdConnector : NSObject
{
    id <SZLiteAdRequestDelegate> _yrAddelegate;
    SZLiteAdRequest *_request;
}

@property(retain, nonatomic) SZLiteAdRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) id <SZLiteAdRequestDelegate> yrAddelegate; // @synthesize yrAddelegate=_yrAddelegate;
- (void)didFailed:(id)arg1;
- (void)didReceiveAdRequest:(id)arg1;
- (void)sendYRAdRequest:(id)arg1;
- (void)dealloc;

@end
