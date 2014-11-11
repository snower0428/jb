/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "MARender.h"
#import "Portal-Structs.h"

@class MAMapContents;

@interface MATiledLayerRender : XXUnknownSuperclass <MARender> {
@private
	BOOL _useSnapshotRenderer;
	float _currentScale;
	MAMapContents* _mapContents;
	float _tile;
}
@property(assign, nonatomic) float tile;
@property(retain, nonatomic) MAMapContents* mapContents;
@property(assign, nonatomic) float currentScale;
@property(assign, nonatomic) BOOL useSnapshotRenderer;
+(Class)layerClass;
-(void).cxx_destruct;
-(void)drawLayer:(id)layer inContext:(CGContextRef)context;
-(void)updataMapWithDatasource:(unsigned)datasource;
-(id)initWithMapContents:(id)mapContents;
@end

