/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "DTLauncherWidgetGroupBase.h"

@class HPAccountAreaHomeWeightViewController, HPFuncAreaHomeWeigetViewController, UIView;

@interface HPHomeWidgetGroup : DTLauncherWidgetGroupBase {
@private
	int accountArea;
	int funcArea;
	BOOL navigateBarHidden;
	BOOL dontInokeNavigationHidden;
	UIView* _accountAreaView;
	UIView* _funcAreaView;
	HPAccountAreaHomeWeightViewController* _accountWeiget;
	HPFuncAreaHomeWeigetViewController* _funcAreaWeiget;
}
@property(retain, nonatomic) HPFuncAreaHomeWeigetViewController* funcAreaWeiget;
@property(retain, nonatomic) HPAccountAreaHomeWeightViewController* accountWeiget;
@property(retain, nonatomic) UIView* funcAreaView;
@property(retain, nonatomic) UIView* accountAreaView;
+(BOOL)jumpFlag;
+(void)setJumpFlag:(BOOL)flag;
-(void).cxx_destruct;
-(void)_dontInovkeNavigationHidden;
-(void)viewDidAppear:(BOOL)view;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(id)allWidgets;
-(void)createSubviews;
-(void)tabBarController:(id)controller didSelectViewController:(id)controller2;
-(void)viewDidLoad;
-(id)init;
@end

