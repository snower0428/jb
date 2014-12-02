//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SHKFormFieldCell.h"

#import "UITextFieldDelegate.h"

@class NSString, UITextField;

@interface SHKFormFieldCellText : SHKFormFieldCell <UITextFieldDelegate>
{
    UITextField *textField;
}

@property(retain, nonatomic) UITextField *textField; // @synthesize textField;
- (void)textFieldDidBeginEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (BOOL)textFieldShouldEndEditing:(id)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setupWithSettings:(id)arg1;
- (void)setupLayout;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
