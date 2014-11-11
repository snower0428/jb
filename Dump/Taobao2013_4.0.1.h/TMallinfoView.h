//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIPickerViewDelegate.h"

@class MTOPGetItemDetailDynamicResult, UIButton, UIPickerView;

@interface TMallinfoView : UIView <UIPickerViewDelegate>
{
    MTOPGetItemDetailDynamicResult *_itemDetailModel;
    id _delegate;
    UIPickerView *_cityPickView;
    UIButton *_finishButton;
}

@property(retain, nonatomic) UIButton *finishButton; // @synthesize finishButton=_finishButton;
@property(retain, nonatomic) UIPickerView *cityPickView; // @synthesize cityPickView=_cityPickView;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MTOPGetItemDetailDynamicResult *itemDetailModel; // @synthesize itemDetailModel=_itemDetailModel;
- (void).cxx_destruct;
- (void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3;
- (id)pickerView:(id)arg1 viewForRow:(int)arg2 forComponent:(int)arg3 reusingView:(id)arg4;
- (id)pickerView:(id)arg1 titleForRow:(int)arg2 forComponent:(int)arg3;
- (float)pickerView:(id)arg1 rowHeightForComponent:(int)arg2;
- (float)pickerView:(id)arg1 widthForComponent:(int)arg2;
- (int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2;
- (int)numberOfComponentsInPickerView:(id)arg1;
- (void)dealloc;
- (void)hideTmallView:(id)arg1;
- (void)finished:(id)arg1;
- (void)setupSubviews;
- (id)init;

@end
