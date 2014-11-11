//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSOperation, NSOperationQueue;

@interface SDWebImageDownloader : NSObject
{
    int _executionOrder;
    NSOperationQueue *_downloadQueue;
    NSOperation *_lastAddedOperation;
    NSMutableDictionary *_URLCallbacks;
    NSMutableDictionary *_HTTPHeaders;
    struct dispatch_queue_s *_workingQueue;
    struct dispatch_queue_s *_barrierQueue;
}

+ (id)sharedDownloader;
+ (void)initialize;
@property(nonatomic) struct dispatch_queue_s *barrierQueue; // @synthesize barrierQueue=_barrierQueue;
@property(nonatomic) struct dispatch_queue_s *workingQueue; // @synthesize workingQueue=_workingQueue;
@property(retain, nonatomic) NSMutableDictionary *HTTPHeaders; // @synthesize HTTPHeaders=_HTTPHeaders;
@property(retain, nonatomic) NSMutableDictionary *URLCallbacks; // @synthesize URLCallbacks=_URLCallbacks;
@property(nonatomic) __weak NSOperation *lastAddedOperation; // @synthesize lastAddedOperation=_lastAddedOperation;
@property(retain, nonatomic) NSOperationQueue *downloadQueue; // @synthesize downloadQueue=_downloadQueue;
@property(nonatomic) int executionOrder; // @synthesize executionOrder=_executionOrder;
- (void).cxx_destruct;
- (void)removeCallbacksForURL:(id)arg1;
- (id)callbacksForURL:(id)arg1;
- (void)addProgressCallback:(CDUnknownBlockType)arg1 andCompletedBlock:(CDUnknownBlockType)arg2 forURL:(id)arg3 createCallback:(CDUnknownBlockType)arg4;
- (id)downloadImageWithURL:(id)arg1 options:(int)arg2 progress:(CDUnknownBlockType)arg3 completed:(CDUnknownBlockType)arg4;
@property(nonatomic) int maxConcurrentDownloads;
- (id)valueForHTTPHeaderField:(id)arg1;
- (void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2;
- (void)dealloc;
- (id)init;

@end

