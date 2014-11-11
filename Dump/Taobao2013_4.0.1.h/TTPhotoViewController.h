//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTModelViewController.h"

#import "TTScrollViewDataSource.h"
#import "TTScrollViewDelegate.h"
#import "TTThumbsViewControllerDelegate.h"

@class NSString, NSTimer, TTPhotoView, TTScrollView, TTStyle, TTThumbsViewController, UIBarButtonItem, UIImage, UIToolbar, UIView;

@interface TTPhotoViewController : TTModelViewController <TTScrollViewDelegate, TTScrollViewDataSource, TTThumbsViewControllerDelegate>
{
    id <TTPhoto> _centerPhoto;
    int _centerPhotoIndex;
    UIView *_innerView;
    TTScrollView *_scrollView;
    TTPhotoView *_photoStatusView;
    UIToolbar *_toolbar;
    UIBarButtonItem *_nextButton;
    UIBarButtonItem *_previousButton;
    TTStyle *_captionStyle;
    UIImage *_defaultImage;
    NSString *_statusText;
    NSTimer *_slideshowTimer;
    NSTimer *_loadTimer;
    BOOL _delayLoad;
    TTThumbsViewController *_thumbsController;
    id <TTPhotoSource> _photoSource;
}

@property(retain, nonatomic) id <TTPhotoSource> photoSource; // @synthesize photoSource=_photoSource;
@property(retain, nonatomic) TTStyle *captionStyle; // @synthesize captionStyle=_captionStyle;
@property(retain, nonatomic) UIImage *defaultImage; // @synthesize defaultImage=_defaultImage;
@property(readonly, nonatomic) int centerPhotoIndex; // @synthesize centerPhotoIndex=_centerPhotoIndex;
@property(retain, nonatomic) id <TTPhoto> centerPhoto; // @synthesize centerPhoto=_centerPhoto;
- (void)showActivity:(id)arg1;
- (void)didMoveToPhoto:(id)arg1 fromPhoto:(id)arg2;
- (id)createThumbsViewController;
- (id)createPhotoView;
- (BOOL)thumbsViewController:(id)arg1 shouldNavigateToPhoto:(id)arg2;
- (void)thumbsViewController:(id)arg1 didSelectPhoto:(id)arg2;
- (struct CGSize)scrollView:(id)arg1 sizeOfPageAtIndex:(int)arg2;
- (id)scrollView:(id)arg1 pageAtIndex:(int)arg2;
- (int)numberOfPagesInScrollView:(id)arg1;
- (void)scrollView:(id)arg1 tapped:(id)arg2;
- (void)scrollViewDidEndZooming:(id)arg1;
- (void)scrollViewDidBeginZooming:(id)arg1;
- (BOOL)scrollViewShouldZoom:(id)arg1;
- (void)scrollViewDidRotate:(id)arg1;
- (void)scrollViewWillRotate:(id)arg1 toOrientation:(int)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollView:(id)arg1 didMoveToPageAtIndex:(int)arg2;
- (void)model:(id)arg1 didDeleteObject:(id)arg2 atIndexPath:(id)arg3;
- (void)model:(id)arg1 didInsertObject:(id)arg2 atIndexPath:(id)arg3;
- (void)model:(id)arg1 didUpdateObject:(id)arg2 atIndexPath:(id)arg3;
- (void)modelDidCancelLoad:(id)arg1;
- (void)model:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)modelDidFinishLoad:(id)arg1;
- (void)moveToNextValidPhoto;
- (void)showError:(BOOL)arg1;
- (void)showEmpty:(BOOL)arg1;
- (void)showLoading:(BOOL)arg1;
- (void)didLoadModel:(BOOL)arg1;
- (void)didRefreshModel;
- (BOOL)canShowModel;
- (BOOL)shouldLoadMore;
- (BOOL)shouldLoad;
- (void)showBars:(BOOL)arg1 animated:(BOOL)arg2;
- (id)rotatingFooterView;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)loadView;
- (void)hideBarsAnimationDidStop;
- (void)showBarsAnimationDidStop;
- (void)previousAction;
- (void)nextAction;
- (void)pauseAction;
- (void)playAction;
- (void)slideshowTimer;
- (void)showThumbnails;
- (id)URLForThumbnails;
- (void)showCaptions:(BOOL)arg1;
- (void)showStatus:(id)arg1;
- (void)showProgress:(float)arg1;
- (id)statusView;
- (BOOL)isShowingChrome;
- (void)resetVisiblePhotoViews;
- (void)updateVisiblePhotoViews;
- (void)showPhoto:(id)arg1 inView:(id)arg2;
- (void)moveToPhotoAtIndex:(int)arg1 withDelay:(BOOL)arg2;
- (void)moveToPhoto:(id)arg1;
- (void)updatePhotoView;
- (void)updateToolbarWithOrientation:(int)arg1;
- (void)updateChrome;
- (void)loadImages;
- (void)cancelImageLoadTimer;
- (void)startImageLoadTimer:(double)arg1;
- (void)loadImageDelayed;
- (id)centerPhotoView;
- (void)dealloc;
- (id)init;
- (id)initWithPhotoSource:(id)arg1;
- (id)initWithPhoto:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

