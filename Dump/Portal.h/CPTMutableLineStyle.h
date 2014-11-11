/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Portal-Structs.h"
#import "CPTLineStyle.h"

@class CPTFill, CPTGradient, NSArray, CPTColor;

@interface CPTMutableLineStyle : CPTLineStyle {
}
@property(retain, nonatomic) CPTGradient* lineGradient;
@property(retain, nonatomic) CPTFill* lineFill;
@property(retain, nonatomic) CPTColor* lineColor;
@property(assign, nonatomic) float patternPhase;
@property(retain, nonatomic) NSArray* dashPattern;
@property(assign, nonatomic) float lineWidth;
@property(assign, nonatomic) float miterLimit;
@property(assign, nonatomic) int lineJoin;
@property(assign, nonatomic) int lineCap;
@end
