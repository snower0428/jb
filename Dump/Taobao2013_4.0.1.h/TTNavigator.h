//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTBaseNavigator.h"

@interface TTNavigator : TTBaseNavigator
{
}

+ (id)navigator;
- (Class)navigationControllerClass;
- (void)reload;
- (id)getVisibleChildController:(id)arg1;
- (void)didRestoreController:(id)arg1;
- (void)presentDependantController:(id)arg1 parentController:(id)arg2 mode:(int)arg3 action:(id)arg4;
- (void)presentPopupController:(id)arg1 parentController:(id)arg2 action:(id)arg3;
- (Class)windowClass;

@end

