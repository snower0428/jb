//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ASINetworkQueue;

__attribute__((visibility("hidden")))
@interface AutoWeatherUpdateQueue : NSObject
{
    ASINetworkQueue *queue;
    struct dispatch_queue_s *_successQueue;
    struct dispatch_queue_s *_addRequestQueue;
}

+ (void)unregisterAutoWeatherUpdateController:(id)arg1;
+ (void)registerAutoWeatherUpdateController:(id)arg1;
+ (id)shareInstance;
@property(nonatomic) struct dispatch_queue_s *addRequestQueue; // @synthesize addRequestQueue=_addRequestQueue;
@property(nonatomic) struct dispatch_queue_s *successQueue; // @synthesize successQueue=_successQueue;
@property(retain, nonatomic) ASINetworkQueue *queue; // @synthesize queue;
- (void)postAutoUpdateFail:(id)arg1;
- (void)postAutoUpdateSuccess:(id)arg1;
- (void)postCityStartAutoUpdate:(id)arg1;
- (void)startNewRequest:(id)arg1;
- (BOOL)isInUpdateQueue:(id)arg1;
- (void)requestFailed:(id)arg1;
- (void)requestFinished:(id)arg1;
- (void)addNewAutoUpdateRequest:(id)arg1;
- (void)dealloc;
- (id)init;

@end
