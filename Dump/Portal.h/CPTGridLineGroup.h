/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Portal-Structs.h"
#import "CPTLayer.h"

@class CPTPlotArea;

@interface CPTGridLineGroup : CPTLayer {
@private
	CPTPlotArea* plotArea;
	BOOL major;
}
@property(assign, nonatomic) BOOL major;
@property(assign, nonatomic) CPTPlotArea* plotArea;
-(void)renderAsVectorInContext:(CGContextRef)context;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(id)initWithLayer:(id)layer;
-(id)initWithFrame:(CGRect)frame;
@end

