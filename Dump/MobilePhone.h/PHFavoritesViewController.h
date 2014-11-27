//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PhoneViewController.h"

#import "ABPeoplePickerNavigationControllerPrivateMemberCellDelegate.h"
#import "ABUnknownPersonViewControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class ABFavoritesEntry, ABPeoplePickerNavigationController, NSString, UITableView, _UIContentUnavailableView;

@interface PHFavoritesViewController : PhoneViewController <UITableViewDataSource, UITableViewDelegate, ABUnknownPersonViewControllerDelegate, ABPeoplePickerNavigationControllerPrivateMemberCellDelegate>
{
    UITableView *_table;
    _UIContentUnavailableView *_noContentView;
    ABPeoplePickerNavigationController *_peoplePickerController;
    ABFavoritesEntry *_selectedABFavoritesEntry;
    unsigned int _ignoreFavoritesDidChangeNotification:1;
    unsigned int _postponeTableReloadFromFavoritesChange:1;
    unsigned int _needsTableReloadFromFavoritesChange:1;
}

+ (id)tabBarIconName;
+ (long long)tabBarSystemItem;
+ (int)tabViewType;
+ (_Bool)requiresNavigationControllerContainer;
- (void)unknownPersonViewController:(id)arg1 didResolveToPerson:(void *)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (void)accessoryButtonTapped:(id)arg1 withEvent:(id)arg2;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)deleteButtonPressedForIndexPath:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)selectedIndex;
- (long long)absoluteIndexOfFilteredIndex:(long long)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (void)_addButtonClicked:(id)arg1;
- (_Bool)peoplePickerNavigationController:(id)arg1 shouldAllowSelectingPersonWithRecordID:(int)arg2;
- (_Bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (_Bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4 withMemberCell:(id)arg5;
- (_Bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2;
- (_Bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2 withLinkedPeople:(struct __CFArray *)arg3 memberCell:(id)arg4;
- (void)peoplePickerNavigationController:(id)arg1 insertEditorDidConfirm:(_Bool)arg2 forPerson:(void *)arg3;
- (_Bool)peoplePickerNavigationController:(id)arg1 shouldShowInsertEditorForPerson:(void *)arg2 insertProperty:(int *)arg3 copyInsertValue:(id *)arg4 copyInsertLabel:(id *)arg5;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (void)dismissPeoplePicker;
- (void)_addEntryFromPeoplePickerForPerson:(void *)arg1 property:(int)arg2 identifier:(int)arg3 animateView:(id)arg4 favoritesEntryType:(int)arg5;
- (void)showCardViewerForPerson:(void *)arg1 withTitle:(id)arg2 animate:(_Bool)arg3;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_updateNavButtons;
- (void)_favoritesManagerSignificantChangeNotification:(id)arg1;
- (void)restoreState;
- (_Bool)shouldSnapshot;
- (void)unloadView;
- (void)didReceiveMemoryWarning;
- (void)savePreferences;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)_updateContentView;
@property(readonly) _UIContentUnavailableView *noContentView;
- (_Bool)showsNoContentView;
@property(readonly) UITableView *table;
- (void)_handleContentSizeCategoryDidChange:(id)arg1;
- (void)_handleFavoritesShowsContactPhotosChanged:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

