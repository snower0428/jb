/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSCoding.h"
#import "NSCopying.h"
#import "Portal-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "NSMutableCopying.h"

@class CPTColor;

@interface CPTShadow : XXUnknownSuperclass <NSCoding, NSCopying, NSMutableCopying> {
@private
	CGSize shadowOffset;
	float shadowBlurRadius;
	CPTColor* shadowColor;
}
@property(retain, nonatomic) CPTColor* shadowColor;
@property(assign, nonatomic) float shadowBlurRadius;
@property(assign, nonatomic) CGSize shadowOffset;
+(id)shadow;
-(id)mutableCopyWithZone:(NSZone*)zone;
-(id)copyWithZone:(NSZone*)zone;
-(void)setShadowInContext:(CGContextRef)context;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(void)dealloc;
-(id)init;
@end

