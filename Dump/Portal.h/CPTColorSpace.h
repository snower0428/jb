/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Portal-Structs.h"
#import "NSCoding.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface CPTColorSpace : XXUnknownSuperclass <NSCoding> {
@private
	CGColorSpaceRef cgColorSpace;
}
@property(assign, nonatomic) CGColorSpaceRef cgColorSpace;
+(id)genericRGBSpace;
-(void)setCGColorSpace:(CGColorSpaceRef)space;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(void)finalize;
-(void)dealloc;
-(id)initWithCGColorSpace:(CGColorSpaceRef)cgcolorSpace;
@end
