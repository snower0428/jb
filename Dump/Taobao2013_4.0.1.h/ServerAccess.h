//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURLConnection;

@interface ServerAccess : NSObject
{
    id _infoUpdater;
    NSURLConnection *_connect;
}

+ (id)getInstance;
@property(retain) NSURLConnection *connect; // @synthesize connect=_connect;
@property(retain) id infoUpdater; // @synthesize infoUpdater=_infoUpdater;
- (void).cxx_destruct;
- (id)uploadSyncLog:(id)arg1;
- (id)createLogRequestData:(id)arg1;
- (id)postSyncData:(id)arg1;
- (id)createRequestData:(id)arg1;
- (id)createRequestWithData:(id)arg1 ServiceId:(id)arg2;
- (id)formatDataForServer:(id)arg1;
- (id)postSynchronousHttpMsg:(id)arg1;
- (id)createPostRequest:(id)arg1;

@end
