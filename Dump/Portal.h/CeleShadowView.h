/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Portal-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, CAGradientLayer;

@interface CeleShadowView : XXUnknownSuperclass {
@private
	NSMutableArray* _colorsArray;
	CAGradientLayer* _gradient;
}
@property(retain, nonatomic) CAGradientLayer* gradient;
@property(retain, nonatomic) NSMutableArray* colorsArray;
-(void)setColorArrays:(id)arrays;
-(id)initWithFrame:(CGRect)frame;
-(id)initWithFrame:(CGRect)frame foldDirection:(int)direction;
@end
