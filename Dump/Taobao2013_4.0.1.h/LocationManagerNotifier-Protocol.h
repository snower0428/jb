//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LocationGPS, NSError;

@protocol LocationManagerNotifier <NSObject>

@optional
- (void)notifyLocationWithError:(NSError *)arg1;
- (void)notifyCoordinateWithError:(NSError *)arg1;
- (void)notifyUpdateCoordinate:(CDStruct_2c43369c)arg1;
- (void)notifyFetchLocation:(LocationGPS *)arg1;
@end
