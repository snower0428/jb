//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTBaseCell.h"

#import "UITextFieldDelegate.h"

@class MTTextField;

@interface MTPurchaseTextViewCell : MTBaseCell <UITextFieldDelegate>
{
    CDUnknownBlockType _callback;
    MTTextField *_textField;
}

+ (id)cellWithStyle:(int)arg1;
@property(readonly, nonatomic) MTTextField *textField; // @synthesize textField=_textField;
- (void).cxx_destruct;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)setDidEditTextViewCallback:(CDUnknownBlockType)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
