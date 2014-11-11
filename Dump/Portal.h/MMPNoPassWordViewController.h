/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "UIAlertViewDelegate.h"

@class UIView, MMPPasswordSwichView, MMPPopupAlertView, UIScrollView, UILabel, UIButton, NSArray, NSString, SEFilterControl;

@interface MMPNoPassWordViewController : XXUnknownSuperclass <UIAlertViewDelegate> {
@private
	BOOL _bDefaultOpen;
	BOOL _bResultOpen;
	BOOL _bSimplePwd;
	BOOL _bNeedPwdOpen;
	BOOL _bNeedPwdClose;
	BOOL _bShowNoPwdValue;
	BOOL _bClickBack;
	MMPPasswordSwichView* _noPassSwitch;
	UIScrollView* _scrollView;
	UILabel* _infoLabel;
	UIView* _noPassInfoView;
	MMPPopupAlertView* _alertView;
	SEFilterControl* _filterControl;
	NSString* _noPwdTip;
	NSString* _defaultValue;
	NSString* _resultValue;
	NSArray* _valueArray;
	UIButton* _saveButton;
	NSString* _statusCode;
}
@property(assign, nonatomic) BOOL bClickBack;
@property(retain, nonatomic) NSString* statusCode;
@property(retain, nonatomic) UIButton* saveButton;
@property(retain, nonatomic) NSArray* valueArray;
@property(retain, nonatomic) NSString* resultValue;
@property(retain, nonatomic) NSString* defaultValue;
@property(retain, nonatomic) NSString* noPwdTip;
@property(assign, nonatomic) BOOL bShowNoPwdValue;
@property(assign, nonatomic) BOOL bNeedPwdClose;
@property(assign, nonatomic) BOOL bNeedPwdOpen;
@property(assign, nonatomic) BOOL bSimplePwd;
@property(assign, nonatomic) BOOL bResultOpen;
@property(assign, nonatomic) BOOL bDefaultOpen;
@property(retain, nonatomic) SEFilterControl* filterControl;
@property(retain, nonatomic) UIView* noPassInfoView;
@property(retain, nonatomic) UILabel* infoLabel;
@property(retain, nonatomic) UIScrollView* scrollView;
@property(retain, nonatomic) MMPPopupAlertView* alertView;
@property(retain, nonatomic) MMPPasswordSwichView* noPassSwitch;
-(void).cxx_destruct;
-(void)didReceiveMemoryWarning;
-(BOOL)bChangeStatus;
-(void)filterValueChanged:(id)changed;
-(void)openNoPassSwitch:(BOOL)aSwitch;
-(void)changeNoPassSwitch:(id)aSwitch;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)showInputPassWordAlertView;
-(void)clickSave;
-(void)showNoteAlertView:(id)view note:(id)note;
-(void)netWorkRequestWithPwd:(id)pwd;
-(void)viewDidLoad;
-(void)applicationEnterBackground:(id)background;
-(void)dealloc;
-(void)goBack;
-(id)initWithIsOpen:(BOOL)isOpen bNeedPwdOpen:(BOOL)open bNeedPwdClose:(BOOL)close bNeedSimplePwd:(BOOL)pwd bShowNoPwdValue:(BOOL)value tipString:(id)string setSelectValue:(id)value7 valueArray:(id)array;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
@end

