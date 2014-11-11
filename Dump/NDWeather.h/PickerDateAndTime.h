//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "PickerContentViewDelegate.h"
#import "PickerTypeDelegate.h"

@class DateTypeController, NSString, PickerDateAndTimeView, TimeTypeController;

__attribute__((visibility("hidden")))
@interface PickerDateAndTime : UIViewController <PickerTypeDelegate, PickerContentViewDelegate>
{
    BOOL isShowTime;
    TimeTypeController *pickerTime;
    DateTypeController *pickerDay;
    NSString *nCurTime;
    int nCurYear;
    int nCurMonth;
    int nCurDay;
    id <PickerDelegate> delegate;
    PickerDateAndTimeView *_contentView;
}

+ (id)createPickerDateAndTimeWithDelegate:(id)arg1;
+ (void)showPickerDateAndTimeWithYear:(int)arg1 WithMonth:(int)arg2 WithDay:(int)arg3 WithTime:(id)arg4 WithDelegate:(id)arg5;
@property(retain, nonatomic) PickerDateAndTimeView *_contentView; // @synthesize _contentView;
@property int nCurDay; // @synthesize nCurDay;
@property int nCurMonth; // @synthesize nCurMonth;
@property int nCurYear; // @synthesize nCurYear;
@property(retain, nonatomic) DateTypeController *pickerDay; // @synthesize pickerDay;
@property BOOL isShowTime; // @synthesize isShowTime;
@property(nonatomic) id <PickerDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) NSString *nCurTime; // @synthesize nCurTime;
@property(retain, nonatomic) TimeTypeController *pickerTime; // @synthesize pickerTime;
- (void)PickerContentViewTouchEvent:(int)arg1;
- (void)pickerType:(id)arg1 didChangeDataWithNewData:(id)arg2;
- (void)dealloc;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)loadView;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)updatePicker;
- (void)initDataWithTime:(id)arg1;
- (void)reloadPickerSolarYearMonthDay;
- (void)showPickerSolarYearMonthDayWithYear:(int)arg1 WithMonth:(int)arg2 WithDay:(int)arg3;
- (void)showPickerTimeWithHourAndMinuteWithTime:(id)arg1;
- (void)pressCurDay:(id)arg1;
- (void)btnDateShowChange:(id)arg1;
- (void)pressSetDay:(id)arg1;
- (void)returnBtnPress:(id)arg1;

@end

