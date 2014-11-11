//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSError;

@interface ATCLocationManager : NSObject
{
    NSDate *_lastNotifyDate;
    BOOL _locationUseCache;
    float _latitude;
    float _longitude;
    NSError *_locationError;
    CDUnknownBlockType _outsideBlock;
    double _locationAccuracy;
}

+ (id)sharedInstance;
@property(copy, nonatomic) CDUnknownBlockType outsideBlock; // @synthesize outsideBlock=_outsideBlock;
@property(readonly, nonatomic) NSError *locationError; // @synthesize locationError=_locationError;
@property(nonatomic) double locationAccuracy; // @synthesize locationAccuracy=_locationAccuracy;
@property(nonatomic) BOOL locationUseCache; // @synthesize locationUseCache=_locationUseCache;
@property(readonly, nonatomic) float longitude; // @synthesize longitude=_longitude;
@property(readonly, nonatomic) float latitude; // @synthesize latitude=_latitude;
- (void).cxx_destruct;
- (void)startLocationWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)init;

@end

