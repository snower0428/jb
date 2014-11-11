/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SafePayDelegate.h"
#import "TopStatusViewDelegate.h"
#import "SCDTViewController.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"
#import "UIAlertViewDelegate.h"
#import "TTTAttributedLabelDelegate.h"
#import "Portal-Structs.h"

@class NSCondition, MSSecurityWidgetFacade, TopStatusView, DTRpcAsyncCaller, UITableView, MSQueryAccountSecurityLevelResp;
@protocol XTPortalService;

@interface SWSecurityCheckViewController : SCDTViewController <TTTAttributedLabelDelegate, UITableViewDataSource, UITableViewDelegate, TopStatusViewDelegate, UIAlertViewDelegate, UITextFieldDelegate, SafePayDelegate> {
	id<XTPortalService> service;
@private
	UITableView* _tableView;
	MSSecurityWidgetFacade* _securityWidgetFacade;
	MSQueryAccountSecurityLevelResp* _responseReslut;
	NSCondition* _condition;
	TopStatusView* _topStatusView;
	BOOL _isMobileDomain;
	BOOL _isCheckFinished;
	BOOL _isLoading;
	DTRpcAsyncCaller* _rpcCaller;
}
@property(retain, nonatomic) DTRpcAsyncCaller* rpcCaller;
-(void).cxx_destruct;
-(BOOL)textFieldShouldClear:(id)textField;
-(BOOL)textFieldShouldBeginEditing:(id)textField;
-(void)_textFieldTextDidChange:(id)_textFieldText;
-(BOOL)textField:(id)field shouldChangeCharactersInRange:(NSRange)range replacementString:(id)string;
-(void)loginDidFinish;
-(void)bindDidSucess;
-(void)headImageSetSucess;
-(void)doNameIdentify;
-(void)safepayDidFinishWithResult:(id)safepay;
-(void)tryRequestAgain;
-(void)doSetGesture;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)openGesture;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(void)configCellWithIndexPath:(id)indexPath andCell:(id)cell;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)viewWillDestroy;
-(BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;
-(void)doDeviceCertificate;
-(void)doMobileBind;
-(void)querySecurityLevelInfo;
-(void)threadToCycle;
-(void)doCheckCycle;
-(void)back;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)view;
-(void)dealloc;
-(id)init;
@end

