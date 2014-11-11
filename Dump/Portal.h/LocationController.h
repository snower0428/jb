/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "CLLocationManagerDelegate.h"
#import "Portal-Structs.h"

@class NSMutableArray, NSTimer, AVAudioPlayer, UIImageView, UIButton, CLLocation, CLLocationManager, NSMutableDictionary;

@interface LocationController : XXUnknownSuperclass <CLLocationManagerDelegate> {
@private
	UIImageView* _waveView;
	NSTimer* _timer;
	UIButton* _searchButton;
	UIButton* _exitButton;
	UIImageView* _introView;
	CLLocationManager* _locationManager;
	AVAudioPlayer* _player;
	CLLocation* _currentLocation;
	int _tempCount;
	NSMutableDictionary* _userDisplayDict;
	int _iconIndex;
	NSMutableArray* _iconArray;
}
@property(retain, nonatomic) NSMutableArray* iconArray;
@property(assign, nonatomic) int iconIndex;
@property(retain, nonatomic) NSMutableDictionary* userDisplayDict;
@property(assign, nonatomic) int tempCount;
@property(retain, nonatomic) CLLocation* currentLocation;
@property(retain, nonatomic) AVAudioPlayer* player;
@property(retain, nonatomic) CLLocationManager* locationManager;
@property(retain, nonatomic) UIImageView* introView;
@property(assign, nonatomic) __weak UIButton* exitButton;
@property(assign, nonatomic) __weak UIButton* searchButton;
@property(retain, nonatomic) NSTimer* timer;
@property(retain, nonatomic) UIImageView* waveView;
-(void).cxx_destruct;
-(void)locationManager:(id)manager didUpdateLocations:(id)locations;
-(void)locationManager:(id)manager didFailWithError:(id)error;
-(void)didReceiveMemoryWarning;
-(id)createWave;
-(void)waveAnimate:(id)animate;
-(void)createIconWithAnimate:(float)animate posY:(float)y url:(id)url name:(id)name;
-(BOOL)checkPointValidate:(CGPoint)validate;
-(CGPoint)createRandomPoint;
-(void)createRandomIconWithUrl:(id)url name:(id)name;
-(void)handleTimer:(id)timer;
-(void)searchPress:(id)press;
-(void)searchUp:(id)up;
-(void)exitLBS:(id)lbs;
-(id)createIconView:(float)view posY:(float)y url:(id)url;
-(void)buildUI;
-(void)setupLocationManager;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
-(void)dealloc;
@end

