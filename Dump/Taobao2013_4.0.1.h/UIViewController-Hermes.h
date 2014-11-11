//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@interface UIViewController (Hermes)
- (id)TBViewControllerWithDefaultRightSlideViewController:(id)arg1;
- (void)showToastText:(id)arg1 inView:(id)arg2;
- (void)showToast:(id)arg1;
- (void)removeStatusBarRectChangeNotifaction;
- (void)addStatusBarRectChangeNotifaction;
- (void)layoutViews;
- (void)switchToBettingAtLotteryType:(int)arg1;
- (void)popMiddleViewControllers;
- (id)findViewControllerOfClass:(Class)arg1 onUINavigationController:(id)arg2;
- (void)addShadow:(id)arg1;
- (void)rotateArrow;
- (void)addExtensionWithAction:(SEL)arg1;
- (id)navView;
- (id)navTitleView;
- (void)setSubheading:(id)arg1;
- (id)createNoResultPageWithImage:(id)arg1 andPrompt:(id)arg2 orginY:(float)arg3;
- (void)hideLoadingView;
- (void)showLoadingView:(id)arg1;
- (void)showLoadingView;
- (void)showEditUserInfoFromTarget:(id)arg1 andSuccessSel:(SEL)arg2 andCancelSel:(SEL)arg3;
- (void)showEditUserInfo;
- (void)showLoginWithBlock:(CDUnknownBlockType)arg1;
- (void)loginCancel;
- (void)loginSuccess;
- (void)backNavigationBarWithTitle:(id)arg1;
- (void)goBackAction;
- (id)textItemWithTitle:(id)arg1 color:(id)arg2 shadowColor:(id)arg3 shadowSize:(struct CGSize)arg4 Width:(int)arg5 font:(id)arg6;
- (id)iconItemWithNormalImage:(id)arg1 selectedImage:(id)arg2 target:(id)arg3 Action:(SEL)arg4;
- (id)centerItemWithTitle:(id)arg1 color:(id)arg2 shadowColor:(id)arg3 shadowSize:(struct CGSize)arg4 normalImage:(id)arg5 selectedImage:(id)arg6 target:(id)arg7 Action:(SEL)arg8;
- (id)centerItemNormalWithTitle:(id)arg1 target:(id)arg2 Action:(SEL)arg3;
- (id)backItem;
- (id)backItemWithAction:(SEL)arg1;
- (void)lotteryBackItemClicked:(id)arg1;
- (void)setNavTitleView:(id)arg1;
- (void)setNavTitle:(id)arg1;
- (void)setShadowOnToolbar;
- (void)removeTitleNav;
- (struct CGRect)getViewRect;
- (id)navRightButtons:(id)arg1;
- (id)navRightButtonWithTitle:(id)arg1 image:(id)arg2 target:(id)arg3 action:(SEL)arg4;
- (id)navRightButtonWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (id)navLeftButtonWithTitle:(id)arg1 image:(id)arg2 target:(id)arg3 action:(SEL)arg4;
- (id)navLeftButtonWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (void)loadNavBackground;
@end
