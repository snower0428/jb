//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CALayer, NSString, UIActivityIndicatorView, UIColor, UIImageView, UILabel;

@interface EGORefreshTableHeaderView : UIView
{
    int _state;
    UILabel *_lastUpdatedLabel;
    UILabel *_statusLabel;
    CALayer *_arrowImage;
    UIActivityIndicatorView *_activityView;
    NSString *_statusNormalText;
    NSString *_statusPullingText;
    NSString *_statusLoadingText;
    float _topDistance;
    int _style;
    UIImageView *_animationImage;
    BOOL _canTriggerRefresh;
    id <EGORefreshTableHeaderDelegate> _delegate;
    UIColor *_textColor;
    UIColor *_shadowColor;
}

@property(retain, nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIImageView *animationImage; // @synthesize animationImage=_animationImage;
@property(nonatomic) int style; // @synthesize style=_style;
@property(nonatomic) id <EGORefreshTableHeaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIActivityIndicatorView *activityView; // @synthesize activityView=_activityView;
@property(readonly, nonatomic) CALayer *arrowImage; // @synthesize arrowImage=_arrowImage;
@property(readonly, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(readonly, nonatomic) UILabel *lastUpdatedLabel; // @synthesize lastUpdatedLabel=_lastUpdatedLabel;
@property(nonatomic) BOOL canTriggerRefresh; // @synthesize canTriggerRefresh=_canTriggerRefresh;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setStatusText:(id)arg1 forStatus:(int)arg2;
- (void)egoRefreshScrollViewDataSourceDidFinishedLoading:(id)arg1;
- (void)egoRefreshScrollViewDidEndDragging:(id)arg1;
- (void)egoRefreshScrollViewDidScroll:(id)arg1;
- (float)getBottomY:(id)arg1;
- (BOOL)isBottomView;
- (void)setState:(int)arg1;
- (void)refreshLastUpdatedDate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)willMoveToSuperview:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 arrowImageName:(id)arg2 textColor:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 arrowImageName:(id)arg2 textColor:(id)arg3 shadowColor:(id)arg4;

@end

