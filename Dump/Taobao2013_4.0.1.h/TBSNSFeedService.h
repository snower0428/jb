//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBSNSBasicService.h"

@interface TBSNSFeedService : TBSNSBasicService
{
    int _feedServiceType;
}

@property(nonatomic) int feedServiceType; // @synthesize feedServiceType=_feedServiceType;
- (void)useDefaultItemClass;
- (void)loadFeedDetailWithFeedId:(unsigned long long)arg1;
- (void)nextPage;
- (void)refreshPagedList;
- (void)loadFeedListWithSNSId:(unsigned long long)arg1 componentId:(unsigned long long)arg2 timestamp:(long)arg3 count:(int)arg4;
- (id)loadFeedListWithSNSId:(unsigned long long)arg1 componentId:(unsigned long long)arg2;
- (id)loadFeedListWithSNSId:(unsigned long long)arg1;
- (id)init;

@end
