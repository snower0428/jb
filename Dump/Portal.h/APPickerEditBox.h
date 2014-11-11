/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Portal-Structs.h"
#import "UITextFieldDelegate.h"
#import "APView.h"
#import "APPickerViewDelegate.h"

@class APPickerView, UILabel, UIButton, NSString, UITextField;
@protocol APPickerEditBoxDelegate;

@interface APPickerEditBox : APView <UITextFieldDelegate, APPickerViewDelegate> {
	UITextField* _textField;
	UIButton* _button;
	UILabel* _errorLabel;
	UIButton* _historyButton;
	BOOL _isSave;
	BOOL _isSupportDelete;
	int _saveNum;
	int _type;
	NSString* _regexString;
	int _maxCharCount;
	int _minCharCount;
	NSString* _emptyDesc;
	NSString* _normalDesc;
	APPickerView* _pickerView;
@private
	id<APPickerEditBoxDelegate> _delegate;
}
@property(assign, nonatomic) id<APPickerEditBoxDelegate> delegate;
@property(retain, nonatomic) UITextField* textField;
@property(retain, nonatomic) APPickerView* pickerView;
@property(retain, nonatomic) UIButton* button;
@property(retain, nonatomic) NSString* normalDesc;
@property(retain, nonatomic) NSString* emptyDesc;
@property(assign, nonatomic) int minCharCount;
@property(assign, nonatomic) int maxCharCount;
@property(assign, nonatomic) BOOL isSave;
@property(retain, nonatomic) NSString* regexString;
-(void)setButtonFrame:(CGRect)frame;
-(void)updateButtonBackgroundImage:(id)image;
-(void)notificationUIResign:(id)resign;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)enabled;
-(void)saveHistory;
-(BOOL)isValid;
-(void)hideErrorMessage;
-(void)showErrorMessage;
-(void)bindData;
-(void)refurbish;
-(id)getValue:(id)value;
-(void)setcValue:(id)value aCtrlValue:(id)value2;
-(id)ctrl_value_get;
-(void)ctrl_value_set:(id)set;
-(id)ctrl_visible_get;
-(void)ctrl_visible_set:(id)set;
-(void)sendChangeNotify:(id)notify;
-(BOOL)textField:(id)field shouldChangeCharactersInRange:(NSRange)range replacementString:(id)string;
-(void)textFieldDidEndEditing:(id)textField;
-(void)textFieldDidBeginEditing:(id)textField;
-(void)hidePickerView;
-(void)showPickerView;
-(void)APPickerViewDidSelectItem:(id)appickerView userInfo:(id)info tag:(int)tag;
-(void)APPickerViewDidClickDoneButton:(int)appickerView userInfo:(id)info;
-(void)setFrame:(CGRect)frame;
-(void)btnClickHistoryData:(id)data;
-(id)initWithNode:(id)node;
-(void)dealloc;
@end
