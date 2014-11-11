/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PBGeneratedMessage_Builder.h"

@class TrafficTile;

@interface TrafficTile_Builder : PBGeneratedMessage_Builder {
@private
	TrafficTile* result;
}
@property(retain) TrafficTile* result;
-(id)addTrafficIncident:(id)incident;
-(id)clearTrafficIncidentList;
-(id)addAllTrafficIncident:(id)incident;
-(id)replaceTrafficIncidentAtIndex:(int)index with:(id)with;
-(id)trafficIncidentAtIndex:(int)index;
-(id)trafficIncidentList;
-(id)addTrafficSegment:(id)segment;
-(id)clearTrafficSegmentList;
-(id)addAllTrafficSegment:(id)segment;
-(id)replaceTrafficSegmentAtIndex:(int)index with:(id)with;
-(id)trafficSegmentAtIndex:(int)index;
-(id)trafficSegmentList;
-(id)clearVertices;
-(id)setVertices:(id)vertices;
-(id)vertices;
-(BOOL)hasVertices;
-(id)mergeFromCodedInputStream:(id)codedInputStream extensionRegistry:(id)registry;
-(id)mergeFromCodedInputStream:(id)codedInputStream;
-(id)mergeFrom:(id)from;
-(id)buildPartial;
-(id)build;
-(id)defaultInstance;
-(id)clone;
-(id)clear;
-(id)internalGetResult;
-(id)init;
-(void)dealloc;
@end

