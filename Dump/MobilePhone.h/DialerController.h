//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PhoneViewController.h"

#import "ABNewPersonViewControllerDelegate.h"
#import "ABPeoplePickerNavigationControllerDelegate.h"
#import "DialerViewDelegate.h"
#import "TPDialerKeypadDelegate.h"
#import "UIActionSheetDelegate.h"

@class NSString, NSTimer, PHAbstractDialerView, UINavigationController;

@interface DialerController : PhoneViewController <ABNewPersonViewControllerDelegate, ABPeoplePickerNavigationControllerDelegate, DialerViewDelegate, UIActionSheetDelegate, TPDialerKeypadDelegate>
{
    PHAbstractDialerView *_dialerView;
    UINavigationController *_newContactNavigationController;
    NSTimer *_deleteTimer;
    NSTimer *_lookupTimer;
    NSString *_lastDialedNumberCache;
    NSString *_myPrefix;
    int _shouldUseMyPrefixAsHint;
    unsigned int _calledNumber:1;
    unsigned int _didDeleteRepeat:1;
    unsigned int _dtmfPlaying;
    _Bool _shouldHideDeleteButtonWhenEmpty;
    int _dialerType;
}

+ (id)defaultPNGName;
+ (id)tabBarIconName;
+ (id)tabBarIconImageSelected;
+ (id)tabBarIconImage;
+ (id)tabBarIconImageName;
+ (int)tabViewType;
+ (_Bool)launchFieldTestIfNeeded:(id)arg1;
+ (_Bool)shouldStringAutoDial:(id)arg1 givenLastChar:(BOOL)arg2;
+ (void)stopPlayingDTMFTone;
+ (void)playDTMFToneForKey:(unsigned char)arg1;
@property int dialerType; // @synthesize dialerType=_dialerType;
@property(nonatomic) _Bool shouldHideDeleteButtonWhenEmpty; // @synthesize shouldHideDeleteButtonWhenEmpty=_shouldHideDeleteButtonWhenEmpty;
@property(readonly) PHAbstractDialerView *dialerView; // @synthesize dialerView=_dialerView;
- (void)_applicationWillResignActiveNotification:(id)arg1;
- (void)_statusBarHeightChanged:(id)arg1;
- (void)_handleSIMInsertionOrRemoval;
- (void)performDeleteAction;
- (void)performCallAction;
- (void)_deleteButtonDown:(id)arg1;
- (void)_deleteButtonClicked:(id)arg1;
- (void)_stopDeleteTimer;
- (void)_startDeleteTimer;
- (void)_deleteRepeat;
- (void)peoplePickerNavigationController:(id)arg1 insertEditorDidConfirm:(_Bool)arg2 forPerson:(void *)arg3;
- (_Bool)peoplePickerNavigationController:(id)arg1 shouldShowInsertEditorForPerson:(void *)arg2 insertProperty:(int *)arg3 copyInsertValue:(id *)arg4 copyInsertLabel:(id *)arg5;
- (_Bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (_Bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (void)newPersonViewController:(id)arg1 didCompleteWithNewPerson:(void *)arg2;
- (void)_dismissNewContactView:(_Bool)arg1;
- (void)_addButtonClicked:(id)arg1;
- (void)_addToExistingContact;
- (void)_addToNewContact;
- (id)_qualifyNumberIfNecessary:(id)arg1;
- (void *)_newPersonWithValue:(id)arg1 forMultiValueProperty:(int)arg2;
- (void)_hideNewContactView;
- (void)_showNewContactView;
- (void)_dialVoicemail;
- (void)phonePad:(id)arg1 keyUp:(BOOL)arg2;
- (void)phonePad:(id)arg1 keyDown:(BOOL)arg2;
- (void)phonePadDidEndSounds:(id)arg1;
- (id)_myPrefix;
- (_Bool)_shouldUseMyPrefixAsHint;
- (void)phonePadDeleteLastDigit:(id)arg1;
- (void)phonePad:(id)arg1 replaceLastDigitWithString:(id)arg2;
- (void)_phonePad:(id)arg1 appendString:(id)arg2 suppressClearingDialedNumber:(_Bool)arg3;
- (void)phonePad:(id)arg1 appendString:(id)arg2 playDTMFTone:(_Bool)arg3;
- (void)phonePad:(id)arg1 appendString:(id)arg2;
- (void)performCharacterAddAction:(id)arg1;
- (void)phonePad:(id)arg1 dialerCharacterButtonWasHeld:(unsigned int)arg2;
- (void)starkInCallViewControllerAppearedNotification:(id)arg1;
- (void)_callButtonPressed:(id)arg1;
- (void)_animateCallButton;
- (void)_fadeSubviewsOf:(id)arg1 excludingView:(id)arg2 toValue:(double)arg3;
- (void)_callButtonLongPress;
- (void)_updateCallButtonEnabledState:(id)arg1;
- (void)_updateLCDNameLabelWithOriginallyPastedString:(id)arg1;
- (void)_updateLCDNameLabelWithAMatchingName:(_Bool)arg1;
- (void)_updateCallButtonEnabledState:(id)arg1 updateNameNow:(_Bool)arg2;
- (void)dialerView:(id)arg1 stringWasPasted:(id)arg2;
- (void)dialerViewTextDidChange:(id)arg1;
- (void)showOrHideDeleteButton;
@property(retain) NSString *lastDialedNumber;
- (void)_getPersonName:(id *)arg1 personLabel:(id *)arg2 personUID:(int *)arg3 forPhoneNumberString:(id)arg4;
- (void)_updateName;
- (void)_stopLookupTimer;
- (_Bool)shouldSnapshot;
- (void)prepareForSnapshot;
- (void)_clearDisplayIfNecessary;
- (void)dealloc;
- (id)initWithDialerType:(int)arg1;
- (void)_callStatusChanged:(id)arg1;
- (void)_resetButtonAnimation;
- (void)applicationDidResume;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)shouldAnimateCallButton;
- (_Bool)isShowingDoubleHeightStatusBar;
- (void)unloadView;
- (void)didReceiveMemoryWarning;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
