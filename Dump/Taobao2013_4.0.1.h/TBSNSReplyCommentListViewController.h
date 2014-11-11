//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBSNSBasicViewController.h"

#import "TBSNSBasicServiceDelegate.h"
#import "TBSNSFeedCommentDisscusCellDelegate.h"
#import "TBSNSInputBarDeletage.h"
#import "TBSNSMyCommentHeaderCellDelegate.h"
#import "TBSNSNewReplyCommentListHeaderViewDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"

@class NSIndexPath, NSString, TBLoadingView, TBSNSFeedCommentCommodityItem, TBSNSFeedCommentItem, TBSNSFeedCommentService, TBSNSInputBar, TBSNSMyCommentHeaderCell, TBSNSRelationService, TBSNSReplyCommentLayerView, UIAlertView, UIButton, UITableView;

@interface TBSNSReplyCommentListViewController : TBSNSBasicViewController <TBSNSFeedCommentDisscusCellDelegate, TBSNSNewReplyCommentListHeaderViewDelegate, UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate, TBSNSBasicServiceDelegate, UIActionSheetDelegate, TBSNSMyCommentHeaderCellDelegate, TBSNSInputBarDeletage>
{
    TBSNSFeedCommentService *_feedCommentSendService;
    TBSNSFeedCommentService *_feedCommentReceiveService;
    TBSNSFeedCommentService *_feedCommentListService;
    TBSNSRelationService *_feedCommentOprationService;
    TBSNSMyCommentHeaderCell *_headerCell;
    NSString *_commentContent;
    TBSNSFeedCommentItem *_selectedCommentItem;
    TBSNSInputBar *_inputBar;
    TBSNSReplyCommentLayerView *_replyLayerView;
    UIButton *_bgBtn;
    int _myCommentView;
    NSIndexPath *_indexPath;
    NSIndexPath *_praiseIndexPath;
    BOOL _isNeedViewDidApper;
    BOOL _isDidReceiveMemoryWarning;
    UIAlertView *_alertView;
    UITableView *_receiveTableView;
    UITableView *_sendTableView;
    CDUnknownBlockType _commentPraiseStatusBlock;
    NSString *_itemExtSymbol;
    NSString *_imageName;
    TBSNSFeedCommentCommodityItem *_commentCommodityItem;
    int _commentContentType;
    TBLoadingView *_nextPageLoadingView;
}

+ (BOOL)tbNeedToolbar;
@property(nonatomic) BOOL isDidReceiveMemoryWarning; // @synthesize isDidReceiveMemoryWarning=_isDidReceiveMemoryWarning;
@property(nonatomic) BOOL isNeedViewDidApper; // @synthesize isNeedViewDidApper=_isNeedViewDidApper;
@property(retain, nonatomic) TBLoadingView *nextPageLoadingView; // @synthesize nextPageLoadingView=_nextPageLoadingView;
@property(nonatomic) int commentContentType; // @synthesize commentContentType=_commentContentType;
@property(retain, nonatomic) TBSNSFeedCommentCommodityItem *commentCommodityItem; // @synthesize commentCommodityItem=_commentCommodityItem;
@property(retain, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(retain, nonatomic) NSString *itemExtSymbol; // @synthesize itemExtSymbol=_itemExtSymbol;
@property(copy, nonatomic) CDUnknownBlockType commentPraiseStatusBlock; // @synthesize commentPraiseStatusBlock=_commentPraiseStatusBlock;
@property(retain, nonatomic) UITableView *sendTableView; // @synthesize sendTableView=_sendTableView;
@property(retain, nonatomic) UITableView *receiveTableView; // @synthesize receiveTableView=_receiveTableView;
@property(retain, nonatomic) UIAlertView *alertView; // @synthesize alertView=_alertView;
@property(retain, nonatomic) TBSNSReplyCommentLayerView *replyLayerView; // @synthesize replyLayerView=_replyLayerView;
@property(retain, nonatomic) TBSNSInputBar *inputBar; // @synthesize inputBar=_inputBar;
@property(retain, nonatomic) UIButton *bgBtn; // @synthesize bgBtn=_bgBtn;
- (void).cxx_destruct;
- (void)serviceDidFinishLoad:(id)arg1;
- (void)serviceDidStartLoad:(id)arg1;
- (void)headerClicked:(unsigned long long)arg1;
- (void)gotoSendCommentView;
- (void)gotoReceiveCommentView;
- (void)headCell:(id)arg1 didSelectedView:(int)arg2;
- (SEL)selectorForEmpty;
- (id)info;
- (void)showEmptyView:(id)arg1;
- (void)snsInputBar:(id)arg1 willChangeHeight:(float)arg2;
- (void)snsInputBar:(id)arg1 keyboardHeight:(float)arg2;
- (void)snsInputBar:(id)arg1 textToSend:(id)arg2;
- (void)closeReplyLayer;
- (void)gotoReplyCommentEditView;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)showNextPageLoadingView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)configPullToRefresh;
- (id)tableView:(id)arg1 itemAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)accountPraiseOperation:(id)arg1;
- (void)commentPraiseOperationNotification:(id)arg1;
- (void)setPraseStatus:(id)arg1 isPraised:(BOOL)arg2;
- (void)sendCommentClicked;
- (void)receiveCommentClicked;
- (void)reload;
- (BOOL)needLoadingView;
- (void)refresh;
- (void)nextPage;
- (void)setUpView;
- (void)setupTBToolbarItems;
- (void)loadData;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)onNewCommentSucceed:(id)arg1;
- (void)onBgBtnClicked;
- (void)handleBackToPreViewCtr;
- (void)backBtnClicked:(id)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)loadView;
- (id)init;

@end

