/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, NSString, AMapGeoPoint, AMapGeoPolygon;

@interface AMapPlaceSearchRequest : XXUnknownSuperclass {
@private
	NSString* _keywords;
	BOOL _requireExtension;
	NSString* _uid;
	int _radius;
	int _searchType;
	int _page;
	BOOL _requireDiscount;
	AMapGeoPoint* _location;
	BOOL _requireGroup;
	NSArray* _types;
	int _sortrule;
	int _offset;
	AMapGeoPolygon* _polygon;
	NSArray* _city;
}
@property(assign, nonatomic) int page;
@property(assign, nonatomic) int offset;
@property(assign, nonatomic) int sortrule;
@property(retain, nonatomic) NSArray* city;
@property(retain, nonatomic) NSArray* types;
@property(retain, nonatomic) NSString* keywords;
@property(retain, nonatomic) AMapGeoPolygon* polygon;
@property(assign, nonatomic) int radius;
@property(retain, nonatomic) AMapGeoPoint* location;
@property(retain, nonatomic) NSString* uid;
@property(assign, nonatomic) BOOL requireDiscount;
@property(assign, nonatomic) BOOL requireGroup;
@property(assign, nonatomic) BOOL requireExtension;
@property(assign, nonatomic) int searchType;
-(void).cxx_destruct;
-(id)init;
@end

