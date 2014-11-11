/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Portal-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@protocol MAOverlay;

@interface MAOverlayView : XXUnknownSuperclass {
@private
	id<MAOverlay> _overlay;
}
@property(retain, nonatomic) id<MAOverlay> overlay;
+(Class)layerClass;
-(void).cxx_destruct;
-(id)initWithOverlay:(id)overlay;
-(void)drawRect:(CGRect)rect;
-(void)drawMapRect:(XXStruct_Yvvv9D)rect zoomScale:(float)scale inContext:(CGContextRef)context;
-(XXStruct_Yvvv9D)mapRectForRect:(CGRect)rect;
-(CGRect)rectForMapRect:(XXStruct_Yvvv9D)mapRect;
-(XXStruct_zYrK5D)mapPointForPoint:(CGPoint)point;
-(CGPoint)pointForMapPoint:(XXStruct_zYrK5D)mapPoint;
-(CGAffineTransform)conversionAffineTransform;
-(float)zoomScale;
-(id)getMapView;
@end

