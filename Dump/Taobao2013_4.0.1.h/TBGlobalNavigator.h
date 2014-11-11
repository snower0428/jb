//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBNavigator.h"

@class UIViewController;

__attribute__((visibility("hidden")))
@interface TBGlobalNavigator : TBNavigator
{
    UIViewController *_homeTabViewController;
    UIViewController *_searchTabViewController;
    UIViewController *_cartTabViewController;
    UIViewController *_myTaobaoTabViewController;
    UIViewController *_transformTabViewController;
}

+ (void)checkRegisterConflict;
+ (id)alipayPathArray;
+ (id)alipayHostArray;
+ (BOOL)isAlipayURL:(id)arg1;
@property(nonatomic) UIViewController *transformTabViewController; // @synthesize transformTabViewController=_transformTabViewController;
@property(nonatomic) UIViewController *myTaobaoTabViewController; // @synthesize myTaobaoTabViewController=_myTaobaoTabViewController;
@property(nonatomic) UIViewController *cartTabViewController; // @synthesize cartTabViewController=_cartTabViewController;
@property(nonatomic) UIViewController *searchTabViewController; // @synthesize searchTabViewController=_searchTabViewController;
@property(nonatomic) UIViewController *homeTabViewController; // @synthesize homeTabViewController=_homeTabViewController;
- (id)containerViewControllerForTarget:(id)arg1 navigateType:(int)arg2 sourceController:(id)arg3;
- (id)containerViewControllerForController:(id)arg1 navigateType:(int)arg2;
- (BOOL)openURLAction:(id)arg1;
- (BOOL)handleShareURL:(id)arg1;
- (BOOL)handleGameCenterURL:(id)arg1;
- (BOOL)handleWWURL:(id)arg1;
- (BOOL)handleSafePayResult:(id)arg1;
- (BOOL)handleAlipayAction:(id)arg1;
- (id)targetControllerof:(id)arg1;
- (BOOL)backURLAction:(id)arg1;
- (BOOL)openMenuFromSource:(id)arg1 sender:(id)arg2;
- (BOOL)handleScriptAction:(id)arg1;
- (id)getParameterValueWithName:(id)arg1 parameters:(id)arg2;
- (BOOL)isScriptAction:(id)arg1;
- (BOOL)handleAppURL:(id)arg1;

@end

