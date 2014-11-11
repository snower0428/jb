/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Portal-Structs.h"
#import "CPTLayer.h"

@class NSArray, CPTLineStyle;

@interface CPTAxisSet : CPTLayer {
@private
	NSArray* axes;
	CPTLineStyle* borderLineStyle;
}
@property(copy, nonatomic) CPTLineStyle* borderLineStyle;
@property(retain, nonatomic) NSArray* axes;
-(id)axisForCoordinate:(int)coordinate atIndex:(unsigned)index;
-(void)relabelAxes;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(void)dealloc;
-(id)initWithLayer:(id)layer;
-(id)initWithFrame:(CGRect)frame;
@end

