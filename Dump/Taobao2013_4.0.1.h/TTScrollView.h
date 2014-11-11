//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSDate, NSDictionary, NSMutableArray, NSTimer, UITouch;

@interface TTScrollView : UIView
{
    int _centerPageIndex;
    int _visiblePageIndex;
    BOOL _scrollEnabled;
    BOOL _zoomEnabled;
    BOOL _rotateEnabled;
    float _pageSpacing;
    double _holdsAfterTouchingForInterval;
    int _orientation;
    id <TTScrollViewDelegate> _delegate;
    id <TTScrollViewDataSource> _dataSource;
    NSMutableArray *_pages;
    NSMutableArray *_pageQueue;
    int _maxPages;
    int _pageArrayIndex;
    NSTimer *_tapTimer;
    NSTimer *_holdingTimer;
    NSTimer *_animationTimer;
    NSDate *_animationStartTime;
    double _animationDuration;
    struct UIEdgeInsets _animateEdges;
    struct CGPoint _inertiaSpeed;
    struct CGPoint _renewPosition;
    float _maximumZoomScale;
    float _zoomScale;
    struct CGPoint centerOfFingers;
    float actualDistanceBetweenFingers;
    float distanceBetweenFingers;
    float _decelerationRate;
    struct UIEdgeInsets _pageEdges;
    struct UIEdgeInsets _pageStartEdges;
    struct UIEdgeInsets _touchEdges;
    struct UIEdgeInsets _touchStartEdges;
    unsigned int _touchCount;
    float _overshoot;
    BOOL _nextLayoutAnimated;
    double _centerPageAnimationDuration;
    UITouch *_touch1;
    UITouch *_touch2;
    BOOL _dragging;
    BOOL _decelerating;
    BOOL _zooming;
    BOOL _executingZoomGesture;
    BOOL _holding;
}

@property double centerPageAnimationDuration; // @synthesize centerPageAnimationDuration=_centerPageAnimationDuration;
@property(readonly) BOOL isDragging; // @synthesize isDragging=_dragging;
@property(readonly, nonatomic) BOOL zooming; // @synthesize zooming=_executingZoomGesture;
@property(nonatomic) float maximumZoomScale; // @synthesize maximumZoomScale=_maximumZoomScale;
@property(readonly, nonatomic, getter=isDecelerating) BOOL decelerating; // @synthesize decelerating=_decelerating;
@property float decelerationRate; // @synthesize decelerationRate=_decelerationRate;
@property(nonatomic) double holdsAfterTouchingForInterval; // @synthesize holdsAfterTouchingForInterval=_holdsAfterTouchingForInterval;
@property(readonly, nonatomic) BOOL holding; // @synthesize holding=_holding;
@property(nonatomic) int orientation; // @synthesize orientation=_orientation;
@property(nonatomic) BOOL rotateEnabled; // @synthesize rotateEnabled=_rotateEnabled;
@property(nonatomic) BOOL zoomEnabled; // @synthesize zoomEnabled=_zoomEnabled;
@property(nonatomic) BOOL scrollEnabled; // @synthesize scrollEnabled=_scrollEnabled;
@property(nonatomic) float pageSpacing; // @synthesize pageSpacing=_pageSpacing;
@property(nonatomic) int centerPageIndex; // @synthesize centerPageIndex=_centerPageIndex;
@property(nonatomic) id <TTScrollViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) id <TTScrollViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)cancelTouches;
- (void)zoomToDistance:(float)arg1;
- (void)zoomToFit;
- (void)setZoomScale:(float)arg1 withPoint:(struct CGPoint)arg2 animated:(BOOL)arg3;
- (void)setZoomScale:(float)arg1 animated:(BOOL)arg2;
@property(nonatomic) float zoomScale; // @synthesize zoomScale=_zoomScale;
- (id)pageAtIndex:(int)arg1;
- (void)reloadData;
- (id)dequeueReusablePage;
- (void)setOrientation:(int)arg1 animated:(BOOL)arg2;
@property(readonly, nonatomic) NSDictionary *visiblePages;
@property(readonly, nonatomic) UIView *centerPage;
@property(readonly, nonatomic) int numberOfPages;
- (void)setCenterPageIndex:(int)arg1 animated:(BOOL)arg2;
@property(readonly, nonatomic) BOOL zoomed;
- (void)deviceOrientationDidChange:(void *)arg1;
- (void)didMoveToSuperview;
- (void)layoutSubviews;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)ensureTouches;
- (struct UIEdgeInsets)squareEdgesUsingFingerDistancesAndAnchorPoint:(struct CGPoint)arg1;
- (struct UIEdgeInsets)squareEdgesUsingZoomScale:(float)arg1 andAnchorPoint:(struct CGPoint)arg2;
- (float)calculateZoomScaleUsingFingerDistances;
- (float)distanceBetweenPointA:(struct CGPoint)arg1 andB:(struct CGPoint)arg2;
- (struct CGPoint)midpointBetweenPointA:(struct CGPoint)arg1 andB:(struct CGPoint)arg2;
- (void)inertiaAnimator;
- (void)animator2;
- (void)animator;
- (float)tween:(double)arg1 b:(double)arg2 c:(double)arg3 d:(double)arg4;
- (void)stopAnimation:(BOOL)arg1;
- (void)startAnimationTo:(struct UIEdgeInsets)arg1 duration:(double)arg2;
- (void)holdingTimer:(id)arg1;
- (void)endHolding;
- (void)beginHolding;
- (void)tapTimer:(id)arg1;
- (void)startTapTimer:(id)arg1;
- (void)rotationDidStop;
- (void)stopDragging:(BOOL)arg1;
- (void)updateZooming:(struct UIEdgeInsets)arg1;
- (BOOL)edgesAreZoomed:(struct UIEdgeInsets)arg1;
- (BOOL)canZoom;
- (id)removeTouch:(id)arg1;
- (void)acquireTouch:(id)arg1;
- (struct UIEdgeInsets)pageEdgesForAnimation;
- (struct UIEdgeInsets)resistPageEdges:(struct UIEdgeInsets)arg1;
- (float)resist:(float)arg1 to:(float)arg2 max:(float)arg3;
- (struct UIEdgeInsets)constrainEdges:(struct UIEdgeInsets)arg1 toWidth:(float)arg2;
- (struct UIEdgeInsets)reversePageEdges;
- (struct UIEdgeInsets)zoomPageEdgesTo:(struct CGPoint)arg1;
- (struct UIEdgeInsets)squareTouchEdges:(struct UIEdgeInsets)arg1;
- (struct UIEdgeInsets)touchEdgesForPoint:(struct CGPoint)arg1;
- (struct UIEdgeInsets)stretchTouchEdges:(struct UIEdgeInsets)arg1 toPoint:(struct CGPoint)arg2;
- (void)layoutAdjacentPages;
- (void)layoutPage;
- (void)moveToPageAtIndex:(int)arg1 resetEdges:(BOOL)arg2;
- (void)moveToPageAtIndex:(int)arg1 resetEdges:(BOOL)arg2 animated:(BOOL)arg3;
- (void)adjustPageEdgesForPageAtIndex:(int)arg1;
- (void)enqueueAllPages;
- (id)enqueuePageAtIndex:(int)arg1;
- (id)pageAtIndex:(int)arg1 create:(BOOL)arg2;
- (int)realPageIndex;
- (int)arrayIndexForPageIndex:(int)arg1 relativeToIndex:(int)arg2;
- (struct CGPoint)touchLocation:(id)arg1;
- (struct CGAffineTransform)rotateTransform:(struct CGAffineTransform)arg1;
- (BOOL)supportsOrientation:(int)arg1;
- (struct CGPoint)offsetForOrientation:(float)arg1 y:(float)arg2;
- (float)overflowForFrame:(struct CGRect)arg1;
- (struct CGRect)frameOfPageAtIndex:(int)arg1;
- (float)zoomFactor;
- (float)stretchedHeight;
- (float)stretchedWidth;
- (float)overshoot;
- (float)pageHeight;
- (float)pageWidth;
- (BOOL)flicked;
- (BOOL)pulled;
- (BOOL)pinched;
- (BOOL)flipped;
- (BOOL)draggingFromEdge;
- (BOOL)isLastPage;
- (BOOL)isFirstPage;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

