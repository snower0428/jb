//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ASIHTTPRequest;

@interface TBGetDescInfoService : NSObject
{
    ASIHTTPRequest *_request;
}

@property(retain, nonatomic) ASIHTTPRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (void)dealloc;
- (void)clearDelegatesAndCancel;
- (void)requestWithUrl:(id)arg1 success:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;

@end
