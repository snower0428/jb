//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BBObserverDelegate.h"
#import "SBIconIndexNodeObserver.h"
#import "SBIconListPageControlDelegate.h"
#import "SBIconModelDelegate.h"
#import "SBIconViewDelegate.h"
#import "SBIconViewMapDelegate.h"
#import "UIScrollViewDelegate.h"

@class BBObserver, NSIndexPath, NSMutableArray, NSMutableSet, NSObject<OS_dispatch_queue>, NSString, NSTimer, SBDockIconListView, SBFolder, SBFolderScrollOffset, SBFolderSlidingView, SBFolderView, SBIcon, SBIconListPageControl, SBIconListView, SBIconModel, SBIconScrollView, SBLeafIcon, SBRootFolder, SBSearchController, SBSearchView, SBWallpaperNotchView, TPLCDTextView, UITouch, UIView;

@interface SBIconController : NSObject <SBIconListPageControlDelegate, BBObserverDelegate, UIScrollViewDelegate, SBIconViewDelegate, SBIconIndexNodeObserver, SBIconModelDelegate, SBIconViewMapDelegate>
{
    SBIconModel *_iconModel;
    SBRootFolder *_rootFolder;
    UIView *_contentView;
    SBIconScrollView *_scrollView;
    SBIconListPageControl *_pageControl;
    NSMutableArray *_rootIconLists;
    SBDockIconListView *_dock;
    UIView *_dockContainerView;
    BOOL _needsRelayout;
    BOOL _sendITunesNotification;
    BBObserver *_bbObserver;
    NSMutableSet *_displayIDsWithBadgingDisabled;
    SBFolderView *_folderView;
    NSMutableArray *_folderIconLists;
    SBFolder *_openFolder;
    SBFolder *_closingFolder;
    SBFolder *_folderToReopenWhenSwitcherCloses;
    SBFolder *_folderToOpenWhenScrollingEnds;
    SBFolderScrollOffset *_openFolderScrollOffset;
    NSIndexPath *_openFolderIndexPath;
    NSString *_openFolderName;
    UIView *_slidingViewsContainer;
    SBFolderSlidingView *_upperSlidingView;
    SBFolderSlidingView *_lowerSlidingView;
    UIView *_upperIconsSlidingView;
    SBWallpaperNotchView *_slidingNotchView;
    int _ghostedRequesters;
    SBIconListView *_ghostedIconListForFolder;
    SBIconListView *_ghostedIconListForSwitcher;
    int _currentIconListIndex;
    unsigned int _currentFolderIconListIndex;
    int _minVisibleListViewIndex;
    int _maxVisibleListViewIndex;
    int _disableUpdatingCurrentIconListCount;
    BOOL _rotating;
    SBIconListView *_rotatingIconList;
    TPLCDTextView *_idleText;
    float _currentIdleTextOffset;
    SBSearchView *_searchView;
    SBSearchController *_searchController;
    int _orientation;
    SBIcon *_lastTappedIcon;
    SBLeafIcon *_iconToReveal;
    SBIcon *_grabbedIcon;
    SBIcon *_recipientIcon;
    NSMutableArray *_droppedIconsAnimatingIntoPlace;
    NSMutableArray *_droppedIconsInToOrOutOfFolder;
    unsigned int _numberOfDroppedIconsAnimatingIntoOrOutOfFolder;
    NSTimer *_closeFolderTimer;
    SBIcon *_lastTouchedIcon;
    NSTimer *_scrollPageTimer;
    unsigned int _didScroll:1;
    unsigned int _isEditing:1;
    unsigned int _animatedScrolling:1;
    unsigned int _scrollingToSearch:1;
    unsigned int _movedFromOrigin:1;
    unsigned int _animatingFolder:1;
    unsigned int _folderClosedWhileAnimatingOpen:1;
    unsigned int _grabbedIconHasEverEnteredFolderView:1;
    unsigned int _grabbedIconIsDraggedOutOfFolderView:1;
    BOOL _allowsUninstall;
    float _iconAlpha;
    float _searchViewAlpha;
    float _oldScrollOffset;
    UITouch *_lastTouch;
    struct CGPoint _dragPausePoint;
    NSTimer *_dragPauseTimer;
    NSTimer *_folderSpringloadTimer;
    BOOL _folderKeyboardIsAnimatingRotation;
    BOOL _isAnimatingDockForIconScatter;
    BOOL _isAnimatingDockFade;
    BOOL _isAnimatingFolderCreation;
    BOOL _isAnimatingForUnscatter;
    NSObject<OS_dispatch_queue> *_folderIconLoadingBackgroundQueue;
    unsigned int _maxIconViewsInHierarchy;
    unsigned int _maxNewsstandItemViewsInHierarchy;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) SBSearchController *searchController; // @synthesize searchController=_searchController;
- (void)observer:(id)arg1 updateSectionInfo:(id)arg2;
- (void)_updateDisabledBadgesSetWithSections:(id)arg1;
- (BOOL)_badgesAreDisabledForSectionInfo:(id)arg1;
- (BOOL)iconViewDisplaysBadges:(id)arg1;
- (BOOL)iconAllowsBadging:(id)arg1;
- (BOOL)iconShouldPrepareGhostlyImage:(id)arg1;
- (void)iconCloseBoxTapped:(id)arg1;
- (int)closeBoxTypeForIcon:(id)arg1;
- (BOOL)icon:(id)arg1 canReceiveGrabbedIcon:(id)arg2;
- (void)iconTapped:(id)arg1;
- (BOOL)iconShouldAllowTap:(id)arg1;
- (void)icon:(id)arg1 touchMovedWithEvent:(id)arg2;
- (void)iconTouchBegan:(id)arg1;
- (void)icon:(id)arg1 touchEnded:(BOOL)arg2;
- (void)iconHandleLongPress:(id)arg1;
- (BOOL)iconPositionIsEditable:(id)arg1;
- (BOOL)iconAllowJitter:(id)arg1;
- (Class)viewMap:(id)arg1 iconViewClassForIcon:(id)arg2;
- (int)viewMap:(id)arg1 locationForIcon:(id)arg2;
- (unsigned int)viewMap:(id)arg1 maxRecycledIconViewsOfClass:(Class)arg2;
- (unsigned int)viewMap:(id)arg1 numberOfViewsToPrepareOfClass:(Class)arg2;
- (id)viewMapShouldPrepareViewsOfClasses:(id)arg1;
- (void)didDeleteIconState:(id)arg1;
- (void)didSaveIconState:(id)arg1;
- (BOOL)canSaveIconState:(id)arg1;
- (void)noteIconStateChangedExternally;
- (BOOL)importIconState:(id)arg1;
- (void)_iconModelDidLayout:(id)arg1;
- (void)_iconModelWillLayout:(id)arg1;
- (void)_iconModelDidReloadIcons:(id)arg1;
- (BOOL)relayout;
- (void)_observeNewsstandFolder;
- (void)node:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2;
- (void)node:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2;
- (BOOL)isIconVisiblyRepresented:(id)arg1;
- (BOOL)_iconListIndexIsValid:(int)arg1;
- (void)layoutIconLists:(float)arg1 domino:(BOOL)arg2 forceRelayout:(BOOL)arg3;
- (void)compactIconsInIconListsInFolder:(id)arg1 moveNow:(BOOL)arg2 limitToIconList:(id)arg3;
- (void)compactRootIconLists;
- (void)compactFolders:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)folderSpringloadTimerFired;
- (void)dragPauseTimerFired;
- (void)noteGrabbedIconLocationChangedWithTouch:(id)arg1;
- (void)resetFolderSpringloadTimer;
- (void)cancelFolderSpringloadTimer;
- (void)resetDragPauseTimer;
- (void)cancelDragPauseTimer;
- (void)setCloseFolderTimerIfNecessary;
- (void)closeFolderTimerFired;
- (void)cancelCloseFolderTimer;
- (void)scrollRight;
- (void)scrollLeft;
- (void)_scrollByListOffset:(int)arg1;
- (void)cancelScrollTimer;
- (id)recipientIcon;
- (void)setLastTouchedIcon:(id)arg1;
- (id)lastTouchedIcon;
- (void)setRecipientIcon:(id)arg1 duration:(double)arg2;
- (id)grabbedIcon;
- (void)_iconDropDidFinish:(id)arg1;
- (void)setGrabbedIcon:(id)arg1;
- (void)_dropIcon:(id)arg1 withInsertionPath:(id)arg2;
- (void)fixupBouncedIconsInFolder:(id)arg1 startingWithIndex:(int)arg2;
- (void)setLastTouch:(id)arg1;
- (void)noteViewCovered;
- (void)restoreScrollingAndRotationAfterUngrab;
- (void)moveIconFromWindow:(id)arg1 toIconList:(id)arg2;
- (void)moveIconToWindow:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (id)_keyboard;
- (BOOL)isEditing;
- (void)setIsEditing:(BOOL)arg1;
- (void)_addEmptyListIfNecessary;
- (void)iconWasTapped:(id)arg1;
- (void)_launchIcon:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)_scrollingDidFinish;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)_setAnimatedScrolling:(BOOL)arg1;
- (void)_commonScrollingWillBegin;
- (void)_precacheFolderImages:(id)arg1 location:(int)arg2;
- (void)_showSearchKeyboardIfNecessary:(BOOL)arg1;
- (void)_lockStateChanged:(id)arg1;
- (void)adjustViewsForTransition;
- (void)showDock:(BOOL)arg1 delay:(double)arg2 duration:(double)arg3;
- (void)_showDockAnimationStopped:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (BOOL)isAnimatingDockForIconScatter;
- (BOOL)isAnimatingForUnscatter;
- (void)finishedUnscatteringSearchView;
- (void)finishedUnscatteringIconList:(id)arg1;
- (void)_finishedUnscatteringWithIconScroll:(BOOL)arg1;
- (void)unscatterWithDuration:(double)arg1 delay:(double)arg2 fade:(BOOL)arg3;
- (void)unscatterWithDuration:(double)arg1 delay:(double)arg2;
- (void)scatterWithDuration:(double)arg1 delay:(double)arg2 fade:(BOOL)arg3;
- (void)scatterWithDuration:(double)arg1 delay:(double)arg2;
- (void)setIdleModeText:(id)arg1;
- (BOOL)hasIdleModeText;
- (void)updateNumberOfRowsWithDuration:(float)arg1;
- (void)idleTextDidAnimate:(id)arg1 finished:(id)arg2 toText:(id)arg3;
- (void)lcdTextViewCompletedScroll:(id)arg1;
- (void)uninstallIcon:(id)arg1 animate:(BOOL)arg2;
- (void)uninstallIcon:(id)arg1;
- (BOOL)canUninstallIcon:(id)arg1;
- (BOOL)allowsUninstall;
- (void)setAllowsUninstall:(BOOL)arg1;
- (void)uninstallIconDidAnimate:(id)arg1 finished:(id)arg2 icon:(id)arg3;
- (void)removeIcon:(id)arg1 compactFolder:(BOOL)arg2;
- (void)removeIcon:(id)arg1 andCompactFolder:(BOOL)arg2 folderRef:(id *)arg3;
- (void)updateGhostlyRequestersForIcon:(id)arg1 inListView:(id)arg2;
- (id)insertIcon:(id)arg1 intoListView:(id)arg2 iconIndex:(int)arg3 moveNow:(BOOL)arg4;
- (id)insertIcon:(id)arg1 intoListView:(id)arg2 iconIndex:(int)arg3 moveNow:(BOOL)arg4 pop:(BOOL)arg5;
- (id)insertIcon:(id)arg1 atIndexPath:(id)arg2 moveNow:(BOOL)arg3;
- (id)insertIcon:(id)arg1 atIndexPath:(id)arg2 moveNow:(BOOL)arg3 pop:(BOOL)arg4;
- (id)placeIcon:(id)arg1 atIndexPath:(id)arg2 moveNow:(BOOL)arg3 layoutNow:(BOOL)arg4 pop:(BOOL)arg5;
- (id)addEmptyListViewForFolder:(id)arg1;
- (void)scrollToIconToRevealAnimated:(BOOL)arg1;
- (void)finishInstallingIconAnimated:(BOOL)arg1;
- (void)setIconToReveal:(id)arg1 revealingPrevious:(BOOL)arg2;
- (id)iconToReveal;
- (void)replaceIconAtPath:(id)arg1 withIcon:(id)arg2 saveState:(BOOL)arg3;
- (void)addNewIconToDesignatedLocation:(id)arg1 animate:(BOOL)arg2 scrollToList:(BOOL)arg3 saveIconState:(BOOL)arg4;
- (void)addNewIconsToDesignatedLocations:(id)arg1 saveIconState:(BOOL)arg2;
- (void)removeEmptyIconList:(id)arg1 animate:(BOOL)arg2;
- (void)updateNumberOfRootIconLists;
- (void)updateRootIconListFrames;
- (void)updateContentSize;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (int)orientation;
- (void)scrollToIconListAtIndex:(int)arg1 animate:(BOOL)arg2;
- (void)scrollToIconListContainingIcon:(id)arg1 animate:(BOOL)arg2;
- (BOOL)iconAppearsOnCurrentPage:(id)arg1;
- (BOOL)_shouldLockItemsInStoreDemoMode;
- (BOOL)_iconCanBeGrabbed:(id)arg1;
- (int)currentIconListIndex;
- (BOOL)isShowingSearch;
- (id)currentFolderIconList;
- (id)dock;
- (id)currentRootIconList;
- (void)resetCurrentVisibleIconListImageVisibilityAndJitterState;
- (void)updateCurrentIconListIndexAndVisibility:(BOOL)arg1;
- (void)updateCurrentIconListIndexAndVisibility;
- (int)_computePageIndexFromOffset:(float)arg1 pageWidth:(float)arg2 maxLists:(int)arg3;
- (int)lowestVisibleIconListIndexAndColumn:(int *)arg1 columnsOnScreen:(int *)arg2 totalLists:(unsigned int)arg3 columnsPerList:(unsigned int)arg4;
- (void)pageControl:(id)arg1 didRecieveTouchInDirection:(int)arg2;
- (BOOL)isFolderScrolling;
- (BOOL)isScrolling;
- (void)showCarrierDebuggingAlertIfNeeded;
- (void)showInfoAlertIfNeeded:(BOOL)arg1;
- (void)setPageControlAlpha:(float)arg1;
- (void)setPageControlVisible:(BOOL)arg1;
- (void)_iconVisibilityChanged:(id)arg1;
- (void)_resetRootIconLists;
- (id)homeScreenSnapshotInOrientation:(int)arg1;
- (CDStruct_968775f8)statusBarOverridesForSnapshot;
- (void)_prepareToResetRootIconLists;
- (void)_popDisableUpdateCurrentIconListCount;
- (void)_pushDisableUpdateCurrentIconListCount;
- (BOOL)_shouldDisableUpdatingCurrentIconList;
- (id)folderIconListAtIndex:(unsigned int)arg1;
- (id)rootIconListAtIndex:(int)arg1;
- (void)setShouldRasterizeFirstIconList:(BOOL)arg1;
- (id)dockContainerView;
- (id)scrollView;
- (struct CGRect)_frameForDockContainerView:(id)arg1 orientation:(int)arg2 contentView:(id)arg3 dock:(id)arg4;
- (id)contentView;
- (struct CGRect)_scrollViewFrameForContentView:(id)arg1 dockContainerView:(id)arg2;
- (id)_dockContainerViewWithOrientation:(int)arg1 contentView:(id)arg2 dock:(id)arg3 pageControl:(id)arg4;
- (void)dealloc;
- (void)_configureBBObserver;
- (id)model;
- (id)init;
- (void)_runFolderOpenCloseTest;
- (void)updateSlidingViewWithIcon:(id)arg1 fromListView:(id)arg2;
- (void)_placeIcon:(id)arg1 inSlidingViewsWithNotchInfo:(CDStruct_d18cc6b1)arg2;
- (void)_computeUpperTransform:(struct CGAffineTransform *)arg1 lowerTransform:(struct CGAffineTransform *)arg2 notchTransform:(struct CGAffineTransform *)arg3 forFolderIcon:(id)arg4;
- (unsigned int)_folderRowsForFolder:(id)arg1;
- (unsigned int)_folderRowsForFolder:(id)arg1 inOrientation:(int)arg2;
- (CDStruct_d18cc6b1)_notchInfoForFolderIcon:(id)arg1;
- (struct CGRect)_contentViewRelativeFrameForIcon:(id)arg1;
- (id)_ghostedIconListForRequester:(int)arg1;
- (id)_iconsOnGhostedListForRequester:(int)arg1 skippingIcon:(id)arg2;
- (id)_iconsOnGhostedListForRequester:(int)arg1;
- (void)cleanUpGhostlyIconsForRequester:(int)arg1;
- (void)setCurrentPageIconsPartialGhostly:(float)arg1 forRequester:(int)arg2 skipIcon:(id)arg3;
- (void)setCurrentPageIconsGhostly:(BOOL)arg1 forRequester:(int)arg2 skipIcon:(id)arg3;
- (void)prepareToGhostCurrentPageIconsForRequester:(int)arg1 skipIcon:(id)arg2;
- (void)_clearFolderViewAndSlidingViews;
- (void)dismissFolderKeyboard;
- (void)shiftFolderViewsForKeyboardAppearing:(BOOL)arg1 keyboardHeight:(float)arg2;
- (void)_positionFolderViewAndSlidingViewsForFolder:(id)arg1 notchInfo:(CDStruct_d18cc6b1)arg2;
- (void)_insertFolderViewAndSlidingViewsForFolder:(id)arg1;
- (void)cleanUpFolderAndSlidingViewsAfterRotation;
- (void)_folderRotationIconFadeAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)rotateFolderAndSlidingViewsWithDuration:(double)arg1;
- (void)prepareToRotateFolderAndSlidingViewsToOrientation:(int)arg1;
- (id)_proposedFolderNameForGrabbedIcon:(id)arg1 recipientIcon:(id)arg2;
- (void)_snapshotFadeDidStop:(id)arg1 finished:(id)arg2 snapshot:(id)arg3;
- (void)_outOfFolderAnimation:(id)arg1 didFinish:(id)arg2 context:(id)arg3;
- (void)_addToFolderAnimation:(id)arg1 didFinish:(id)arg2 context:(id)arg3;
- (void)_compactRootListsAfterFolderCloseWithAnimation:(BOOL)arg1;
- (void)_cleanupForClosingFolderAnimated:(BOOL)arg1;
- (void)_openCloseFolderAnimationEnded:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)_slideFolderOpen:(BOOL)arg1 animated:(BOOL)arg2;
- (void)replaceFolderIcon:(id)arg1 byContainedIcon:(id)arg2 animated:(BOOL)arg3;
- (void)animateIcons:(id)arg1 intoFolderIcon:(id)arg2 openFolderOnFinish:(BOOL)arg3 complete:(CDUnknownBlockType)arg4;
- (BOOL)isDroppingIcon:(id)arg1;
- (BOOL)isDroppingIconsInOrOutOfFolder;
- (void)_moveDroppedIconsToLocation:(int)arg1;
- (void)_dropIconOutOfClosingFolder:(id)arg1 withInsertionPath:(id)arg2;
- (void)_dropIconIntoOpenFolder:(id)arg1 withInsertionPath:(id)arg2;
- (id)createNewFolderFromRecipientIcon:(id)arg1 grabbedIcon:(id)arg2;
- (void)closeFolderAnimated:(BOOL)arg1 toSwitcher:(BOOL)arg2;
- (void)closeFolderAnimated:(BOOL)arg1;
- (void)openFolder:(id)arg1 animated:(BOOL)arg2 fromSwitcher:(BOOL)arg3;
- (void)openFolder:(id)arg1 animated:(BOOL)arg2;
- (BOOL)isNewsstandOpen;
- (id)openFolder;
- (id)folderToReopenWhenSwitcherCloses;
- (void)clearFolderToReopenWhenSwitcherCloses;
- (void)saveFolderToReopenWhenSwitcherCloses;
- (void)setFolderToReopenWhenSwitcherCloses:(id)arg1;
- (BOOL)hasAnimatingFolder;
- (void)_setAnimatingFolderCreation:(BOOL)arg1;
- (void)_setFolderToOpenAfterScrolling:(id)arg1;
- (void)_setHasAnimatingFolder:(BOOL)arg1;
- (void)_noteFolderAnimationStateDidChange;
- (BOOL)hasOpenFolder;
- (void)setOpenFolder:(id)arg1;
- (id)iconListViewAtIndex:(unsigned int)arg1 inFolder:(id)arg2 createIfNecessary:(BOOL)arg3;
- (void)getListView:(id *)arg1 folder:(id *)arg2 relativePath:(id *)arg3 forIndexPath:(id)arg4 createIfNecessary:(BOOL)arg5;

@end

