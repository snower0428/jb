//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBShowcaseViewController.h"

#import "SBAppSwitcherBarViewDelegate.h"
#import "SBIconViewDelegate.h"
#import "SBIconViewMapDelegate.h"

@class NSString, SBAppSwitcherBarView, SBAppSwitcherModel, SBNowPlayingBar, SBPrintStatusController;

@interface SBAppSwitcherController : SBShowcaseViewController <SBIconViewDelegate, SBAppSwitcherBarViewDelegate, SBIconViewMapDelegate>
{
    SBAppSwitcherModel *_model;
    SBNowPlayingBar *_nowPlayingBar;
    SBAppSwitcherBarView *_bottomBar;
    BOOL _editing;
    int _orientation;
    NSString *_topAppDisplayID;
    SBPrintStatusController *_printStatusController;
}

+ (id)sharedInstanceIfAvailable;
+ (id)sharedInstance;
@property(retain) NSString *topAppDisplayID; // @synthesize topAppDisplayID=_topAppDisplayID;
@property(readonly, nonatomic) SBAppSwitcherModel *model; // @synthesize model=_model;
- (void)restoreScrollPositionAfterSuspendGesture;
- (void)saveScrollPositionBeforeSuspendGesture;
- (void)appSwitcherBar:(id)arg1 pageAtIndexDidDisappear:(int)arg2;
- (void)appSwitcherBar:(id)arg1 pageAtIndexDidAppear:(int)arg2;
- (BOOL)appSwitcherBar:(id)arg1 scrollShouldCancelInContentForView:(id)arg2;
- (void)appSwitcherBarRemovedFromSuperview:(id)arg1;
- (BOOL)iconViewDisplaysBadges:(id)arg1;
- (void)iconCloseBoxTapped:(id)arg1;
- (int)closeBoxTypeForIcon:(id)arg1;
- (void)iconTouchBegan:(id)arg1;
- (void)iconHandleLongPress:(id)arg1;
- (BOOL)iconShouldAllowTap:(id)arg1;
- (void)iconTapped:(id)arg1;
- (Class)viewMap:(id)arg1 iconViewClassForIcon:(id)arg2;
- (int)viewMap:(id)arg1 locationForIcon:(id)arg2;
- (unsigned int)viewMap:(id)arg1 maxRecycledIconViewsOfClass:(Class)arg2;
- (BOOL)printViewIsShowing;
- (id)printIconView;
- (void)dismissPrintView;
- (void)removePrintStatusIconBadge;
- (void)setNeedsPrintStatusIcon:(BOOL)arg1;
- (void)_appActivationStateDidChange:(id)arg1;
- (id)_currentDownloads;
- (void)_removeApplicationFromRecents:(id)arg1;
- (void)_stopEditing;
- (void)_beginEditing;
- (BOOL)_inEditMode;
- (id)_bundleIdentifiersForViewDisplay;
- (BOOL)airPlayControlsVisible;
- (BOOL)nowPlayingControlsVisible;
- (BOOL)isScrolling;
- (BOOL)handleMenuButtonTap;
- (void)_iconModelVisibilityChanged:(id)arg1;
- (void)_iconModelChangedSignificantly;
- (void)setupForApp:(id)arg1 orientation:(int)arg2;
- (void)_reloadIconViewsAndShowFirstPage:(BOOL)arg1;
- (void)downloadChanged:(id)arg1;
- (void)downloadRemoved:(id)arg1;
- (void)viewDidRotateFromInterfaceOrientation:(int)arg1;
- (void)viewWillAnimateRotationToInterfaceOrientation:(int)arg1;
- (void)viewWillRotateToInterfaceOrientation:(int)arg1;
- (void)viewDidDisappear;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (float)bottomBarHeight;
- (id)view;
- (void)_newsstandFolderWasOpened:(id)arg1;
- (void)_appsDidChange:(id)arg1;
- (void)dealloc;
- (id)init;

@end

