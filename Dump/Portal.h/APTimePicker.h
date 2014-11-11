/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "APBasePicker.h"
#import "Portal-Structs.h"

@class NSDate;

@interface APTimePicker : APBasePicker {
@private
	NSDate* _sysDate;
	NSDate* _endDate;
	int _pickedYear;
	int _pickedMonth;
	int _pickedDay;
	int _pickedHour;
	int _pickedMin;
}
@property(assign, nonatomic) int pickedMin;
@property(assign, nonatomic) int pickedHour;
@property(assign, nonatomic) int pickedDay;
@property(assign, nonatomic) int pickedMonth;
@property(assign, nonatomic) int pickedYear;
@property(retain, nonatomic) NSDate* endDate;
@property(retain, nonatomic) NSDate* sysDate;
-(void).cxx_destruct;
-(id)pickerView:(id)view viewForRow:(int)row forComponent:(int)component reusingView:(id)view4;
-(float)pickerView:(id)view widthForComponent:(int)component;
-(void)pickerView:(id)view didSelectRow:(int)row inComponent:(int)component;
-(int)pickerView:(id)view numberOfRowsInComponent:(int)component;
-(int)numberOfComponentsInPickerView:(id)pickerView;
-(id)getPickerValue;
-(id)valueInComponent:(int)component row:(int)row;
-(int)minByRow:(int)row inHour:(int)hour inDay:(int)day inMonth:(int)month inYear:(int)year;
-(int)hourByRow:(int)row inDay:(int)day inMonth:(int)month inYear:(int)year;
-(int)dayByRow:(int)row inMonth:(int)month inYear:(int)year;
-(int)monthByRow:(int)row inYear:(int)year;
-(int)yearByRow:(int)row;
-(int)rowOfMin:(int)min inHour:(int)hour inDay:(int)day inMonth:(int)month inYear:(int)year;
-(int)rowOfHour:(int)hour inDay:(int)day inMonth:(int)month inYear:(int)year;
-(int)rowOfDay:(int)day inMonth:(int)month inYear:(int)year;
-(int)rowOfMonth:(int)month inYear:(int)year;
-(int)rowOfYear:(int)year;
-(int)daysInYear:(int)year month:(int)month;
-(id)initWithFrame:(CGRect)frame;
-(void)setDate:(id)date animated:(BOOL)animated;
@end
