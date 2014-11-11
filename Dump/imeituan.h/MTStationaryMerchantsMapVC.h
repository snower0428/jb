//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTMapViewController.h"

@class CLLocation, MTMapAnnotation, NSMutableArray, NSString;

@interface MTStationaryMerchantsMapVC : MTMapViewController
{
    BOOL _hasAddedAnnotations;
    NSMutableArray *_annotations;
    CDStruct_feeb6407 _innerRegion;
    BOOL _hasOuterRegion;
    CLLocation *_userLocation;
    MTMapAnnotation *_selectedAnnotation;
    BOOL _isInMap;
    BOOL _hasUpdateLocation;
    BOOL _isVirgin;
    BOOL _shouldUserLocationInView;
    NSString *_merchantName;
    CDUnknownBlockType _merchantSelectAction;
    NSString *_keyword;
    CDStruct_feeb6407 _outerRegion;
}

@property(nonatomic) CDStruct_feeb6407 outerRegion; // @synthesize outerRegion=_outerRegion;
@property(copy, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(copy, nonatomic) CDUnknownBlockType merchantSelectAction; // @synthesize merchantSelectAction=_merchantSelectAction;
@property(retain, nonatomic) NSString *merchantName; // @synthesize merchantName=_merchantName;
- (void).cxx_destruct;
- (void)showPOI;
- (void)mapView:(id)arg1 didFailToLocateUserWithError:(id)arg2;
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2;
- (void)resetRegionAndShowPOI;
- (void)merchantSelected:(id)arg1;
- (void)mapNavigation:(id)arg1;
- (id)getCurrentMerchantAnnotation;
- (void)didClickButtonOpenDefaultMap;
- (void)didClickButtonLocation;
- (void)didClickButtonBack;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithMerchants:(id)arg1;
- (void)setRegionForPoints:(id)arg1;
- (void)resetRegionWithAnimate:(BOOL)arg1;
- (void)genAnnotationsByMerchants:(id)arg1;

@end

