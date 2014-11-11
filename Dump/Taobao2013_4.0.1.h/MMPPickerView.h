//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MPToolbar, UIPickerView;

@interface MMPPickerView : UIView
{
    id <MMPPickerDelegate> _pickerDelegate;
    id <UIPickerViewDataSource> _dataSource;
    id <UIPickerViewDelegate> _delegate;
    UIPickerView *_picker;
    UIView *_host;
    MPToolbar *_toolbar;
}

@property(retain, nonatomic) MPToolbar *toolbar; // @synthesize toolbar=_toolbar;
@property(retain, nonatomic) UIView *host; // @synthesize host=_host;
@property(retain, nonatomic) UIPickerView *picker; // @synthesize picker=_picker;
@property(nonatomic) __weak id <UIPickerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <UIPickerViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <MMPPickerDelegate> pickerDelegate; // @synthesize pickerDelegate=_pickerDelegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)doneClick:(id)arg1;
- (void)cancelClick:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 andInputHost:(id)arg2;
- (void)commonInit:(struct CGRect)arg1;

@end

