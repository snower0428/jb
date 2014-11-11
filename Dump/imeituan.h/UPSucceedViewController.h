//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UPBaseViewController.h"

#import "UPPullListViewDelegate.h"

@class UIView, UPLableCell, UPLineView;

@interface UPSucceedViewController : UPBaseViewController <UPPullListViewDelegate>
{
    struct CGRect mBtnNextFrame;
    UPLableCell *_infoCell;
    UIView *_successInfoView;
    UPLableCell *_successTitle;
    UPLineView *_line;
    BOOL mTemporaryEntrust;
}

@property(nonatomic) BOOL mTemporaryEntrust; // @synthesize mTemporaryEntrust;
- (id).cxx_construct;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)comunicateToUPMPDidFailWithErrorType:(int)arg1 error:(id)arg2;
- (void)comunicateToUPMPDidSucceedWithEvent:(int)arg1;
- (void)pushViewToOpenGradeViewController;
- (float)addTermButton:(float)arg1;
- (float)addTermInfo:(id)arg1 y:(float)arg2;
- (float)addOpenUpgradeView:(float)arg1;
- (void)pullListAnimationDidStart:(float)arg1;
- (void)nextAction:(id)arg1;
- (void)openAction:(id)arg1;
- (void)addSubViews;
- (void)addNavigationBar;
- (void)viewDidUnload;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

