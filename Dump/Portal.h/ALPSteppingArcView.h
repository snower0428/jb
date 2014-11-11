/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Portal-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIColor;

@interface ALPSteppingArcView : XXUnknownSuperclass {
@private
	UIColor* _fgColor;
	UIColor* _bkColor;
	double _pieCapacity;
}
@property(retain, nonatomic) UIColor* bkColor;
@property(retain, nonatomic) UIColor* fgColor;
@property(assign, nonatomic) double pieCapacity;
-(void).cxx_destruct;
-(void)redraw:(double)redraw;
-(void)drawRect:(CGRect)rect;
-(id)initWithFrameAndColor:(CGRect)frameAndColor fgColor:(id)color bkColor:(id)color3;
@end

