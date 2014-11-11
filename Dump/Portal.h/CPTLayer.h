/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Portal-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "CPTResponder.h"

@class CPTShadow, CPTGraph, NSSet;
@protocol NSCoding, NSCopying;

@interface CPTLayer : XXUnknownSuperclass <CPTResponder> {
@private
	float paddingLeft;
	float paddingTop;
	float paddingRight;
	float paddingBottom;
	BOOL masksToBorder;
	CPTShadow* shadow;
	BOOL renderingRecursively;
	BOOL useFastRendering;
	CPTGraph* graph;
	CGPathRef outerBorderPath;
	CGPathRef innerBorderPath;
	id<NSObject, NSCoding, NSCopying> identifier;
}
@property(assign, nonatomic, getter=isRenderingRecursively) BOOL renderingRecursively;
@property(readonly, assign) NSSet* sublayersExcludedFromAutomaticLayout;
@property(copy, nonatomic) id<NSObject, NSCoding, NSCopying> identifier;
@property(readonly, assign, nonatomic) CGPathRef sublayerMaskingPath;
@property(readonly, assign, nonatomic) CGPathRef maskingPath;
@property(assign, nonatomic) CGPathRef innerBorderPath;
@property(assign, nonatomic) CGPathRef outerBorderPath;
@property(assign, nonatomic) BOOL masksToBorder;
@property(readonly, assign, nonatomic) CGSize shadowMargin;
@property(copy, nonatomic) CPTShadow* shadow;
@property(assign, nonatomic) BOOL useFastRendering;
@property(assign) float contentsScale;
@property(assign, nonatomic) float paddingBottom;
@property(assign, nonatomic) float paddingRight;
@property(assign, nonatomic) float paddingTop;
@property(assign, nonatomic) float paddingLeft;
@property(assign, nonatomic) CPTGraph* graph;
-(id)subLayersAtIndex:(unsigned)index;
-(void)logLayers;
-(id)description;
-(void)setCornerRadius:(float)radius;
-(void)setAnchorPoint:(CGPoint)point;
-(CGPoint)anchorPoint;
-(void)setBounds:(CGRect)bounds;
-(CGRect)bounds;
-(void)setHidden:(BOOL)hidden;
-(void)setPosition:(CGPoint)position;
-(void)setNeedsDisplay;
-(void)setNeedsLayout;
-(void)applyMaskToContext:(CGContextRef)context;
-(void)applySublayerMaskToContext:(CGContextRef)context forSublayer:(id)sublayer withOffset:(CGPoint)offset;
-(void)replaceSublayer:(id)sublayer with:(id)with;
-(void)insertSublayer:(id)sublayer above:(id)above;
-(void)insertSublayer:(id)sublayer below:(id)below;
-(void)insertSublayer:(id)sublayer atIndex:(unsigned)index;
-(void)addSublayer:(id)sublayer;
-(void)setSublayers:(id)sublayers;
-(void)sublayerMarginLeft:(float*)left top:(float*)top right:(float*)right bottom:(float*)bottom;
-(void)layoutSublayers;
-(void)pixelAlign;
-(BOOL)pointingDeviceCancelledEvent:(UIEvent*)event;
-(BOOL)pointingDeviceDraggedEvent:(UIEvent*)event atPoint:(CGPoint)point;
-(BOOL)pointingDeviceUpEvent:(UIEvent*)event atPoint:(CGPoint)point;
-(BOOL)pointingDeviceDownEvent:(UIEvent*)event atPoint:(CGPoint)point;
-(id)dataForPDFRepresentationOfLayer;
-(void)layoutAndRenderInContext:(CGContextRef)context;
-(void)applyTransform:(CATransform3D)transform toContext:(CGContextRef)context;
-(void)recursivelyRenderInContext:(CGContextRef)context;
-(void)renderAsVectorInContext:(CGContextRef)context;
-(void)drawInContext:(CGContextRef)context;
-(id)actionForKey:(id)key;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(void)finalize;
-(void)dealloc;
-(id)initWithLayer:(id)layer;
-(id)init;
-(id)initWithFrame:(CGRect)frame;
-(UIImage*)imageOfLayer;
@end

