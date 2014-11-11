//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTBaseService.h"

#import "MTListService.h"
#import "MTUserBasedService.h"

@class MTMessageCenterModel, MTMessageDAO, MTMessageResponse, NSString, SAKUser;

@interface MTMessageCenterService : MTBaseService <MTListService, MTUserBasedService>
{
    BOOL _isLoading;
    int _pageLimit;
    int _unread;
    MTMessageCenterModel *_model;
    MTMessageDAO *_DAO;
    NSString *_requestFingerPrint;
    MTMessageResponse *_response;
    int _offset;
    int _total;
}

@property BOOL isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) int total; // @synthesize total=_total;
@property(nonatomic) int offset; // @synthesize offset=_offset;
@property(retain, nonatomic) MTMessageResponse *response; // @synthesize response=_response;
@property(readonly, nonatomic) NSString *requestFingerPrint; // @synthesize requestFingerPrint=_requestFingerPrint;
@property(readonly, nonatomic) MTMessageDAO *DAO; // @synthesize DAO=_DAO;
@property(readonly, nonatomic) MTMessageCenterModel *model; // @synthesize model=_model;
@property(nonatomic) int unread; // @synthesize unread=_unread;
@property(nonatomic) int pageLimit; // @synthesize pageLimit=_pageLimit;
- (void).cxx_destruct;
- (void)saveCachedPermanentRedCount:(int)arg1;
- (void)loadCachedPermanentRedCount:(CDUnknownBlockType)arg1;
- (void)saveOrUpdateMessage:(id)arg1;
- (void)loadCachedMessages:(CDUnknownBlockType)arg1;
- (void)loadRedCount:(CDUnknownBlockType)arg1;
- (void)clearAllMessage:(CDUnknownBlockType)arg1;
- (void)markAllMessageAsRead:(CDUnknownBlockType)arg1;
- (void)refreshCount:(CDUnknownBlockType)arg1;
- (void)refreshTotalAndUnreadCount:(CDUnknownBlockType)arg1;
- (void)loadTotalAndUnreadCount:(CDUnknownBlockType)arg1;
- (void)loadCount:(CDUnknownBlockType)arg1;
- (void)resetDataList;
- (void)refreshData:(CDUnknownBlockType)arg1;
- (void)loadMore:(CDUnknownBlockType)arg1;
- (BOOL)hasMore;
- (void)requestMessageList:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) SAKUser *user;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) BOOL isPageEnabled;

@end
