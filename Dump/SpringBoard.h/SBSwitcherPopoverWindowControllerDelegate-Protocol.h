//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBSwitcherPopoverWindowController;

@protocol SBSwitcherPopoverWindowControllerDelegate <NSObject>

@optional
- (void)switcherPopoverController:(SBSwitcherPopoverWindowController *)arg1 didRotateFromInterfaceOrientation:(int)arg2;
- (void)switcherPopoverController:(SBSwitcherPopoverWindowController *)arg1 willRotateToOrientation:(int)arg2 duration:(double)arg3;
@end

