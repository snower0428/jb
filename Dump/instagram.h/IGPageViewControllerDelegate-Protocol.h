//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGPageViewController, UIViewController;

@protocol IGPageViewControllerDelegate <NSObject>
- (void)pageViewControllerDidFinishScrolling:(IGPageViewController *)arg1;
- (void)pageViewController:(IGPageViewController *)arg1 didChangeCurrentViewControllerToController:(UIViewController *)arg2 atIndex:(int)arg3;
@end

