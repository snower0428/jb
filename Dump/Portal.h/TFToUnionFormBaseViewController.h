/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "TFTransferFormProtocol.h"
#import "TFViewController.h"
#import "Portal-Structs.h"
#import "SafePayDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"

@class ALPButton, ALPBaseTableView, UITextField;

@interface TFToUnionFormBaseViewController : TFViewController <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate, SafePayDelegate, TFTransferFormProtocol> {
@private
	ALPBaseTableView* _tableView;
	ALPButton* _nextButton;
	UITextField* _currentTextField;
	CGRect _originalTableFrame;
}
@property(assign, nonatomic) CGRect originalTableFrame;
@property(assign, nonatomic) __weak UITextField* currentTextField;
@property(assign, nonatomic) __weak ALPButton* nextButton;
@property(assign, nonatomic) __weak ALPBaseTableView* tableView;
-(void).cxx_destruct;
-(id)tableView:(id)view viewForFooterInSection:(int)section;
-(float)tableView:(id)view heightForFooterInSection:(int)section;
-(id)tableView:(id)view viewForHeaderInSection:(int)section;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(void)safepayDidFinishWithResult:(id)safepay;
-(void)resumeTableBounds:(CGRect)bounds Duration:(double)duration;
-(void)cutTableBounds:(CGRect)bounds Duration:(double)duration;
-(void)responseKeyboardNotification:(id)notification;
-(void)removeKeyboardObservers;
-(void)addKeyboardObservers;
-(void)refreshNextButtonEnable;
-(void)scrollToEditingTextField:(id)editingTextField;
-(void)resignTextFieldResponders;
-(BOOL)textFieldShouldReturn:(id)textField;
-(void)textFieldDidEndEditing:(id)textField;
-(void)textFieldDidBeginEditing:(id)textField;
-(void)addResignTextFieldResponderGesture;
-(void)viewDidLoad;
-(void)back;
-(void)deallocContents;
-(void)dealloc;
-(id)initWithTransferRequest:(id)transferRequest;
@end

