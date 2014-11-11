/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UIScrollViewDelegate.h"
#import "Portal-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "UIGestureRecognizerDelegate.h"

@class UIView, MAMapContents, MATiledLayerRender, MATrafficLayerRender, UITapGestureRecognizer, UILongPressGestureRecognizer, UISwipeGestureRecognizer, UIRotationGestureRecognizer;
@protocol MAMapAnimationContainerDelegate;

@interface MAMapAnimationContainer : XXUnknownSuperclass <UIGestureRecognizerDelegate, UIScrollViewDelegate> {
@private
	MATiledLayerRender* _mapRender;
	MATrafficLayerRender* _trafficRender;
	MAMapContents* _mapContents;
	UITapGestureRecognizer* _tapTwiceGestureRecognizer;
	UITapGestureRecognizer* _tapTwoFingerGestureRecognizer;
	UILongPressGestureRecognizer* _longPressedGestureRecognizer;
	UISwipeGestureRecognizer* _swipGestureRecognizer;
	UITapGestureRecognizer* _tapSingleGestureRecognizer;
	UIRotationGestureRecognizer* _rotationGestureRecognizer;
	UIView* content;
	BOOL zoomEnabled;
	BOOL rotateEnabled;
	BOOL showTraffic;
	unsigned _renderMapType;
	int _tileSize;
	int zoomInLevels;
	int zoomOutLevels;
	float _priorRotationDelta;
	id<MAMapAnimationContainerDelegate> _containerDelegate;
}
@property(assign, nonatomic) float priorRotationDelta;
@property(assign, nonatomic) int zoomInLevels;
@property(assign, nonatomic) int zoomOutLevels;
@property(assign, nonatomic) int tileSize;
@property(readonly, assign, nonatomic) MAMapContents* mapContents;
@property(retain, nonatomic) UIView* content;
@property(assign, nonatomic) unsigned renderMapType;
@property(assign, nonatomic) BOOL showTraffic;
@property(assign, nonatomic) BOOL rotateEnabled;
@property(assign, nonatomic) BOOL zoomEnabled;
@property(assign, nonatomic) id<MAMapAnimationContainerDelegate> containerDelegate;
-(void).cxx_destruct;
-(BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;
-(BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)gestureRecognizer;
-(void)handleRotationFrom:(id)from;
-(void)tapSingle:(id)single;
-(void)swip:(id)swip;
-(void)longPressed:(id)pressed;
-(void)twoFingure:(id)fingure;
-(void)tapTwice:(id)twice;
-(BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
-(float)nextZoomOutScale;
-(float)nextZoomInScale;
-(void)scrollViewDidZoom:(id)scrollView;
-(void)scrollViewDidEndDecelerating:(id)scrollView;
-(void)scrollViewDidEndZooming:(id)scrollView withView:(id)view atScale:(float)scale;
-(void)scrollViewWillBeginZooming:(id)scrollView withView:(id)view;
-(void)scrollViewDidEndDragging:(id)scrollView willDecelerate:(BOOL)decelerate;
-(void)scrollViewWillBeginDragging:(id)scrollView;
-(id)viewForZoomingInScrollView:(id)scrollView;
-(void)willRemoveSubview:(id)subview;
-(id)initWithMapContents:(id)mapContents;
-(float)squareSideForRect:(CGRect)rect;
@end

