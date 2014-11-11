/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "CLLocationManagerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary, NSString, CLLocationManager;

@interface AuthBaseEnvironment : XXUnknownSuperclass <CLLocationManagerDelegate> {
@private
	NSDictionary* _environment;
	CLLocationManager* _locationManager;
	NSString* _latitude;
	NSString* _longitude;
}
@property(retain, nonatomic) NSString* longitude;
@property(retain, nonatomic) NSString* latitude;
@property(retain, nonatomic) CLLocationManager* locationManager;
@property(retain, nonatomic) NSDictionary* environment;
-(void).cxx_destruct;
-(void)locationManager:(id)manager didFailWithError:(id)error;
-(void)locationManager:(id)manager didUpdateToLocation:(id)location fromLocation:(id)location3;
-(id)fetchSSIDInfo;
-(id)convertMacAddress:(id)address;
-(id)getEnvironment;
-(id)init;
@end
