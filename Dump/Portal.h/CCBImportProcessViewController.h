/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "CCBCheckCodeViewDelegate.h"
#import "CCBBaseViewController.h"
#import "UIAlertViewDelegate.h"

@class NSString, UIAlertView, UILabel, NSTimer, ALPButton, CCBProgressView;

@interface CCBImportProcessViewController : CCBBaseViewController <UIAlertViewDelegate, CCBCheckCodeViewDelegate> {
@private
	float _radio;
	int _step;
	unsigned _count;
	NSString* _emailAccId;
	BOOL _exceptionStatus;
	BOOL _isImportFinished;
	BOOL isCancelButton;
	BOOL _isTimerPause;
	BOOL _isCheckViewShow;
	NSString* _actionId;
	BOOL _isReImport;
	NSString* _taskId;
	NSString* _email;
	CCBProgressView* _ccbProgress;
	UILabel* _descLabel;
	ALPButton* _cancelButton;
	UILabel* _nobillLabel;
	ALPButton* _reImportButton;
	NSTimer* _loopProcessTimer;
	NSTimer* _autoForwardTimer;
	UIAlertView* _alertCancel;
	UIAlertView* _alertError;
}
@property(retain, nonatomic) UIAlertView* alertError;
@property(retain, nonatomic) UIAlertView* alertCancel;
@property(retain, nonatomic) NSTimer* autoForwardTimer;
@property(retain, nonatomic) NSTimer* loopProcessTimer;
@property(retain, nonatomic) ALPButton* reImportButton;
@property(retain, nonatomic) UILabel* nobillLabel;
@property(retain, nonatomic) ALPButton* cancelButton;
@property(retain, nonatomic) UILabel* descLabel;
@property(retain, nonatomic) CCBProgressView* ccbProgress;
@property(assign, nonatomic) BOOL isReImport;
@property(retain, nonatomic) NSString* email;
@property(retain, nonatomic) NSString* taskId;
-(void).cxx_destruct;
-(void)dealloc;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)refresh:(id)refresh;
-(void)endEdit;
-(void)beginEdit;
-(void)skip;
-(void)commit:(id)commit;
-(void)alertView:(id)view didDismissWithButtonIndex:(int)buttonIndex;
-(void)back;
-(void)resumeTimer;
-(void)pauseTimer;
-(void)closeTimer;
-(void)setupTimer;
-(void)reImport;
-(void)setImportHidden:(BOOL)hidden;
-(void)resetUI;
-(void)changeDisplay4CannotFindBills;
-(void)changeFindesdDisplay:(id)display;
-(void)gotoResult:(id)result;
-(void)setProcessWithStep:(int)step radio:(int)radio;
-(void)updateDesc;
-(void)autoForward;
-(void)displayCheckCode:(id)code;
-(void)queryTaskStatus;
-(void)cancelTask;
-(void)cancel:(id)cancel;
-(void)didReceiveMemoryWarning;
-(void)viewDidLoad;
-(id)initWithTaskId:(id)taskId email:(id)email;
@end
