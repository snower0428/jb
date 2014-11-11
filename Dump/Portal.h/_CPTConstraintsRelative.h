/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "CPTConstraints.h"
#import "Portal-Structs.h"


@interface _CPTConstraintsRelative : CPTConstraints {
@private
	float offset;
}
@property(assign, nonatomic) float offset;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(Class)classForCoder;
-(id)copyWithZone:(NSZone*)zone;
-(float)positionForLowerBound:(float)lowerBound upperBound:(float)bound;
-(BOOL)isEqualToConstraint:(id)constraint;
-(id)initWithRelativeOffset:(float)relativeOffset;
@end

