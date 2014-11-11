/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Portal-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIColor;

@interface ALPBasePassView : XXUnknownSuperclass {
	UIColor* _gradientBgColor;
	BOOL _hasBackPath;
	BOOL _hasShadow;
}
@property(retain, nonatomic) UIColor* gradientBgColor;
@property(assign, nonatomic) BOOL hasShadow;
@property(assign, nonatomic) BOOL hasBackPath;
-(void).cxx_destruct;
-(void)drawRect:(CGRect)rect;
-(void)drawGradientBackgroundColor:(CGContextRef)color rect:(CGRect)rect;
-(id)backgroundColors;
-(float)colorY:(float)y position:(float)position;
-(float)parabola_01:(float)a01;
-(float)parabola:(float)parabola;
-(id)pathForBackground:(CGRect)background radius:(float)radius;
-(id)initWithFrame:(CGRect)frame;
@end
