//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ABPeoplePickerNavigationController.h"

#import "ABPeoplePickerNavigationControllerDelegate.h"
#import "PhoneTabViewController.h"

@class NSString;

@interface PHAddressBookController : ABPeoplePickerNavigationController <PhoneTabViewController, ABPeoplePickerNavigationControllerDelegate>
{
    _Bool _disableContactsWithoutHandles;
    int _abuiStyle;
    id <PHAddressBookControllerDelegate> _addressBookControllerDelegate;
}

+ (id)defaultPNGName;
+ (id)tabBarIconName;
+ (CDStruct_5ec447a9)badge;
+ (long long)tabBarSystemItem;
+ (int)tabViewType;
@property int abuiStyle; // @synthesize abuiStyle=_abuiStyle;
@property(nonatomic) id <PHAddressBookControllerDelegate> addressBookControllerDelegate; // @synthesize addressBookControllerDelegate=_addressBookControllerDelegate;
@property(nonatomic) _Bool disableContactsWithoutHandles; // @synthesize disableContactsWithoutHandles=_disableContactsWithoutHandles;
- (void)_applicationDeactivated;
- (void)_restoreState;
- (void)_saveState;
@property void *savedPerson; // @dynamic savedPerson;
@property(readonly) _Bool shouldSaveAndRestoreState; // @dynamic shouldSaveAndRestoreState;
- (_Bool)peoplePickerNavigationController:(id)arg1 shouldAllowSelectingPersonWithRecordID:(int)arg2;
- (_Bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (_Bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (void)handleURL:(id)arg1;
- (void)prepareForSnapshot;
- (_Bool)shouldSnapshot;
- (_Bool)tabBarControllerShouldSelectViewController:(id)arg1;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (id)popViewControllerAnimated:(_Bool)arg1;
- (void)applicationWillSuspend;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)_updatePickerBanner:(id)arg1;
- (void)_updatePickerPhoneNumber:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

