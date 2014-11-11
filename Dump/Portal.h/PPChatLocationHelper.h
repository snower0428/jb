/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "CLLocationManagerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, PPChatLocationReporter, CLLocationManager, PPChatDataController, NSDate, NSTimer;

@interface PPChatLocationHelper : XXUnknownSuperclass <CLLocationManagerDelegate> {
@private
	PPChatDataController* _dataController;
	CLLocationManager* _locationManager;
	PPChatLocationReporter* _locationReporter;
	NSMutableArray* _locations;
	NSDate* _startTime;
	NSTimer* _timer;
}
@property(retain, nonatomic) NSTimer* timer;
@property(retain, nonatomic) NSDate* startTime;
@property(retain, nonatomic) NSMutableArray* locations;
@property(retain, nonatomic) PPChatLocationReporter* locationReporter;
@property(retain, nonatomic) CLLocationManager* locationManager;
@property(retain, nonatomic) PPChatDataController* dataController;
-(void).cxx_destruct;
-(void)locationManager:(id)manager didFailWithError:(id)error;
-(void)locationManager:(id)manager didUpdateLocations:(id)locations;
-(void)locationManager:(id)manager didUpdateToLocation:(id)location fromLocation:(id)location3;
-(void)gotLocation:(id)location;
-(void)reportLocation:(id)location;
-(void)reportFinalLocation:(id)location;
-(void)checkup;
-(void)locationManager:(id)manager didChangeAuthorizationStatus:(int)status;
-(void)stop;
-(void)start;
-(void)dealloc;
-(id)initWithDataController:(id)dataController;
@end

