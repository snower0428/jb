//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIEmergencyCallServiceViewController.h"

#import "DialerViewDelegate.h"
#import "HKMedicalIDViewControllerDelegate.h"
#import "PhoneBaseViewController.h"
#import "TPDialerKeypadDelegate.h"

@class HKHealthStore, HKMedicalIDViewController, NSString, NSTimer, PHEmergencyHandsetDialerView, UIButton;

@interface PHEmergencyDialerViewController : SBUIEmergencyCallServiceViewController <HKMedicalIDViewControllerDelegate, PhoneBaseViewController, TPDialerKeypadDelegate, DialerViewDelegate>
{
    _Bool _inApplicationMode;
    _Bool _callEnding;
    short _currentState;
    PHEmergencyHandsetDialerView *_dialerView;
    NSTimer *_callDurationTimer;
    UIButton *_backButton;
    UIButton *_medicalIDButton;
    UIButton *_endButton;
    HKHealthStore *_healthStore;
    HKMedicalIDViewController *_medicalIDViewController;
}

+ (_Bool)_isSecureForRemoteViewService;
+ (id)defaultPNGName;
+ (long long)statusBarStyle;
+ (int)viewType;
@property(retain) HKMedicalIDViewController *medicalIDViewController; // @synthesize medicalIDViewController=_medicalIDViewController;
@property(retain) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
@property _Bool callEnding; // @synthesize callEnding=_callEnding;
@property(nonatomic) short currentState; // @synthesize currentState=_currentState;
@property(retain) UIButton *endButton; // @synthesize endButton=_endButton;
@property(retain) UIButton *medicalIDButton; // @synthesize medicalIDButton=_medicalIDButton;
@property(retain) UIButton *backButton; // @synthesize backButton=_backButton;
@property NSTimer *callDurationTimer; // @synthesize callDurationTimer=_callDurationTimer;
@property(retain) PHEmergencyHandsetDialerView *dialerView; // @synthesize dialerView=_dialerView;
@property _Bool inApplicationMode; // @synthesize inApplicationMode=_inApplicationMode;
- (void)dialEmergencyCall;
- (void)noteViewMovedOffscreenTemporarily;
- (void)noteTintColorForBackgroundStyleChanged:(id)arg1;
- (void)updateEmergencyTitleLabelForCallDuration;
- (id)currentCallStatusStringForDisplay;
- (void)phonePad:(id)arg1 dialerCharacterButtonWasHeld:(unsigned int)arg2;
- (void)phonePad:(id)arg1 replaceLastDigitWithString:(id)arg2;
- (void)phonePadDidEndSounds:(id)arg1;
- (void)phonePadWillBeginSounds:(id)arg1;
- (void)phonePad:(id)arg1 keyUp:(BOOL)arg2;
- (void)phonePad:(id)arg1 keyDown:(BOOL)arg2;
- (void)phonePadDeleteLastDigit:(id)arg1;
- (void)phonePad:(id)arg1 appendString:(id)arg2;
- (void)statusBarHeightChanged:(id)arg1;
- (_Bool)isShowingDoubleHeightStatusBar;
- (void)emergencyCallBackModeChangedNotification:(id)arg1;
- (void)callStatusChangedNotification:(id)arg1;
- (void)transitionInFromViewType:(int)arg1 animated:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)prepareForTransitionInFromViewType:(int)arg1 animated:(_Bool)arg2;
- (void)handleURL:(id)arg1;
- (void)prepareToHandleURL:(id)arg1;
- (void)updateViewControllerForOrientation:(long long)arg1;
- (void)prepareForSnapshot;
- (_Bool)shouldSnapshot;
- (_Bool)shouldDisableEdgeClip;
- (void)continueCyclingEmergencyTitleLabel;
- (void)setCurrentState:(short)arg1 animated:(_Bool)arg2;
- (void)updateCurrentState;
- (void)setEmergencyDialerPresenceToken:(_Bool)arg1;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)medicalIDViewControllerDidFinish:(id)arg1;
- (void)dismissMedicalIDViewControllerIfNecessary;
- (void)medicalIDButtonTapped:(id)arg1;
- (void)backButtonTapped:(id)arg1;
- (void)callButtonTapped:(id)arg1;
- (void)endButtonTapped:(id)arg1;
- (void)deleteButtonTapped:(id)arg1;
- (void)dealloc;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

