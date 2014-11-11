//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextFieldDelegate.h"

@class NSArray, UIButton, UIImageView, UITextField;

@interface TMQuantityInputBox : UIView <UITextFieldDelegate>
{
    UIButton *_decreaseButton;
    UIButton *_increateButton;
    UIImageView *_decImageView;
    UIImageView *_incImageView;
    UITextField *_textField;
    BOOL _editableTextField;
    id <TMQuantityInputBoxDelegate> _delegate;
    unsigned int _maxValue;
    unsigned int _minValue;
    unsigned int _stepValue;
    NSArray *_validValues;
    unsigned int _quantityValue;
}

@property(readonly, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(nonatomic) BOOL editableTextField; // @synthesize editableTextField=_editableTextField;
@property(nonatomic) unsigned int quantityValue; // @synthesize quantityValue=_quantityValue;
@property(retain, nonatomic) NSArray *validValues; // @synthesize validValues=_validValues;
@property(nonatomic) unsigned int stepValue; // @synthesize stepValue=_stepValue;
@property(nonatomic) unsigned int minValue; // @synthesize minValue=_minValue;
@property(nonatomic) unsigned int maxValue; // @synthesize maxValue=_maxValue;
@property(nonatomic) id <TMQuantityInputBoxDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)textFieldDidBeginEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)setupWithValue:(unsigned int)arg1 minValue:(unsigned int)arg2 maxValue:(unsigned int)arg3 stepValue:(unsigned int)arg4;
- (void)onTextChanged:(id)arg1;
- (void)decreaseButtonEvent;
- (void)increaseButtonEvent;
- (void)notifyChanged;
- (void)updateText;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

