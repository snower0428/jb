/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Portal-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class ALPLinkButton, UILabel, ALPCheckBox;
@protocol ALPAgreementBoxDelegate;

@interface ALPAgreementBox : XXUnknownSuperclass {
@private
	ALPCheckBox* _checkbox;
	UILabel* _textLabel;
	ALPLinkButton* _linkButton;
	BOOL _checkBoxHidden;
	id<ALPAgreementBoxDelegate> _delegate;
}
@property(assign, nonatomic) id<ALPAgreementBoxDelegate> delegate;
@property(assign, nonatomic) BOOL checkBoxHidden;
@property(assign, nonatomic) BOOL checked;
+(float)heightOfControl;
+(id)agreementBoxWithOriginY:(float)originY labelText:(id)text linkText:(id)text3 delegate:(id)delegate;
-(void).cxx_destruct;
-(id)linkButton;
-(id)textLabel;
-(void)linkButtonClicked;
-(void)checkboxClicked;
-(id)initWithFrame:(CGRect)frame LabelText:(id)text linkText:(id)text3;
@end
