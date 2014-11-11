//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBMBaseViewController.h"

#import "CLLocationManagerDelegate.h"
#import "MKMapViewDelegate.h"
#import "UIActionSheetDelegate.h"

@class CLGeocoder, CLLocationManager, MKMapView, NSString, TBMMapAnnotation, UIButton, UILabel;

@interface TBMCinemaMapViewController : TBMBaseViewController <CLLocationManagerDelegate, UIActionSheetDelegate, MKMapViewDelegate>
{
    CLLocationManager *_locationManager;
    BOOL _locating;
    BOOL _isViewDidLoad;
    UILabel *titleLabel;
    UIButton *findRouteBtn;
    MKMapView *cinemaInMap;
    NSString *cinemaName;
    NSString *cinemaAddr;
    TBMMapAnnotation *_ownerAnn;
    TBMMapAnnotation *_cinemaAnn;
    CLGeocoder *_geocoder;
    CDStruct_2c43369c coordinate;
}

@property(retain, nonatomic) CLGeocoder *geocoder; // @synthesize geocoder=_geocoder;
@property(retain, nonatomic) TBMMapAnnotation *cinemaAnn; // @synthesize cinemaAnn=_cinemaAnn;
@property(retain, nonatomic) TBMMapAnnotation *ownerAnn; // @synthesize ownerAnn=_ownerAnn;
@property(nonatomic) BOOL isViewDidLoad; // @synthesize isViewDidLoad=_isViewDidLoad;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(retain, nonatomic) NSString *cinemaAddr; // @synthesize cinemaAddr;
@property(nonatomic) CDStruct_2c43369c coordinate; // @synthesize coordinate;
@property(retain, nonatomic) NSString *cinemaName; // @synthesize cinemaName;
@property(nonatomic) MKMapView *cinemaInMap; // @synthesize cinemaInMap;
@property(retain, nonatomic) UIButton *findRouteBtn; // @synthesize findRouteBtn;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel;
- (void)dealloc;
- (void)mapView:(id)arg1 didAddAnnotationViews:(id)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3;
- (void)startGettingLocation;
- (void)getNowPostion;
- (void)findRouteAction:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewDidUnload;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithCoordinate:(CDStruct_2c43369c)arg1 cinemaName:(id)arg2 cinemaAddr:(id)arg3;
- (id)initWithNibNameAndCoordinate:(id)arg1 bundle:(id)arg2 coordinate:(CDStruct_2c43369c)arg3 cinemaName:(id)arg4 cinemaAddr:(id)arg5;
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithArgs:(id)arg1;

@end
