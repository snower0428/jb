/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSCoding.h"
#import "Portal-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class CPTAnnotationHostLayer, CPTLayer;

@interface CPTAnnotation : XXUnknownSuperclass <NSCoding> {
@private
	CPTAnnotationHostLayer* annotationHostLayer;
	CPTLayer* contentLayer;
	CGPoint contentAnchorPoint;
	CGPoint displacement;
	float rotation;
}
@property(assign, nonatomic) float rotation;
@property(assign, nonatomic) CGPoint displacement;
@property(assign, nonatomic) CGPoint contentAnchorPoint;
@property(assign, nonatomic) CPTAnnotationHostLayer* annotationHostLayer;
@property(retain, nonatomic) CPTLayer* contentLayer;
-(id)description;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(void)dealloc;
-(id)init;
-(void)positionContentLayer;
@end
