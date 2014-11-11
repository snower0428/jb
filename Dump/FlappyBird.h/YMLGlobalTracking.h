//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLLocationManagerDelegate.h"

@class CLLocationManager;

__attribute__((visibility("hidden")))
@interface YMLGlobalTracking : NSObject <CLLocationManagerDelegate>
{
    double _lastBeginTime;
    double _lastEndTime;
    double _lastLatitude;
    double _lastLongitude;
    double _currentBeginTime;
    double _currentEndTime;
    double _currentLatitude;
    double _currentLongitude;
    CLLocationManager *_locationManager;
    BOOL _shouldLocated;
    BOOL _locating;
    BOOL _locationAvailable;
    CDUnknownBlockType _completion_block;
}

+ (id)currentTracking;
@property(readonly, nonatomic, getter=isLocationAvailable) BOOL locationAvailable; // @synthesize locationAvailable=_locationAvailable;
@property(readonly, nonatomic, getter=isLocating) BOOL locating; // @synthesize locating=_locating;
@property(nonatomic) BOOL shouldLocated; // @synthesize shouldLocated=_shouldLocated;
@property(readonly, nonatomic) double currentLongitude; // @synthesize currentLongitude=_currentLongitude;
@property(readonly, nonatomic) double currentLatitude; // @synthesize currentLatitude=_currentLatitude;
@property(readonly, nonatomic) double currentEndTime; // @synthesize currentEndTime=_currentEndTime;
@property(readonly, nonatomic) double currentBeginTime; // @synthesize currentBeginTime=_currentBeginTime;
@property(readonly, nonatomic) double lastLongitude; // @synthesize lastLongitude=_lastLongitude;
@property(readonly, nonatomic) double lastLatitude; // @synthesize lastLatitude=_lastLatitude;
@property(readonly, nonatomic) double lastEndTime; // @synthesize lastEndTime=_lastEndTime;
@property(readonly, nonatomic) double lastBeginTime; // @synthesize lastBeginTime=_lastBeginTime;
- (void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)updateLocationWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)autorelease;
- (oneway void)release;
- (unsigned int)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_finishUpdateLocation:(BOOL)arg1 toLocation:(id)arg2 fromLocation:(id)arg3;
- (void)_createLocationManagerIfNecessary;
- (void)_saveData;
- (void)_readData;
- (void)_setupByGlobalTracking;

@end

