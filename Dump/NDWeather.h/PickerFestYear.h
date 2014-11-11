//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "PickerContentViewDelegate.h"
#import "PickerTypeDelegate.h"

@class FestYearTypeController, NSString;

__attribute__((visibility("hidden")))
@interface PickerFestYear : UIViewController <PickerTypeDelegate, PickerContentViewDelegate>
{
    FestYearTypeController *picker;
    NSString *nCurData;
    id <PickerDelegate> delegate;
}

+ (id)createPickerFestYearWithDelegate:(id)arg1;
+ (void)showPickerFestivalWithCurFest:(id)arg1 WithDelegate:(id)arg2;
+ (void)showPickerLunarYearWithCurYear:(id)arg1 WithDelegate:(id)arg2;
+ (void)showPickerSolarYearWithCurYear:(id)arg1 WithDelegate:(id)arg2;
@property(retain, nonatomic) FestYearTypeController *picker; // @synthesize picker;
@property(retain, nonatomic) NSString *nCurData; // @synthesize nCurData;
@property(nonatomic) id <PickerDelegate> delegate; // @synthesize delegate;
- (void)PickerContentViewTouchEvent:(int)arg1;
- (void)pickerType:(id)arg1 didChangeDataWithNewData:(id)arg2;
- (void)dealloc;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)loadView;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)delegateFunction:(id)arg1;
- (void)showPickerWithCurData:(id)arg1;
- (void)onBtnAll:(id)arg1;
- (void)onBtnCancel:(id)arg1;
- (void)onBtnOK:(id)arg1;

@end
