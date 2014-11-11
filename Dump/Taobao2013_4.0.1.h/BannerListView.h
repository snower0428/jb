//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "TMImageDownloaderDelegate.h"
#import "TMScrollGroupDataSource.h"
#import "TMScrollGroupDelegate.h"

@class NSMutableArray, NSTimer, TMPointIndicator, TMScrollGroup;

@interface BannerListView : UIView <TMScrollGroupDataSource, TMScrollGroupDelegate, TMImageDownloaderDelegate>
{
    TMScrollGroup *_scrollGroup;
    TMPointIndicator *_scrollIndicator;
    NSMutableArray *_bannerArray;
    NSTimer *_scrollTimer;
    int _scrollIndex;
    id <BannerListViewDelegate> _delegate;
}

@property(nonatomic) id <BannerListViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int scrollIndex; // @synthesize scrollIndex=_scrollIndex;
@property(retain, nonatomic) NSTimer *scrollTimer; // @synthesize scrollTimer=_scrollTimer;
@property(retain, nonatomic) NSMutableArray *bannerArray; // @synthesize bannerArray=_bannerArray;
@property(retain, nonatomic) TMPointIndicator *scrollIndicator; // @synthesize scrollIndicator=_scrollIndicator;
@property(retain, nonatomic) TMScrollGroup *scrollGroup; // @synthesize scrollGroup=_scrollGroup;
- (void).cxx_destruct;
- (void)tmImageDownloaderSuccess:(id)arg1 request:(id)arg2 data:(id)arg3;
- (void)scrollGroup:(id)arg1 didSelectViewAtIndex:(unsigned int)arg2;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (id)scrollGroup:(id)arg1 itemForGroupAtIndex:(unsigned int)arg2;
- (int)numberOfItemsInScrollGroup:(id)arg1;
- (void)removeFromSuperview;
- (void)dealloc;
- (void)scrollGroupToFirst;
- (void)setBannerListData:(id)arg1;
- (void)scrollTimerSelector:(id)arg1;
- (void)stopScrollTimer;
- (void)startScrollTimer;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

