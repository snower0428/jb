/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Portal-Structs.h"
#import "CPTBorderedLayer.h"

@class NSArray, CPTLineStyle, CPTTextStyle, NSMutableArray, CPTFill;

@interface CPTLegend : CPTBorderedLayer {
@private
	NSMutableArray* plots;
	NSMutableArray* legendEntries;
	BOOL layoutChanged;
	CPTTextStyle* textStyle;
	CGSize swatchSize;
	CPTLineStyle* swatchBorderLineStyle;
	float swatchCornerRadius;
	CPTFill* swatchFill;
	unsigned numberOfRows;
	unsigned numberOfColumns;
	BOOL equalRows;
	BOOL equalColumns;
	NSArray* rowHeights;
	NSArray* rowHeightsThatFit;
	NSArray* columnWidths;
	NSArray* columnWidthsThatFit;
	float columnMargin;
	float rowMargin;
	float titleOffset;
}
@property(retain, nonatomic) NSMutableArray* legendEntries;
@property(retain, nonatomic) NSMutableArray* plots;
@property(assign, nonatomic) float titleOffset;
@property(assign, nonatomic) float rowMargin;
@property(assign, nonatomic) float columnMargin;
@property(retain, nonatomic) NSArray* columnWidthsThatFit;
@property(copy, nonatomic) NSArray* columnWidths;
@property(retain, nonatomic) NSArray* rowHeightsThatFit;
@property(copy, nonatomic) NSArray* rowHeights;
@property(assign, nonatomic) BOOL equalColumns;
@property(assign, nonatomic) BOOL equalRows;
@property(assign, nonatomic) unsigned numberOfColumns;
@property(assign, nonatomic) unsigned numberOfRows;
@property(assign, nonatomic) BOOL layoutChanged;
@property(copy, nonatomic) CPTFill* swatchFill;
@property(assign, nonatomic) float swatchCornerRadius;
@property(copy, nonatomic) CPTLineStyle* swatchBorderLineStyle;
@property(assign, nonatomic) CGSize swatchSize;
@property(copy, nonatomic) CPTTextStyle* textStyle;
+(BOOL)needsDisplayForKey:(id)key;
+(id)legendWithGraph:(id)graph;
+(id)legendWithPlots:(id)plots;
-(id)description;
-(BOOL)pointingDeviceDownEvent:(UIEvent*)event atPoint:(CGPoint)point;
-(void)legendNeedsReloadEntries:(id)entries;
-(void)legendNeedsLayout:(id)layout;
-(void)legendNeedsRedraw:(id)redraw;
-(void)removeLegendEntriesForPlot:(id)plot;
-(void)removePlotWithIdentifier:(id)identifier;
-(void)removePlot:(id)plot;
-(void)insertPlot:(id)plot atIndex:(unsigned)index;
-(void)addPlot:(id)plot;
-(id)plotWithIdentifier:(id)identifier;
-(id)plotAtIndex:(unsigned)index;
-(id)allPlots;
-(void)recalculateLayout;
-(void)layoutSublayers;
-(void)setLayoutChanged;
-(void)renderAsVectorInContext:(CGContextRef)context;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(void)dealloc;
-(id)initWithLayer:(id)layer;
-(id)initWithGraph:(id)graph;
-(id)initWithPlots:(id)plots;
-(id)initWithFrame:(CGRect)frame;
@end

