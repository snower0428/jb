/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class AMapGeoPoint, NSString;

@interface AMapReGeocodeSearchRequest : XXUnknownSuperclass {
@private
	BOOL _requireExtension;
	int _radius;
	int _searchType;
	NSString* _poiIdFilter;
	AMapGeoPoint* _location;
}
@property(retain, nonatomic) NSString* poiIdFilter;
@property(assign, nonatomic) int radius;
@property(retain, nonatomic) AMapGeoPoint* location;
@property(assign, nonatomic) BOOL requireExtension;
@property(assign, nonatomic) int searchType;
-(void).cxx_destruct;
-(id)init;
@end

