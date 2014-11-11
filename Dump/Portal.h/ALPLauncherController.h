/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "DTLauncher.h"
#import "APCoverViewDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, NSMutableArray, ALPLauncherControllerKVOHandler, UIImageView, LauncherWidgetFactory, APCoverView;

@interface ALPLauncherController : XXUnknownSuperclass <DTLauncher, APCoverViewDelegate> {
@private
	BOOL isActive;
	APCoverView* waitingView;
	NSArray* _widgets;
	LauncherWidgetFactory* _widgetFactory;
	NSMutableArray* _badgesList;
	ALPLauncherControllerKVOHandler* _kvoHandler;
	UIImageView* _leftImgView;
	UIImageView* _rightImgView;
}
@property(retain, nonatomic) UIImageView* rightImgView;
@property(retain, nonatomic) UIImageView* leftImgView;
@property(retain, nonatomic) ALPLauncherControllerKVOHandler* kvoHandler;
@property(retain, nonatomic) NSMutableArray* badgesList;
@property(retain, nonatomic) LauncherWidgetFactory* widgetFactory;
@property(retain, nonatomic) NSArray* widgets;
-(void).cxx_destruct;
-(BOOL)addSkipBackupAttributeToDocumentDirectory;
-(void)dealloc;
-(id)_getSSAuthService;
-(id)_getUserInfo;
-(BOOL)_isLogin;
-(void)tabBarController:(id)controller didSelectViewController:(id)controller2;
-(void)updateImageForTabItemAtIndex:(int)index selected:(BOOL)selected;
-(id)findTabBarButtonByTitle:(id)title;
-(int)selectedWindgetIndex;
-(void)setSelectedWidgetByIndex:(int)index;
-(id)selectedWidget;
-(void)setSelectedWidget:(id)widget;
-(void)backToHome;
-(void)userExitLogin:(id)login;
-(void)updateSmallBadge:(id)badge;
-(void)setSmallBadgeHide:(BOOL)hide atWidgetIndex:(int)widgetIndex;
-(void)appDidBecomeActive;
-(void)appWillResignActive;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
-(void)loginDidFinsh:(id)login;
-(void)callGestureServiceEx;
-(void)callGestureService;
-(void)startupPageDidDismiss;
-(id)init;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
@end
