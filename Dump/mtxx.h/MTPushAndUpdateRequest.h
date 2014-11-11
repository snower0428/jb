//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ASIHTTPRequest;

__attribute__((visibility("hidden")))
@interface MTPushAndUpdateRequest : NSObject
{
    ASIHTTPRequest *_checkRequest;
    ASIHTTPRequest *_updateCheckRequest;
    id <MTPushAndUpdateRequestDeleage> _delegate;
}

@property(nonatomic) __weak id <MTPushAndUpdateRequestDeleage> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) ASIHTTPRequest *updateCheckRequest; // @synthesize updateCheckRequest=_updateCheckRequest;
@property(retain, nonatomic) ASIHTTPRequest *checkRequest; // @synthesize checkRequest=_checkRequest;
- (void).cxx_destruct;
- (void)requestVersionUpdateInfoDidFail:(id)arg1;
- (void)requestVersionUpdateInfoDidFinish:(id)arg1;
- (void)requestInternalPushInfoDidFail:(id)arg1;
- (void)requestInternalPushInfoDidFinish:(id)arg1;
- (void)dealloc;
- (void)canceledChecks;
- (void)checkVersionUpdate:(id)arg1;
- (void)checkAll:(id)arg1;

@end

