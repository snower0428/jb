/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "Portal-Structs.h"

@class UIImageView, UILabel, UIButton, NSString, UITextField, ALPInputBoxTextField;

@interface ALPInputBox : XXUnknownSuperclass {
@private
	ALPInputBoxTextField* _textField;
	UIImageView* _backgroundImage;
	BOOL _fontBold;
	BOOL _buttonVisible;
	BOOL _settingText;
	UILabel* _titleLabel;
	BOOL _textFieldBold;
	BOOL _hidesButtonWhileNotEmpty;
	BOOL _hidesButton;
	UIButton* _iconButton;
	NSString* _textFieldFormatPattern;
	float _horizontalMargin;
	int _style;
}
@property(assign, nonatomic) int style;
@property(readonly, assign, nonatomic) UILabel* titleLabel;
@property(assign, nonatomic) float horizontalMargin;
@property(readonly, assign, nonatomic) UIImageView* backgroundImage;
@property(assign, nonatomic) BOOL hidesButton;
@property(assign, nonatomic) BOOL hidesButtonWhileNotEmpty;
@property(retain, nonatomic) NSString* textFieldFormat;
@property(retain, nonatomic) NSString* textFieldText;
@property(assign, nonatomic) BOOL textFieldFontBold;
@property(readonly, assign, nonatomic) UIButton* iconButton;
@property(readonly, assign, nonatomic) UITextField* textField;
+(BOOL)isCell:(id)cell;
+(float)heightOfControl;
+(id)inputBox2WithOriginY:(float)originY placeHolder:(id)holder buttonIcon:(id)icon target:(id)target action:(SEL)action;
+(id)inputBoxWithOriginY:(float)originY placeHolder:(id)holder buttonIcon:(id)icon target:(id)target action:(SEL)action;
+(id)inputBoxWithOriginY:(float)originY placeHolder:(id)holder;
-(void).cxx_destruct;
-(void)willMoveToSuperview:(id)superview;
-(BOOL)shouldChangeRange:(NSRange)range replacementString:(id)string withFormatStringMaxLength:(int)formatStringMaxLength;
-(BOOL)shouldChangeRange:(NSRange)range replacementString:(id)string withMaxLength:(int)maxLength;
-(id)originalText;
-(void)setRightButtonIcon:(id)icon target:(id)target action:(SEL)action;
-(void)setInputBoxOriginXCommonPix;
-(void)layoutSubviews;
-(id)formatText:(id)text;
-(NSRange)rangeFromTextRange:(id)textRange;
-(id)textRangeFromRange:(NSRange)range;
-(void)updateTextFieldTextIfNecessary;
-(BOOL)iconButtonShouldBeVisible;
-(BOOL)textFieldShouldBeBold;
-(void)layoutIfNecessary;
-(BOOL)isSupportSiri;
-(void)textFieldTextDidChange;
-(void)buildIconButton;
-(id)initWithFrame:(CGRect)frame buttonIcon:(id)icon;
-(id)createImageWithColor:(id)color;
@end

