//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "BBObserverDelegate.h"
#import "SBBulletinListViewDelegate.h"
#import "SBBulletinWindowClient.h"
#import "SBWeeAppDelegate.h"

@class BBObserver, NSArray, NSMutableArray, NSMutableDictionary, NSTimer, SBApplication, SBBulletinClearButton, SBBulletinListTabView, SBBulletinListView, SBWeeApp, SBWeeAppPresentationView, UIView;

@interface SBBulletinListController : UIViewController <BBObserverDelegate, SBBulletinListViewDelegate, SBBulletinWindowClient, SBWeeAppDelegate>
{
    BBObserver *_observer;
    NSMutableDictionary *_enabledSectionsByID;
    NSMutableArray *_visibleSectionIDs;
    NSArray *_possibleSectionIDs;
    unsigned int _sectionOrderRule;
    NSMutableArray *_weeApps;
    NSMutableArray *_visibleWeeApps;
    NSMutableDictionary *_headerViewsBySectionID;
    SBBulletinListTabView *_tabView;
    SBBulletinListView *_listView;
    BOOL _listViewTableViewHasLoaded;
    BOOL _listViewIsActive;
    BOOL _animating;
    BOOL _weeAppFullViewsHaveBeenLoaded;
    BOOL _weeAppPresentingFullscreen;
    SBWeeApp *_presentingWeeApp;
    SBWeeAppPresentationView *_presentationView;
    UIView *_presentedFirstResponder;
    SBApplication *_coveredApplication;
    SBBulletinClearButton *_clearButtonCurrentlyInClearState;
    NSMutableArray *_enqueuedUpdates;
    BOOL _grabbed;
    float _grabbedY;
    BOOL _pullingDownOutsideList;
    float _showcaseOffset;
    NSTimer *_weeAppSnapshotTimer;
    id _keyboardNotificationObserverToken;
}

+ (id)sharedInstanceIfExists;
+ (id)sharedInstance;
+ (id)_sharedInstanceCreateIfNecessary:(BOOL)arg1;
- (BOOL)weeAppWantsNotificationCenterDismissal:(id)arg1;
- (BOOL)weeApp:(id)arg1 updatePresentationMode:(int)arg2 duration:(float)arg3 delay:(float)arg4;
- (void)weeAppWantsSizeUpdate:(id)arg1;
- (void)finishedScrollTest;
- (void)runScrollTest:(id)arg1 iterations:(int)arg2 delta:(int)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableViewDidFinishReload:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)_weeAppCellForSection:(id)arg1 sectionIndex:(unsigned int)arg2 tableView:(id)arg3;
- (BOOL)_useTopPaddingForWeeAppAtSectionIndex:(unsigned int)arg1;
- (id)_bulletinCellForSection:(id)arg1 sectionIndex:(unsigned int)arg2 row:(unsigned int)arg3 tableView:(id)arg4;
- (int)_separatorStyleForRow:(unsigned int)arg1 inSection:(id)arg2 sectionIndex:(unsigned int)arg3;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (struct CGSize)observer:(id)arg1 composedAttachmentSizeForType:(int)arg2 thumbnailWidth:(float)arg3 height:(float)arg4 key:(id)arg5;
- (id)observer:(id)arg1 composedAttachmentImageForType:(int)arg2 thumbnailData:(id)arg3 key:(id)arg4;
- (id)observer:(id)arg1 thumbnailSizeConstraintsForAttachmentType:(int)arg2;
- (BOOL)observerShouldFetchAttachmentSizeBeforeBulletinDelivery:(id)arg1;
- (BOOL)observerShouldFetchAttachmentImageBeforeBulletinDelivery:(id)arg1;
- (void)observer:(id)arg1 updateSectionInfo:(id)arg2;
- (void)observer:(id)arg1 updateSectionOrder:(id)arg2;
- (void)observer:(id)arg1 updateSectionOrderRule:(unsigned int)arg2;
- (void)observer:(id)arg1 removeBulletin:(id)arg2;
- (void)observer:(id)arg1 modifyBulletin:(id)arg2;
- (void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned int)arg3;
- (void)_updateModelAndTableViewForRemoval:(id)arg1 originalIndex:(unsigned int)arg2;
- (void)_updateModelAndTableViewForModification:(id)arg1 originalIndex:(unsigned int)arg2;
- (void)_updateModelAndTableViewForAddition:(id)arg1;
- (void)_fixLastRowSeparatorsAndWeeAppTopPaddingInAllSections;
- (void)_fixCellSeparatorAboveRow:(unsigned int)arg1 inSection:(id)arg2 sectionIndex:(unsigned int)arg3;
- (void)_updateModelAndTableViewForNewSectionInfo:(id)arg1;
- (void)_updateModelAndTableViewForEnabledWeeAppSection:(id)arg1 withVisibility:(BOOL)arg2;
- (void)_updateModelAndTableViewForNewSectionOrder:(id)arg1;
- (void)_updateModelAndTableViewForNewSectionOrderRule:(unsigned int)arg1;
- (void)bulletinWindowDidRotateFromOrientation:(int)arg1;
- (void)bulletinWindowIsAnimatingRotationToOrientation:(int)arg1;
- (void)bulletinWindowWillRotateToOrientation:(int)arg1;
- (void)bulletinWindowDidResignKey;
- (void)bulletinWindowDidBecomeKey;
- (BOOL)requiresKeyWindow;
- (void)_setClearButtonCurrentlyInClearState:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleEatenTouch:(id)arg1;
- (void)handlePan:(id)arg1;
- (void)handleTap:(id)arg1;
- (void)handleShowNotificationsGestureCanceled;
- (void)handleShowNotificationsGestureEndedWithVelocity:(struct CGPoint)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleShowNotificationsGestureChangedWithTouchLocation:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;
- (void)handleShowNotificationsGestureBeganWithTouchLocation:(struct CGPoint)arg1;
- (void)_updateForTouchCanceled;
- (void)_updateForTouchEndedWithVelocity:(struct CGPoint)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_updateForTouchBeganOrMovedWithLocation:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;
- (void)_handleUngrabWithVelocity:(struct CGPoint)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_clearSection:(id)arg1;
- (float)_headerHeightForSection:(id)arg1;
- (float)_rowHeightForBulletin:(id)arg1;
- (id)_indexPathForBulletin:(id)arg1;
- (id)_bulletinAtIndexPath:(id)arg1;
- (id)_sectionAtIndex:(unsigned int)arg1;
- (void)_configureForChangedContentAnimated:(BOOL)arg1;
- (void)_reloadTableView;
- (void)_loadSections;
- (void)_performEnqueuedUpdates;
- (void)_performOrEnqueueUpdate:(CDUnknownBlockType)arg1;
- (BOOL)_canPerformUpdate;
- (id)_weeAppForSectionID:(id)arg1 bundlePath:(id)arg2;
- (void)_removeWeeAppForSectionID:(id)arg1;
- (id)_weeAppForSectionID:(id)arg1;
- (unsigned int)_insertVisibleSectionID:(id)arg1;
- (void)_sortVisibleSectionIDs;
- (BOOL)isAnimating;
- (BOOL)weeAppIsFullScreen;
- (BOOL)listViewIsActive;
- (BOOL)isActive;
- (void)_tearDownPresentationView;
- (void)_tearDownTabView;
- (void)_tearDownListViewKeepingWindow:(BOOL)arg1;
- (void)_snapshotTimerFired;
- (void)_clearWeeAppSnapshots;
- (void)_clearSnapshotTimer;
- (void)adjustViewForShowcaseOffset:(float)arg1;
- (void)_setListViewActive:(BOOL)arg1;
- (void)showListViewWithInitialVelocity:(float)arg1 completion:(CDUnknownBlockType)arg2;
- (void)hideListViewWithInitialVelocity:(float)arg1 completion:(CDUnknownBlockType)arg2;
- (void)hideListViewWithInitialVelocity:(float)arg1 hiddenY:(float)arg2 extraPull:(BOOL)arg3 additionalValueApplier:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (void)showListViewWithInitialVelocity:(float)arg1 additionalValueApplier:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_newDynamicAnimationForShow:(BOOL)arg1 targetValue:(double)arg2 withInitialVelocity:(double)arg3 extraPull:(BOOL)arg4;
- (void)hideFullScreenWeeApp;
- (void)hideListViewAnimated:(BOOL)arg1 useFade:(BOOL)arg2 keepWindow:(BOOL)arg3;
- (void)hideListViewAnimated:(BOOL)arg1 useFade:(BOOL)arg2;
- (void)hideListViewAnimated:(BOOL)arg1;
- (void)showListViewAnimated:(BOOL)arg1;
- (void)finishShowingListView;
- (void)_finishShowingListViewAnimated:(BOOL)arg1;
- (void)_cleanupAfterHideListViewKeepingWindow:(BOOL)arg1;
- (void)_cleanupAfterShowListView;
- (void)setListViewBottomShadowAlpha:(float)arg1;
- (void)positionListViewAtY:(float)arg1;
- (void)_positionTabViewAtY:(float)arg1;
- (void)prepareToHideListViewAnimated:(BOOL)arg1;
- (void)prepareToShowListViewAnimated:(BOOL)arg1 aboveBanner:(BOOL)arg2;
- (BOOL)isShowingTabView;
- (void)hideTabViewAnimated:(BOOL)arg1;
- (void)showTabViewAnimated:(BOOL)arg1;
- (float)listViewHeight;
- (id)listView;
- (void)_configureBBObserver;
- (void)dealloc;
- (id)init;

@end

