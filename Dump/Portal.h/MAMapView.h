/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Portal-Structs.h"
#import "NSCoding.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "MAMapAnimationContainerDelegate.h"
#import "CLLocationManagerDelegate.h"

@class MAUserLocation, MAAngleIndicator, NSArray, MAMapContents, MAAnnotationCollection, MALayerCollection, CLLocationManager, UIImageView, MACircle, NIViewRecycler, MAMapAnimationContainer, NSMutableArray;
@protocol MAMapViewDelegate;

@interface MAMapView : XXUnknownSuperclass <MAMapAnimationContainerDelegate, CLLocationManagerDelegate, NSCoding> {
@private
	unsigned _mapType;
	XXStruct_Yvvv9D _region;
	XXStruct_zYrK5D _centerCoordinate;
	id<MAMapViewDelegate> _delegate;
	BOOL _showsUserLocation;
	int _userTrackingMode;
	MAUserLocation* _userLocation;
	MACircle* _userLocationCircle;
	NSArray* annotations;
	MAMapContents* _mapContents;
	NSMutableArray* _annotaionProtoArray;
	NIViewRecycler* _annotationRecycler;
	MAAnnotationCollection* _annotationCollection;
	MAMapAnimationContainer* _renderContainer;
	NSMutableArray* _overlayArray;
	MALayerCollection* _overlayCollection;
	UIImageView* _logoImageView;
	int srcScrollViewChangeSize;
	BOOL isDidZoomin;
	CGPoint oldCenter;
	MAAngleIndicator* angleIndicator;
	CLLocationManager* locationManager;
	float _headingOffset;
	BOOL userLocationViewIsCustomized;
}
@property(assign, nonatomic) CGPoint oldCenter;
@property(assign, nonatomic) BOOL isDidZoomin;
@property(assign, nonatomic) int srcScrollViewChangeSize;
@property(assign, nonatomic) BOOL userLocationViewIsCustomized;
@property(assign, nonatomic) float headingOffset;
@property(retain, nonatomic) MACircle* userLocationCircle;
@property(retain, nonatomic) MAAngleIndicator* angleIndicator;
@property(retain, nonatomic) CLLocationManager* locationManager;
@property(retain, nonatomic) MALayerCollection* overlayCollection;
@property(retain, nonatomic) NSMutableArray* overlayArray;
@property(retain, nonatomic) NIViewRecycler* annotationRecycler;
@property(retain, nonatomic) MAAnnotationCollection* annotationCollection;
@property(retain, nonatomic) NSMutableArray* annotaionProtoArray;
@property(retain, nonatomic) MAMapContents* mapContents;
@property(retain, nonatomic) MAMapAnimationContainer* renderContainer;
@property(retain, nonatomic) UIImageView* logoImageView;
@property(copy, nonatomic) NSArray* selectedAnnotations;
@property(readonly, assign, nonatomic) CGRect annotationVisibleRect;
@property(readonly, assign, nonatomic) NSArray* annotations;
@property(readonly, assign, nonatomic, getter=isUserLocationVisible) BOOL userLocationVisible;
@property(assign, nonatomic) int userTrackingMode;
@property(readonly, assign, nonatomic) MAUserLocation* userLocation;
@property(assign, nonatomic, getter=isShowsUserLocation) BOOL showsUserLocation;
@property(assign, nonatomic, getter=isShowTraffic) BOOL showTraffic;
@property(assign, nonatomic, getter=isRotateEnabled) BOOL rotateEnabled;
@property(assign, nonatomic, getter=isScrollEnabled) BOOL scrollEnabled;
@property(assign, nonatomic, getter=isZoomEnabled) BOOL zoomEnabled;
@property(assign, nonatomic) XXStruct_Yvvv9D visibleMapRect;
@property(assign, nonatomic) XXStruct_zYrK5D centerCoordinate;
@property(readonly, assign, nonatomic) CGSize logoSize;
@property(assign, nonatomic) CGPoint logoCenter;
@property(assign, nonatomic) XXStruct_Yvvv9D region;
@property(assign, nonatomic) unsigned mapType;
@property(assign, nonatomic) id<MAMapViewDelegate> delegate;
@property(assign, nonatomic) BOOL logoHidden;
-(void).cxx_destruct;
-(void)drawRect:(CGRect)rect;
-(void)mapContainerDidZoom:(id)mapContainer;
-(void)mapContainerDidEndZooming:(id)mapContainer withView:(id)view;
-(void)mapContainerWillBeginZooming:(id)mapContainer withView:(id)view;
-(void)mapContainerWillEndDecelerating:(id)mapContainer;
-(void)mapContainerDidEndDragging:(id)mapContainer willDecelerate:(BOOL)decelerate;
-(void)mapContainerWillBeginDragging:(id)mapContainer;
-(id)takeSnapshotWithOverlays:(BOOL)overlays;
-(id)takeSnapshotInRect:(CGRect)rect withOverlays:(BOOL)overlays;
-(id)takeSnapshotInRect:(CGRect)rect;
-(void)takeSnapshotInRect:(CGRect)rect withCompletionBlock:(id)completionBlock;
-(void)locationManager:(id)manager didUpdateHeading:(id)heading;
-(void)locationManager:(id)manager didFailWithError:(id)error;
-(void)locationManager:(id)manager didUpdateToLocation:(id)location fromLocation:(id)location3;
-(void)setIsShowAngleIndicatorView:(BOOL)view;
-(void)updateUserLocationAnimated:(BOOL)animated;
-(void)updateUserAngleAnimated:(BOOL)animated;
-(void)diveFitsTracking;
-(void)resetMapTrackingModeAnimated:(BOOL)animated;
-(void)delayPerformResetAction;
-(void)changeMapContainerSize:(BOOL)size;
-(void)didChangeOrientationNotification;
-(void)layoutSubviews;
-(void)WillChangeOrientationNotification;
-(void)updateUserLocationInterface;
-(void)addUserLocationInterface;
-(void)removeUserLocationInterface;
-(BOOL)userLocationInterfaceExisted;
-(id)userLocationCircleViewWithCircle:(id)circle;
-(id)userLocationAnnotationViewWithAnnotation:(id)annotation;
-(id)userLocationDefaultImage;
-(void)initUserLocationSystem;
-(void)setUserTrackingMode:(int)mode animated:(BOOL)animated;
-(id)viewForOverlay:(id)overlay;
-(id)overlays;
-(void)exchangeOverlayAtIndex:(unsigned)index withOverlayAtIndex:(unsigned)index2;
-(void)insertOverlay:(id)overlay belowOverlay:(id)overlay2;
-(void)insertOverlay:(id)overlay aboveOverlay:(id)overlay2;
-(void)insertOverlay:(id)overlay atIndex:(unsigned)index;
-(void)removeOverlays:(id)overlays;
-(void)removeOverlay:(id)overlay;
-(void)addOverlays:(id)overlays;
-(void)addOverlay:(id)overlay;
-(void)deselectAnnotation:(id)annotation animated:(BOOL)animated;
-(void)selectAnnotation:(id)annotation animated:(BOOL)animated;
-(id)dequeueReusableAnnotationViewWithIdentifier:(id)identifier;
-(id)annotationsInMapRect:(XXStruct_Yvvv9D)mapRect;
-(id)viewForAnnotation:(id)annotation;
-(void)removeAnnotations:(id)annotations;
-(void)removeAnnotation:(id)annotation;
-(void)addAnnotations:(id)annotations;
-(void)addAnnotation:(id)annotation;
-(XXStruct_Yvvv9D)convertRect:(CGRect)rect toRegionFromView:(id)view;
-(CGRect)convertRegion:(XXStruct_Yvvv9D)region toRectToView:(id)view;
-(XXStruct_zYrK5D)convertPoint:(CGPoint)point toCoordinateFromView:(id)view;
-(CGPoint)convertCoordinate:(XXStruct_zYrK5D)coordinate toPointToView:(id)view;
-(id)addLogoInImage:(id)image position:(CGPoint)position;
-(void)initLogoImageView;
-(void)notifyDelegateRegionDidChangeAnimated:(BOOL)notifyDelegateRegion;
-(void)notifyDelegateRegionWillChangeAnimated:(BOOL)notifyDelegateRegion;
-(CGPoint)modifyOffset:(CGPoint)offset;
-(float)normalizeDegree:(float)degree;
-(void)decreaseUserTrackingMode;
-(void)rotateMapWithDegree:(float)degree animated:(BOOL)animated completion:(id)completion;
-(void)scrollToPoint:(XXStruct_zYrK5D)point animated:(BOOL)animated duration:(double)duration completion:(id)completion;
-(void)internalSetMapRotation:(float)rotation animated:(BOOL)animated;
-(void)setCenterCoordinate:(XXStruct_zYrK5D)coordinate animated:(BOOL)animated;
-(void)internalSetCenterCoordinate:(XXStruct_zYrK5D)coordinate animated:(BOOL)animated;
-(XXStruct_Yvvv9D)mapRectThatFits:(XXStruct_Yvvv9D)fits edgePadding:(UIEdgeInsets)padding;
-(void)internalSetVisibleMapRect:(XXStruct_Yvvv9D)rect edgePadding:(UIEdgeInsets)padding animated:(BOOL)animated;
-(void)setVisibleMapRect:(XXStruct_Yvvv9D)rect edgePadding:(UIEdgeInsets)padding animated:(BOOL)animated;
-(void)setVisibleMapRect:(XXStruct_Yvvv9D)rect animated:(BOOL)animated;
-(XXStruct_Yvvv9D)regionThatFits:(XXStruct_Yvvv9D)fits;
-(void)setRegion:(XXStruct_Yvvv9D)region animated:(BOOL)animated;
-(XXStruct_Yvvv9D)mapRectThatFits:(XXStruct_Yvvv9D)fits;
-(float)zoomScaleFromMapRect:(XXStruct_Yvvv9D)mapRect edgePadding:(UIEdgeInsets)padding;
-(void)setZoomLevel:(int)level;
-(float)currentZoomLevel;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
-(void)performAnnotation:(id)annotation selected:(BOOL)selected animated:(BOOL)animated;
-(id)doAddAnnotation:(id)annotation;
-(void)updateCenterForAnnotationView:(id)annotationView;
-(id)defaultAnnotationViewWithAnnotation:(id)annotation;
-(void)adjustAnnotations;
-(BOOL)annotation:(id)annotation enclosedInMapRect:(XXStruct_Yvvv9D)mapRect;
-(BOOL)annotation:(id)annotation enclosedInRect:(CGRect)rect;
-(CGRect)annotationsVisibleRect;
-(XXStruct_Yvvv9D)regionFromRect:(CGRect)rect;
-(CGRect)rectFromRegion:(XXStruct_Yvvv9D)region;
-(XXStruct_zYrK5D)coordinateFromPoint:(CGPoint)point;
-(CGPoint)pointFromCoordinate:(XXStruct_zYrK5D)coordinate;
-(XXStruct_Yvvv9D)mapRectFromRect:(CGRect)rect;
-(CGRect)rectFromMapRect:(XXStruct_Yvvv9D)mapRect;
-(XXStruct_zYrK5D)mapPointFromPoint:(CGPoint)point;
-(CGPoint)pointFromMapPoint:(XXStruct_zYrK5D)mapPoint;
-(CGAffineTransform)level20Transform;
-(CGSize)paddingSize;
@end
