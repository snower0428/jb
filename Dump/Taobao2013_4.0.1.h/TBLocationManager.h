//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLLocationManagerDelegate.h"
#import "MKReverseGeocoderDelegate.h"

@class CLGeocoder, CLLocationManager, LocationGPS, MKReverseGeocoder, NSMutableArray, UIAlertView;

@interface TBLocationManager : NSObject <MKReverseGeocoderDelegate, CLLocationManagerDelegate>
{
    MKReverseGeocoder *_reverseGeoCoder;
    CLLocationManager *_locationManager;
    CDStruct_2c43369c _currentUserCoordinate;
    CLGeocoder *_geocoder;
    NSMutableArray *_notifiers;
    LocationGPS *_location;
    BOOL _isLocating;
    BOOL _isLocated;
    UIAlertView *_noServiceAlert;
}

+ (CDStruct_2c43369c)storedCoordinate;
+ (BOOL)isLocatingOn;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedLocationManager;
@property(readonly, nonatomic) BOOL isLocated; // @synthesize isLocated=_isLocated;
@property(readonly, nonatomic) BOOL isLocating; // @synthesize isLocating=_isLocating;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)showAlert;
- (BOOL)checkUpdateInterval;
- (void)recordLocatingTime;
- (void)reversePlacemark:(id)arg1;
- (void)displayError:(id)arg1;
- (void)displayPlacemarks:(id)arg1;
- (void)coordinateGeocode;
- (void)reverseGeocoder:(id)arg1 didFailWithError:(id)arg2;
- (void)reverseGeocoder:(id)arg1 didFindPlacemark:(id)arg2;
- (void)geocodeUserLocation;
- (void)notifyLocationResult:(id)arg1 withError:(id)arg2;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)notifyCoordinateFailWithError:(id)arg1;
- (void)goonNotifyAndReserverPlace:(BOOL)arg1;
- (void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3;
- (id)currentLocationGPS;
- (id)locatedLocation;
- (CDStruct_2c43369c)locatedGPS;
- (void)checkinUpdateLocation;
- (void)stopUpdatingCurrentLocation;
- (void)startUpdatingCurrentLocation;
- (void)updateLocationWithNotifier:(id)arg1;
- (id)gpsString;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

