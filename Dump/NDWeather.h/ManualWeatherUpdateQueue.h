//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ASINetworkQueue;

__attribute__((visibility("hidden")))
@interface ManualWeatherUpdateQueue : NSObject
{
    ASINetworkQueue *queue;
    struct dispatch_queue_s *_addRequestQueue;
}

+ (void)unregisterManualWeatherUpdateController:(id)arg1;
+ (void)registerManualWeatherUpdateController:(id)arg1;
+ (id)shareInstance;
@property(nonatomic) struct dispatch_queue_s *addRequestQueue; // @synthesize addRequestQueue=_addRequestQueue;
@property(retain, nonatomic) ASINetworkQueue *queue; // @synthesize queue;
- (void)postManualUpdateFail:(id)arg1;
- (void)postManualUpdateSuccess:(id)arg1;
- (void)postStartManualUpdate:(id)arg1;
- (void)startNewRequest:(id)arg1;
- (BOOL)existPreviousRequest:(id)arg1;
- (void)requestFailed:(id)arg1;
- (void)requestFinished:(id)arg1;
- (void)addNewUpdateRequest:(id)arg1;
- (void)dealloc;
- (id)init;

@end

