//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGRealtimeOperationDelegate.h"
#import "IGWebDataSource.h"

@class IGRealtimeManager, NSArray, NSString;

@interface IGNewsDataSource : NSObject <IGWebDataSource, IGRealtimeOperationDelegate>
{
    BOOL _loadingInbox;
    BOOL _loadingFollowing;
    NSString *_errorMessage;
    id <IGNewsDataSourceDelegate> _delegate;
    NSArray *_feedSections;
    NSArray *_inboxSections;
    IGRealtimeManager *_realtimeManager;
}

+ (id)storiesWithDictionaries:(id)arg1;
@property(retain, nonatomic) IGRealtimeManager *realtimeManager; // @synthesize realtimeManager=_realtimeManager;
@property(nonatomic, getter=isLoadingFollowing) BOOL loadingFollowing; // @synthesize loadingFollowing=_loadingFollowing;
@property(nonatomic, getter=isLoadingInbox) BOOL loadingInbox; // @synthesize loadingInbox=_loadingInbox;
@property(retain, nonatomic) NSArray *inboxSections; // @synthesize inboxSections=_inboxSections;
@property(retain, nonatomic) NSArray *feedSections; // @synthesize feedSections=_feedSections;
@property(nonatomic) __weak id <IGNewsDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
- (void).cxx_destruct;
- (unsigned int)subscriptionStatus;
- (id)pkForRealtimeOperation:(id)arg1;
- (void)handleRealtimeRefreshRequest;
- (void)handleRealtimeOperation:(id)arg1;
- (id)storyForRowAtIndexPath:(id)arg1 segment:(int)arg2;
- (int)numberOfRowsInSection:(int)arg1 segment:(int)arg2;
- (int)numberOfSectionsForSegment:(int)arg1;
- (id)titleForHeaderInSection:(int)arg1 segment:(int)arg2;
- (id)sectionsForSegment:(int)arg1;
- (void)onInboxFetchFailed:(id)arg1;
- (void)onInboxReceived:(id)arg1;
- (void)downloadInboxWithContinuationToken:(id)arg1;
- (void)onFeedFetchFailed:(id)arg1;
- (void)onFeedReceived:(id)arg1;
- (void)downloadFeed;
- (BOOL)isLoadingSegment:(int)arg1;
- (void)fetchFeed;
- (void)fetchInboxWithForce:(BOOL)arg1;
- (void)fetchInbox;
- (void)fetchData;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

