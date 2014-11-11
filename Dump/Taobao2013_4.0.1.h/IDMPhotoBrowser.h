//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "MFMailComposeViewControllerDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIScrollViewDelegate.h"

@class NSArray, NSMutableArray, NSMutableSet, NSString, NSTimer, UIActionSheet, UIBarButtonItem, UIButton, UILabel, UIPanGestureRecognizer, UIScrollView, UIToolbar, UIView;

@interface IDMPhotoBrowser : UIViewController <UIScrollViewDelegate, UIActionSheetDelegate, MFMailComposeViewControllerDelegate>
{
    unsigned int _photoCount;
    NSMutableArray *_newPhotos;
    NSMutableArray *_actionButtons;
    UIPanGestureRecognizer *_panGesture;
    UIScrollView *_pagingScrollView;
    UIButton *_doneButton;
    NSMutableSet *_visiblePages;
    NSMutableSet *_recycledPages;
    unsigned int _pageIndexBeforeRotation;
    unsigned int _currentPageIndex;
    UIToolbar *_toolbar;
    NSTimer *_controlVisibilityTimer;
    UIBarButtonItem *_previousButton;
    UIBarButtonItem *_nextButton;
    UIBarButtonItem *_actionButton;
    UIActionSheet *_actionsSheet;
    UIBarButtonItem *_counterButton;
    UILabel *_counterLabel;
    int _previousStatusBarStyle;
    UIBarButtonItem *_previousViewControllerBackButton;
    UIView *_senderViewForAnimation;
    BOOL _performingLayout;
    BOOL _rotating;
    BOOL _viewIsActive;
    BOOL _autoHide;
    BOOL _useDefaultActions;
    struct CGRect _resizableImageViewFrame;
    BOOL _displayToolbar;
    BOOL _displayActionButton;
    BOOL _displayCounterLabel;
    BOOL _useWhiteBackgroundColor;
    BOOL _displayArrowButton;
    BOOL _tapClosePhotoBrowser;
    NSString *_doneBackgroundImage;
    NSString *_leftArrowPath;
    NSString *_rightArrowPath;
    NSString *_leftArrowSelectedPath;
    NSString *_rightArrowSelectedPath;
    NSArray *_actionButtonTitles;
    id <IDMPhotoBrowserDelegate> _delegate;
}

@property(nonatomic) BOOL tapClosePhotoBrowser; // @synthesize tapClosePhotoBrowser=_tapClosePhotoBrowser;
@property(retain, nonatomic) id <IDMPhotoBrowserDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *actionButtonTitles; // @synthesize actionButtonTitles=_actionButtonTitles;
@property(nonatomic) BOOL displayArrowButton; // @synthesize displayArrowButton=_displayArrowButton;
@property(retain, nonatomic) UIActionSheet *actionsSheet; // @synthesize actionsSheet=_actionsSheet;
@property(retain, nonatomic) UIBarButtonItem *previousViewControllerBackButton; // @synthesize previousViewControllerBackButton=_previousViewControllerBackButton;
@property(nonatomic) NSString *rightArrowSelectedPath; // @synthesize rightArrowSelectedPath=_rightArrowSelectedPath;
@property(nonatomic) NSString *leftArrowSelectedPath; // @synthesize leftArrowSelectedPath=_leftArrowSelectedPath;
@property(nonatomic) NSString *rightArrowPath; // @synthesize rightArrowPath=_rightArrowPath;
@property(nonatomic) NSString *leftArrowPath; // @synthesize leftArrowPath=_leftArrowPath;
@property(nonatomic) NSString *doneBackgroundImage; // @synthesize doneBackgroundImage=_doneBackgroundImage;
@property(nonatomic) BOOL useWhiteBackgroundColor; // @synthesize useWhiteBackgroundColor=_useWhiteBackgroundColor;
@property(nonatomic) BOOL displayCounterLabel; // @synthesize displayCounterLabel=_displayCounterLabel;
@property(nonatomic) BOOL displayActionButton; // @synthesize displayActionButton=_displayActionButton;
@property(nonatomic) BOOL displayToolbar; // @synthesize displayToolbar=_displayToolbar;
- (void).cxx_destruct;
- (void)showProgressHUDCompleteMessage:(id)arg1;
- (void)hideProgressHUD:(BOOL)arg1;
- (void)showProgressHUDWithMessage:(id)arg1;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (void)actuallyEmailPhoto:(id)arg1;
- (void)emailPhoto;
- (void)image:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)actuallySavePhoto:(id)arg1;
- (void)savePhoto;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)actionButtonPressed:(id)arg1;
- (void)doneButtonPressed:(id)arg1;
- (void)setInitialPageIndex:(unsigned int)arg1;
- (void)toggleControls;
- (void)hideControls;
- (BOOL)areControlsHidden;
- (void)hideControlsAfterDelay;
- (void)cancelControlHiding;
- (void)setControlsHidden:(BOOL)arg1 animated:(BOOL)arg2 permanent:(BOOL)arg3;
- (void)gotoNextPage;
- (void)gotoPreviousPage;
- (void)jumpToPageAtIndex:(unsigned int)arg1;
- (void)updateNavigation;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (struct CGRect)frameForCaptionView:(id)arg1 atIndex:(unsigned int)arg2;
- (struct CGRect)frameForDoneButtonWhenRotationFromOrientation:(int)arg1;
- (struct CGRect)frameForDoneButtonAtOrientation:(int)arg1;
- (struct CGRect)frameForToolbarWhenRotationFromOrientation:(int)arg1;
- (struct CGRect)frameForToolbarAtOrientation:(int)arg1;
- (struct CGPoint)contentOffsetForPageAtIndex:(unsigned int)arg1;
- (struct CGSize)contentSizeForPagingScrollView;
- (struct CGRect)frameForPageAtIndex:(unsigned int)arg1;
- (struct CGRect)frameForPagingScrollView;
- (void)didStartViewingPageAtIndex:(unsigned int)arg1;
- (id)dequeueRecycledPage;
- (void)configurePage:(id)arg1 forIndex:(unsigned int)arg2;
- (id)pageDisplayingPhoto:(id)arg1;
- (id)pageDisplayedAtIndex:(unsigned int)arg1;
- (BOOL)isDisplayingPageForIndex:(unsigned int)arg1;
- (void)tilePages;
- (void)handleIDMPhotoLoadingDidEndNotification:(id)arg1;
- (void)loadAdjacentPhotosIfNecessary:(id)arg1;
- (id)doneButton;
- (id)imageForPhoto:(id)arg1;
- (id)captionViewForPhotoAtIndex:(unsigned int)arg1;
- (void)closePhotoBrowser;
- (id)photoAtIndex:(unsigned int)arg1;
- (unsigned int)numberOfPhotos;
- (void)reloadData;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (id)takeScreenshot;
- (void)viewDidUnload;
- (void)performLayout;
- (void)performAnimationWithView:(id)arg1;
- (id)rotateImage:(id)arg1 orientation:(int)arg2;
- (id)getImageFromView:(id)arg1;
- (id)customButton:(id)arg1 imageSelected:(id)arg2 action:(SEL)arg3;
- (void)viewDidLoad;
- (void)animationFinished:(id)arg1 finished:(BOOL)arg2 context:(void *)arg3;
- (void)move:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)releaseAllUnderlyingPhotos;
- (void)dealloc;
- (id)initWithPhotoURLs:(id)arg1 animatedFromView:(id)arg2;
- (id)initWithPhotoURLs:(id)arg1;
- (id)initWithPhotos:(id)arg1 animatedFromView:(id)arg2;
- (id)initWithPhotos:(id)arg1;
- (void)loadView;
- (id)init;

@end

