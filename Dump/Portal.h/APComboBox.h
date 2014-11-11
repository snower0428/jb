/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Portal-Structs.h"
#import "APView.h"
#import "APPickerViewDelegate.h"

@class APPickerView, Ds, NSMutableArray, UIButton, NSArray, NSString;

@interface APComboBox : APView <APPickerViewDelegate> {
	int dataLenMax;
	Ds* ds;
	UIButton* _button;
	APPickerView* _pickerView;
	BOOL _isSave;
	int _showType;
	NSArray* _showData;
	NSString* adapterString;
	NSString* valueString;
	NSString* itemSelectedString;
	NSMutableArray* _itemArray;
	int _selectedIndex;
	NSString* dataString;
	NSArray* dataArray;
	NSArray* scriptArray;
	BOOL _shouldUpdateData;
}
@property(retain, nonatomic) NSArray* itemArray;
@property(retain, nonatomic) NSArray* showData;
@property(assign, nonatomic) int showType;
@property(assign, nonatomic) BOOL isSave;
@property(retain, nonatomic) NSString* adapterString;
@property(retain, nonatomic) NSString* valueString;
@property(retain, nonatomic) Ds* ds;
@property(assign, nonatomic) int selectedIndex;
@property(retain, nonatomic) NSString* itemSelectedString;
@property(retain, nonatomic) NSString* dataString;
@property(retain, nonatomic) NSArray* dataArray;
@property(retain, nonatomic) NSArray* scriptArray;
-(void)setcValue:(id)value aCtrlValue:(id)value2;
-(void)ctrl_data_add:(id)add;
-(id)ctrl_data_get;
-(void)ctrl_exps_set:(id)set;
-(void)ctrl_total_set:(id)set;
-(void)ctrl_reset;
-(void)ctrl_data_set:(id)set;
-(void)ctrl_value_set:(id)set;
-(id)getcIndex:(id)index;
-(BOOL)regexRt;
-(id)ctrl_value_get;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)enabled;
-(void)APPickerViewDidSelectItem:(id)appickerView userInfo:(id)info tag:(int)tag;
-(void)APPickerViewDidClickDoneButton:(int)appickerView userInfo:(id)info;
-(void)refurbish;
-(id)adapterData:(id)data aAdapterString:(id)string;
-(id)adapter:(id)adapter;
-(void)bindData;
-(void)setText:(id)text;
-(void)setHint:(id)hint;
-(void)BtnClick:(id)click;
-(void)setFrame:(CGRect)frame;
-(void)hidePickerView;
-(void)showPickerView;
-(void)createComboxButton;
-(id)initWithNode:(id)node;
-(void)dealloc;
@end

