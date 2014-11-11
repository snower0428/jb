/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "Portal-Structs.h"

@class ALPFundAnnotation, UIView, UIImageView, CPTScatterPlot, CPTPlotSymbol, CPTGraphHostingView, CPTXYGraph;

@interface ALPFundScatterChartView : XXUnknownSuperclass {
@private
	float _viewWidth;
	CPTGraphHostingView* _hostView;
	CPTXYGraph* _graph;
	int _pointCount;
	double _maxValue;
	double _minValue;
	UIView* _leftPopUp;
	UIView* _rightPopUp;
	CPTPlotSymbol* normalSymbol;
	CPTPlotSymbol* selectedSymbol;
	double _todaySince1970;
	double _firstTimeInterval;
	ALPFundAnnotation* _annotation;
	UIImageView* _triangleView;
	UIImageView* _yuanView;
	CGRect _rect;
	CPTScatterPlot* _fundIncomePlot;
}
@property(retain, nonatomic) CPTScatterPlot* fundIncomePlot;
-(void).cxx_destruct;
-(id)selectedSymbol;
-(id)normalSymbol;
-(void)draw;
-(BOOL)isPopUpShouldPositionTowardLeft:(CGPoint)isPopUp startX:(float)x;
-(void)popUpAmountAtIndex:(unsigned)index x:(id)x y:(id)y;
-(void)removeAllAnnotations;
-(void)propertyOfPlot:(int)plot maxValue:(double)value minVale:(double)vale firstDate:(double)date;
-(id)initWithFrame:(CGRect)frame;
@end

