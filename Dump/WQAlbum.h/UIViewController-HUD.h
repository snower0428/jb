//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "MBProgressHUDDelegate.h"

@interface UIViewController (HUD) <MBProgressHUDDelegate>
- (id)createHUDWithView:(id)arg1 withSelector:(SEL)arg2 withObj:(id)arg3 withText:(id)arg4;
- (id)createWaittingHUDWithTitle:(id)arg1;
- (void)createPromptBoxWithTitle:(id)arg1 haveImage:(BOOL)arg2;
@end
