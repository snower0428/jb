//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGQuadtree, IGQuadtreeRegion, NSMutableArray;

@interface IGQuadtreeClusterQuery : NSObject
{
    IGQuadtree *_quadtree;
    NSMutableArray *_clusters;
    IGQuadtreeRegion *_region;
}

@property(readonly, nonatomic) IGQuadtreeRegion *region; // @synthesize region=_region;
@property(readonly, nonatomic) NSMutableArray *clusters; // @synthesize clusters=_clusters;
- (void).cxx_destruct;
- (id)getClustersForRegion:(id)arg1 maxDistance:(float)arg2 mapView:(id)arg3 existingClusters:(id)arg4;
- (id)getNamedClusters;
- (id)initWithQuadtreePoints:(id)arg1;
- (id)initWithQuadtree:(id)arg1;

@end
