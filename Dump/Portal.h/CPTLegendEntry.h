/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSCoding.h"
#import "Portal-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSAttributedString, CPTPlot, CPTTextStyle;

@interface CPTLegendEntry : XXUnknownSuperclass <NSCoding> {
@private
	CPTPlot* plot;
	unsigned index;
	unsigned row;
	unsigned column;
	CPTTextStyle* textStyle;
}
@property(readonly, assign, nonatomic) NSAttributedString* attributedTitle;
@property(readonly, assign, nonatomic) NSString* title;
@property(readonly, assign, nonatomic) CGSize titleSize;
@property(assign, nonatomic) unsigned column;
@property(assign, nonatomic) unsigned row;
@property(retain, nonatomic) CPTTextStyle* textStyle;
@property(assign, nonatomic) unsigned index;
@property(assign, nonatomic) CPTPlot* plot;
-(void)drawTitleInRect:(CGRect)rect inContext:(CGContextRef)context scale:(float)scale;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(void)dealloc;
-(id)init;
@end

