/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIViewController;

@interface BaseService : XXUnknownSuperclass {
@private
	UIViewController* _rootViewCtrl;
}
@property(retain, nonatomic) UIViewController* rootViewCtrl;
-(void).cxx_destruct;
-(void)generateBindCardSettingViewControllerWithInfo:(id)info CompletionBlock:(id)block;
-(void)generateSettingViewControllerWithExternal:(id)external CompletionBlock:(id)block;
-(void)notifyMinipayClose;
-(void)minipayFromBindcardWithModel:(id)model;
-(void)minipayInitWithOrderInfo:(id)orderInfo;
@end
