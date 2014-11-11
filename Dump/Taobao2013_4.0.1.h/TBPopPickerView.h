//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIPickerViewDataSource.h"
#import "UIPickerViewDelegate.h"

@class NSMutableArray, UIPickerView, UIToolbar;

@interface TBPopPickerView : UIView <UIPickerViewDelegate, UIPickerViewDataSource>
{
    int _currentRow;
    BOOL isPickerHidden;
    UIPickerView *pickerView;
    UIToolbar *toolbar;
    id <TBPopPickerDelegate> delegate;
    NSMutableArray *modelArray;
}

@property(retain, nonatomic) NSMutableArray *modelArray; // @synthesize modelArray;
@property(nonatomic) BOOL isPickerHidden; // @synthesize isPickerHidden;
@property(nonatomic) id <TBPopPickerDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) UIToolbar *toolbar; // @synthesize toolbar;
@property(retain, nonatomic) UIPickerView *pickerView; // @synthesize pickerView;
- (void).cxx_destruct;
- (int)numberOfComponentsInPickerView:(id)arg1;
- (int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2;
- (float)pickerView:(id)arg1 rowHeightForComponent:(int)arg2;
- (float)pickerView:(id)arg1 widthForComponent:(int)arg2;
- (id)pickerView:(id)arg1 titleForRow:(int)arg2 forComponent:(int)arg3;
- (void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3;
- (void)showPicker:(id)arg1 SelectIndex:(int)arg2 RootController:(id)arg3;
- (void)hidePicker;
- (void)cancelClicked;
- (void)confirmClicked;
- (id)toolbar:(id)arg1;
- (id)toolbarTitleItem:(id)arg1;
- (void)setUpUIWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

