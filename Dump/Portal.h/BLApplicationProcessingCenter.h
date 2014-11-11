/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UINavigationController;
@protocol DTLauncher, SSAuthService, SAAccountService;

@interface BLApplicationProcessingCenter : XXUnknownSuperclass {
	UINavigationController* currentNavigationController;
	id<DTLauncher> launcher;
	id<SAAccountService> accountService;
	id<SSAuthService> authService;
}
@property(assign, nonatomic) id<SSAuthService> authService;
@property(assign, nonatomic) id<DTLauncher> launcher;
@property(assign, nonatomic) id<SAAccountService> accountService;
@property(assign, nonatomic) UINavigationController* currentNavigationController;
-(BOOL)popBeforeViewControllers:(id)controllers animated:(BOOL)animated;
-(BOOL)popToViewControllers:(id)viewControllers animated:(BOOL)animated;
-(void)popToViewController:(id)viewController animated:(BOOL)animated;
-(void)popRootViewController:(BOOL)controller;
-(void)popViewController:(BOOL)controller;
-(void)pushViewController:(id)controller animated:(BOOL)animated;
-(id)titleFromSourceId:(id)sourceId;
-(id)handParamsForPuclicConsume:(id)puclicConsume;
-(id)handParamsForMobile:(id)mobile;
-(id)handParamsForTransfer:(id)transfer action:(id)action;
-(id)handParamsForCreditCard:(id)creditCard;
-(BOOL)validateLegacySystem:(id)system;
-(id)getAppIdWithDic:(id)dic action:(id)action;
-(id)handleWithAppId:(id)appId Params:(id)params action:(id)action;
-(BOOL)startApplicationCenter:(id)center action:(id)action;
-(BOOL)startApp:(id)app params:(id)params animated:(BOOL)animated;
-(BOOL)startPageWithAction:(id)action paraInfo:(id)info title:(id)title BaseColorString:(id)string;
-(BOOL)showSettingButton:(id)button;
-(BOOL)applicationProcessingCenter:(id)center;
-(id)pushEvnetProcessing:(id)processing;
@end
