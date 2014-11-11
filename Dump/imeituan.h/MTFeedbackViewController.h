//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTTableViewController.h"

#import "MTChatBoxViewDelegate.h"
#import "UITableViewDelegate.h"

@class MTChatBoxView, MTTableMoreItem, NSMutableArray, NSNumber, UITapGestureRecognizer;

@interface MTFeedbackViewController : MTTableViewController <MTChatBoxViewDelegate, UITableViewDelegate>
{
    float keyboardHeight;
    NSNumber *_duration;
    NSNumber *_curve;
    float _chatboxHight;
    UITapGestureRecognizer *_tapGestureRecognizer;
    BOOL _isNeedScrollToBottom;
    NSMutableArray *_feedbackChats;
    MTChatBoxView *_chatBox;
    MTTableMoreItem *_moreItem;
}

+ (id)feedbackService;
@property(nonatomic) BOOL isNeedScrollToBottom; // @synthesize isNeedScrollToBottom=_isNeedScrollToBottom;
@property(retain, nonatomic) MTTableMoreItem *moreItem; // @synthesize moreItem=_moreItem;
@property(retain, nonatomic) MTChatBoxView *chatBox; // @synthesize chatBox=_chatBox;
@property(retain, nonatomic) NSMutableArray *feedbackChats; // @synthesize feedbackChats=_feedbackChats;
- (void).cxx_destruct;
- (void)didReceiveUserDidLogoutNotification;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)scrollToBottom;
- (void)hideKeyboard;
- (BOOL)chatBoxView:(id)arg1 shouldSendText:(id)arg2;
- (void)chatBoxView:(id)arg1 heightWillChange:(float)arg2;
- (void)didReceiveKeyboardWillHideNotification:(id)arg1;
- (void)didReceiveKeyboardWillShowNotification:(id)arg1;
- (void)adjustTableViewAndChatboxLocation;
- (void)loadFeedbacksFromOffset:(int)arg1;
- (void)updateTableViewData;
- (id)sectionItem;
- (void)loadTableView;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)setupUI;
- (void)dealloc;
- (id)init;

@end

