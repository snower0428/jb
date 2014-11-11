/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Portal-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class ALPAgreementBox, UILabel, ALPButton;

@interface AssetsButtonFooterViewWithAgreement : XXUnknownSuperclass {
@private
	UILabel* _textlabel;
	ALPButton* _button;
	ALPAgreementBox* _agreement;
}
@property(retain) ALPAgreementBox* agreement;
@property(retain, nonatomic) ALPButton* button;
-(void).cxx_destruct;
-(id)getAgreement;
-(void)layoutSubviews;
-(void)addLabelText:(id)text;
-(void)addAgreement:(id)agreement linkText:(id)text delegate:(id)delegate;
-(void)addALPButton:(id)button delegate:(id)delegate action:(SEL)action;
-(id)initWithFrame:(CGRect)frame;
@end

