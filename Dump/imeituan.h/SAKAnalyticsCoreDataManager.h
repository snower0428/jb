//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SAKAnalyticsManager.h"

@class NSManagedObjectContext, NSManagedObjectModel, NSPersistentStoreCoordinator, NSURL, SAKAnalyticsHeader;

@interface SAKAnalyticsCoreDataManager : NSObject <SAKAnalyticsManager>
{
    SAKAnalyticsHeader *_header;
    NSURL *_modelURL;
    NSURL *_persistentURL;
    NSManagedObjectModel *_model;
    NSPersistentStoreCoordinator *_storeCoordinator;
    NSManagedObjectContext *_context;
    struct dispatch_queue_s *_queue;
    NSURL *_headerURL;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSURL *headerURL; // @synthesize headerURL=_headerURL;
@property(nonatomic) struct dispatch_queue_s *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
@property(retain, nonatomic) NSPersistentStoreCoordinator *storeCoordinator; // @synthesize storeCoordinator=_storeCoordinator;
@property(retain, nonatomic) NSManagedObjectModel *model; // @synthesize model=_model;
@property(retain, nonatomic) NSURL *persistentURL; // @synthesize persistentURL=_persistentURL;
@property(retain, nonatomic) NSURL *modelURL; // @synthesize modelURL=_modelURL;
@property(retain, nonatomic) SAKAnalyticsHeader *header; // @synthesize header=_header;
- (void).cxx_destruct;
- (void)removeHistoryAnalytics:(CDUnknownBlockType)arg1;
- (void)saveHeader:(id)arg1 events:(id)arg2 finished:(CDUnknownBlockType)arg3;
- (void)saveHeader:(id)arg1 events:(id)arg2 error:(id *)arg3;
- (id)init;

@end
