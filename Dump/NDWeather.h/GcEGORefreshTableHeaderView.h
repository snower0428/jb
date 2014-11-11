//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CALayer, NSDate, UIActivityIndicatorView, UILabel;

@interface GcEGORefreshTableHeaderView : UIView
{
    id _delegate;
    int _state;
    UILabel *_lastUpdatedLabel;
    UILabel *_statusLabel;
    CALayer *_arrowImage;
    UIActivityIndicatorView *_activityView;
    NSDate *dateLastUpdate;
    BOOL bHasUpdateLabelTip;
}

- (id)initWithFrame:(struct CGRect)arg1;
- (id)currentLocale;
- (id)formatRelativeTime:(id)arg1;
- (void)updateLabelTip;
- (void)refreshLastUpdatedDate;
- (void)setState:(int)arg1;
- (void)egoRefreshScrollViewDidScroll:(id)arg1;
- (void)egoRefreshScrollViewDidEndDragging:(id)arg1;
- (void)egoRefreshScrollViewDataSourceDidFinishedLoading:(id)arg1;
- (void)dealloc;
@property(retain, nonatomic) NSDate *dateLastUpdate; // @synthesize dateLastUpdate;
@property(nonatomic) id <GcEGORefreshTableHeaderDelegate> delegate; // @synthesize delegate=_delegate;

@end

