/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MAOverlay.h"
#import "MAMultiPoint.h"
#import "Portal-Structs.h"


@interface MAPolyline : MAMultiPoint <MAOverlay> {
}
@property(readonly, assign, nonatomic) XXStruct_Yvvv9D boundingMapRect;
@property(readonly, assign, nonatomic) XXStruct_zYrK5D coordinate;
+(id)polylineWithPoints:(XXStruct_zYrK5D*)points count:(unsigned)count;
+(id)polylineWithCoordinates:(XXStruct_zYrK5D*)coordinates count:(unsigned)count;
-(id)initWithPoints:(XXStruct_zYrK5D*)points count:(unsigned)count;
-(id)initWithWithCoordinates:(XXStruct_zYrK5D*)coordinates count:(unsigned)count;
@end
