//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIPickerViewDataSource.h"
#import "UIPickerViewDelegate.h"

@class NSArray, NSString, UIView, UIWindow;

@interface TBCityHUDPicker : NSObject <UIPickerViewDelegate, UIPickerViewDataSource>
{
    UIWindow *_HUDwindow;
    UIView *_containerView;
    NSString *_currentSelectedString;
    int _currentSelectedIndex;
    NSArray *_dataSource;
    NSString *_title;
    NSString *_tag;
    id <TBCityHUDPickerDelegate> _delegate;
}

+ (void)hidePicker;
+ (void)showPicker:(id)arg1 Title:(id)arg2 Delegate:(id)arg3;
+ (id)sharedInstance;
@property(nonatomic) id <TBCityHUDPickerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *tag; // @synthesize tag=_tag;
- (void).cxx_destruct;
- (void)onConfirmBtnClicked:(id)arg1;
- (void)onCacnelBtnClicked:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3;
- (id)pickerView:(id)arg1 titleForRow:(int)arg2 forComponent:(int)arg3;
- (float)pickerView:(id)arg1 rowHeightForComponent:(int)arg2;
- (int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2;
- (int)numberOfComponentsInPickerView:(id)arg1;
- (void)onSelfTapped:(id)arg1;
- (void)reset;
- (id)bluredImage;
- (void)removeSubViews;
- (void)layoutSubViews;
- (void)hidePickerInternal;
- (void)showPickerInternal;
- (void)dealloc;
- (id)init;

@end

