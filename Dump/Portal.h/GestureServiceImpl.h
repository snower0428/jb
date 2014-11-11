/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "GestureService.h"
#import "GestrueViewControllerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, UIWindow;

@interface GestureServiceImpl : XXUnknownSuperclass <GestureService, GestrueViewControllerDelegate> {
@private
	BOOL _isBlockGesture;
	BOOL _isForceLock;
	BOOL _isInFasterPay;
	BOOL _isNeedForegroundNotification;
	id _gestureComplete;
	UIWindow* _window;
	NSString* _currentLoginId;
	int _gestureType;
	double time;
}
@property(assign, nonatomic) BOOL isNeedForegroundNotification;
@property(assign, nonatomic) BOOL isInFasterPay;
@property(assign, nonatomic) BOOL isForceLock;
@property(assign, nonatomic) int gestureType;
@property(assign, nonatomic) double time;
@property(retain, nonatomic) NSString* currentLoginId;
@property(retain, nonatomic) UIWindow* window;
@property(copy, nonatomic) id gestureComplete;
-(void).cxx_destruct;
-(void)didEnterBackgroundNotification:(id)notification;
-(void)doFrontForegroundNotification:(id)notification;
-(void)doSignificantTimeChangeNotification:(id)notification;
-(void)doExistDoHandleUrl:(id)url;
-(void)doHandleUrl:(id)url;
-(void)gestureViewWantToReLogin:(id)reLogin isAddNew:(BOOL)aNew;
-(void)gestureViewWantToQuite:(id)quite;
-(BOOL)canHandleOpenURL:(id)url;
-(void)stopWaitAnimation;
-(void)startWaitAinimation;
-(void)resetAllAlerviews;
-(void)setAlertForeGround;
-(void)setAlertBackGround;
-(void)quiteGestureWindow:(BOOL)window isGoingLogin:(BOOL)login isInUnlock:(BOOL)unlock;
-(void)runOperation:(int)operation withComplete:(id)complete;
-(BOOL)isSetGestureWindowShowed;
-(BOOL)isUnlockGestureWindowShowed;
-(BOOL)isGestureWindowShowed;
-(void)modifyGesture:(id)gesture;
-(void)modifyGesture;
-(void)setGesture:(id)gesture;
-(BOOL)isNeedSetGesture;
-(BOOL)ifShouldShowGestureFromLanuch;
-(void)doGestureFromLaunch:(id)launch;
-(int)gestureTypeFromLanuch;
-(int)gestureFromForeground;
-(void)doGestureShowFromBackgroundWithComplete:(id)complete;
-(void)doStart;
-(void)setBlockGesture:(BOOL)gesture;
-(void)start;
-(id)init;
-(void)dealloc;
@end

