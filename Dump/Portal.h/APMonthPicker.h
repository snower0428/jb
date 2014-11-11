/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "APDatePickerViewDelegate.h"
#import "APView.h"
#import "Portal-Structs.h"

@class NSString, APDatePicker, UIButton;

@interface APMonthPicker : APView <APDatePickerViewDelegate> {
	UIButton* _button;
	NSString* _hint;
	APDatePicker* _datePaker;
}
@property(assign, nonatomic) NSString* hint;
-(void)ctrl_value_set:(id)set;
-(id)ctrl_value_get;
-(void)APDatePickerViewDidSelectedYear:(int)apdatePickerView Month:(int)month;
-(void)APDatePickerViewDidClickDoneButton;
-(void)actionButtonClicked:(id)clicked;
-(void)setFrame:(CGRect)frame;
-(void)hideDatePicker;
-(void)showDatePicker;
-(id)initWithNode:(id)node;
-(void)dealloc;
@end
