/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class AMapGeoPoint, NSArray;

@interface AMapWalking : XXUnknownSuperclass {
@private
	NSArray* _steps;
	int _duration;
	int _distance;
	AMapGeoPoint* _origin;
	AMapGeoPoint* _destination;
}
@property(retain, nonatomic) NSArray* steps;
@property(assign, nonatomic) int duration;
@property(assign, nonatomic) int distance;
@property(retain, nonatomic) AMapGeoPoint* destination;
@property(retain, nonatomic) AMapGeoPoint* origin;
-(void).cxx_destruct;
-(id)description;
@end
