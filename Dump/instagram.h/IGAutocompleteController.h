//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class IGAutocompleteAbstractDataSource, IGHashtagListLocalDataSource, IGPlainTableView, IGUserListLocalDataSource, NSString, UIResponder<IGAutocompleteControllerTextInput>;

@interface IGAutocompleteController : NSObject <UITableViewDataSource, UITableViewDelegate>
{
    BOOL _determinedNoResults;
    IGAutocompleteAbstractDataSource *_resultsDataSource;
    BOOL _reverseScroll;
    BOOL _committingText;
    id <IGAutocompleteControllerDelegate> _delegate;
    UIResponder<IGAutocompleteControllerTextInput> *_textInput;
    IGPlainTableView *_tableView;
    IGUserListLocalDataSource *_usersDataSource;
    IGHashtagListLocalDataSource *_hashtagsDataSource;
    NSString *_currentAutocompletePrefix;
    struct _NSRange _currentAutocompleteRange;
}

@property(copy, nonatomic) NSString *currentAutocompletePrefix; // @synthesize currentAutocompletePrefix=_currentAutocompletePrefix;
@property(nonatomic) struct _NSRange currentAutocompleteRange; // @synthesize currentAutocompleteRange=_currentAutocompleteRange;
@property(nonatomic, getter=isCommittingText) BOOL committingText; // @synthesize committingText=_committingText;
@property(nonatomic, getter=isReverseScroll) BOOL reverseScroll; // @synthesize reverseScroll=_reverseScroll;
@property(readonly, nonatomic) IGHashtagListLocalDataSource *hashtagsDataSource; // @synthesize hashtagsDataSource=_hashtagsDataSource;
@property(readonly, nonatomic) IGUserListLocalDataSource *usersDataSource; // @synthesize usersDataSource=_usersDataSource;
@property(readonly, nonatomic) IGPlainTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak UIResponder<IGAutocompleteControllerTextInput> *textInput; // @synthesize textInput=_textInput;
@property(nonatomic) __weak id <IGAutocompleteControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 userCellForRow:(int)arg2;
- (id)tableView:(id)arg1 hashtagCellForRow:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)resetResultsTableFilter;
- (void)filterOptionsWithString:(id)arg1;
- (void)scrollTableViewToBottom;
- (void)reloadResultsTable;
- (BOOL)resultsTableVisible;
- (void)hideResultsTable;
- (void)showResultsTable;
- (id)userRegex;
- (id)hashtagRegex;
- (void)hideAndResetResults;
- (BOOL)stringQualifies:(id)arg1;
- (void)displayAutocompleteOptionsForString:(id)arg1 isDeleting:(BOOL)arg2;
- (void)displayAutocompleteOptionsForString:(id)arg1;
- (BOOL)textInput:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)setFeedItem:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

