//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBSNSBasicView.h"

#import "TBSNSBasicServiceDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSIndexPath, TBSNSFeedService, TBSNSRelationService;

@interface TBSNSTableViewDemo : TBSNSBasicView <UITableViewDataSource, UITableViewDelegate, UIScrollViewDelegate, TBSNSBasicServiceDelegate>
{
    NSIndexPath *_favoriteIndexPath;
    TBSNSRelationService *_favoriteOperationService;
    TBSNSFeedService *_feedService;
    unsigned long long _componentId;
}

@property(nonatomic) unsigned long long componentId; // @synthesize componentId=_componentId;
@property(retain, nonatomic) TBSNSFeedService *feedService; // @synthesize feedService=_feedService;
- (void).cxx_destruct;
- (void)loadImagesForOnscreenRows;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)serviceDidFinishLoad:(id)arg1;
- (void)service:(id)arg1 didFailLoadWithError:(id)arg2;
- (id)getItemAtIndex:(int)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 getCellForItem:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)setFavoriteStatus:(id)arg1 isLiked:(BOOL)arg2;
- (void)accountFavoriteOperationNotification:(id)arg1;
- (void)accountFavoriteOperation:(id)arg1;
- (void)nextPage;
- (BOOL)needRefresh;
- (void)loadListData;
- (void)setupView;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithObjId:(unsigned long long)arg1 componentId:(unsigned long long)arg2 Frame:(struct CGRect)arg3;
- (void)dealloc;

@end
