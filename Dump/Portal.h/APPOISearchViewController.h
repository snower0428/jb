/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "APBaseMapViewController.h"

@class AMapRoute, NSString;
@protocol MAAnnotation;

@interface APPOISearchViewController : APBaseMapViewController {
@private
	BOOL _firstUpdateLocation;
	id<MAAnnotation> _originAnnotation;
	id<MAAnnotation> _destinationAnnotation;
	AMapRoute* _route;
	int _currentPage;
	NSString* _lastKeywords;
}
@property(retain, nonatomic) NSString* lastKeywords;
@property(assign, nonatomic) int currentPage;
@property(retain, nonatomic) AMapRoute* route;
@property(retain, nonatomic) id<MAAnnotation> destinationAnnotation;
@property(retain, nonatomic) id<MAAnnotation> originAnnotation;
@property(assign, nonatomic) BOOL firstUpdateLocation;
-(void).cxx_destruct;
-(BOOL)isLocationAccurate:(id)accurate;
-(void)search:(id)search;
-(void)onReGeocodeSearchDone:(id)done response:(id)response;
-(void)onNavigationSearchDone:(id)done response:(id)response;
-(void)onPlaceSearchDone:(id)done response:(id)response;
-(void)mapView:(id)view didFailToLocateUserWithError:(id)error;
-(void)mapView:(id)view annotationView:(id)view2 calloutAccessoryControlTapped:(id)tapped;
-(void)mapView:(id)view didUpdateUserLocation:(id)location;
-(id)mapView:(id)view viewForAnnotation:(id)annotation;
-(void)searchKeywords:(id)keywords inCity:(id)city;
-(void)startSearching;
-(void)setLaunchOptions:(id)options;
-(void)viewDidLoad;
@end
