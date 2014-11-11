/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Portal-Structs.h"
#import "CPTPlot.h"

@class CPTFill, NSArray, CPTMutableNumericData, CPTLineStyle;

@interface CPTTradingRangePlot : CPTPlot {
@private
	CPTLineStyle* lineStyle;
	CPTLineStyle* increaseLineStyle;
	CPTLineStyle* decreaseLineStyle;
	CPTFill* increaseFill;
	CPTFill* decreaseFill;
	int plotStyle;
	float barWidth;
	float stickLength;
	float barCornerRadius;
}
@property(copy, nonatomic) NSArray* decreaseLineStyles;
@property(copy, nonatomic) NSArray* increaseLineStyles;
@property(copy, nonatomic) NSArray* lineStyles;
@property(copy, nonatomic) NSArray* decreaseFills;
@property(copy, nonatomic) NSArray* increaseFills;
@property(copy, nonatomic) CPTMutableNumericData* closeValues;
@property(copy, nonatomic) CPTMutableNumericData* lowValues;
@property(copy, nonatomic) CPTMutableNumericData* highValues;
@property(copy, nonatomic) CPTMutableNumericData* openValues;
@property(copy, nonatomic) CPTMutableNumericData* xValues;
@property(copy, nonatomic) CPTFill* decreaseFill;
@property(copy, nonatomic) CPTFill* increaseFill;
@property(copy, nonatomic) CPTLineStyle* decreaseLineStyle;
@property(copy, nonatomic) CPTLineStyle* increaseLineStyle;
@property(copy, nonatomic) CPTLineStyle* lineStyle;
@property(assign, nonatomic) float barCornerRadius;
@property(assign, nonatomic) float stickLength;
@property(assign, nonatomic) float barWidth;
@property(assign, nonatomic) int plotStyle;
+(BOOL)needsDisplayForKey:(id)key;
-(BOOL)pointingDeviceDownEvent:(UIEvent*)event atPoint:(CGPoint)point;
-(unsigned)dataIndexFromInteractionPoint:(CGPoint)interactionPoint;
-(void)positionLabelAnnotation:(id)annotation forIndex:(unsigned)index;
-(id)fieldIdentifiersForCoordinate:(int)coordinate;
-(id)fieldIdentifiers;
-(unsigned)numberOfFields;
-(id)decreaseLineStyleForIndex:(unsigned)index;
-(id)increaseLineStyleForIndex:(unsigned)index;
-(id)lineStyleForIndex:(unsigned)index;
-(id)decreaseFillForIndex:(unsigned)index;
-(id)increaseFillForIndex:(unsigned)index;
-(void)drawSwatchForLegend:(id)legend atIndex:(unsigned)index inRect:(CGRect)rect inContext:(CGContextRef)context;
-(void)drawOHLCInContext:(CGContextRef)context atIndex:(unsigned)index x:(float)x open:(float)open close:(float)close high:(float)high low:(float)low alignPoints:(BOOL)points;
-(void)drawCandleStickInContext:(CGContextRef)context atIndex:(unsigned)index x:(float)x open:(float)open close:(float)close high:(float)high low:(float)low alignPoints:(BOOL)points;
-(void)renderAsVectorInContext:(CGContextRef)context;
-(void)reloadDataInIndexRange:(NSRange)indexRange;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(void)dealloc;
-(id)initWithLayer:(id)layer;
-(id)initWithFrame:(CGRect)frame;
@end
