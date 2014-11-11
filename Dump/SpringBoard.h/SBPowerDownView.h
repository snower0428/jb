//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBAlertView.h"

@class NSTimer, TPBottomSingleButtonBar, TPTopLockBar, UIView;

@interface SBPowerDownView : SBAlertView
{
    id <SBPowerDownViewDelegate> _delegate;
    UIView *_dimView;
    TPTopLockBar *_lockView;
    TPBottomSingleButtonBar *_cancelView;
    NSTimer *_autoDismissTimer;
}

@property(nonatomic) id <SBPowerDownViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)layoutForInterfaceOrientation:(int)arg1;
- (BOOL)isSupportedInterfaceOrientation:(int)arg1;
- (void)animateDark;
- (void)animateOut;
- (void)animateIn;
- (void)notifyDelegateOfPowerDown;
- (void)finishedAnimatingOut;
- (void)finishedAnimatingIn;
- (void)powerDown:(id)arg1;
- (void)lockBarStoppedTracking:(id)arg1;
- (void)lockBarStartedTracking:(id)arg1;
- (void)lockBarUnlocked:(id)arg1;
- (void)cancel:(id)arg1;
- (void)resetAutoDismissTimer;
- (void)cancelAutoDismissTimer;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
