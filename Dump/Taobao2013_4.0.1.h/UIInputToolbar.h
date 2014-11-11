//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "HPGrowingTextViewDelegate.h"

@class CPHPGrowingTextView, NSString, UILabel;

@interface UIInputToolbar : UIView <HPGrowingTextViewDelegate>
{
    CPHPGrowingTextView *_textView;
    UILabel *_placeHolderLabel;
    id <UIInputToolbarDelegate> _inputToolbarDelegate;
    NSString *_placeholder;
    int _maxCharCount;
    int _returnKeyType;
    UILabel *placeHolderLabel;
    UILabel *hintLabel;
}

@property(nonatomic) int returnKeyType; // @synthesize returnKeyType=_returnKeyType;
@property(nonatomic) int maxCharCount; // @synthesize maxCharCount=_maxCharCount;
@property(retain, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(retain, nonatomic) UILabel *hintLabel; // @synthesize hintLabel;
@property(nonatomic) id <UIInputToolbarDelegate> inputToolBarDelegate; // @synthesize inputToolBarDelegate=_inputToolbarDelegate;
@property(retain, nonatomic) UILabel *placeHolderLabel; // @synthesize placeHolderLabel;
@property(retain, nonatomic) CPHPGrowingTextView *textView; // @synthesize textView=_textView;
- (void).cxx_destruct;
- (void)growingTextViewDidEndEditing:(id)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)growingTextViewShouldReturn:(id)arg1;
- (void)growingTextViewDidChange:(id)arg1;
- (void)growingTextView:(id)arg1 willChangeHeight:(float)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)initToolbarWith:(struct CGRect)arg1;
- (void)inputButtonClicked:(id)arg1;

@end

