//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class UIBarButtonItem, UIPopoverController, UISplitViewController, UIViewController;

@protocol UISplitViewControllerDelegate

@optional
- (BOOL)splitViewController:(UISplitViewController *)arg1 shouldHideViewController:(UIViewController *)arg2 inOrientation:(int)arg3;
- (void)splitViewController:(UISplitViewController *)arg1 popoverController:(UIPopoverController *)arg2 willPresentViewController:(UIViewController *)arg3;
- (void)splitViewController:(UISplitViewController *)arg1 willShowViewController:(UIViewController *)arg2 invalidatingBarButtonItem:(UIBarButtonItem *)arg3;
- (void)splitViewController:(UISplitViewController *)arg1 willHideViewController:(UIViewController *)arg2 withBarButtonItem:(UIBarButtonItem *)arg3 forPopoverController:(UIPopoverController *)arg4;
@end

