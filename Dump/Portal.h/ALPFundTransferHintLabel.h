/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Portal-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIFont, UILabel;

@interface ALPFundTransferHintLabel : XXUnknownSuperclass {
@private
	UIFont* _textFont;
	UILabel* _textOne;
	UILabel* _textTwo;
	UILabel* _textThree;
}
@property(retain, nonatomic) UILabel* textThree;
@property(retain, nonatomic) UILabel* textTwo;
@property(retain, nonatomic) UILabel* textOne;
-(void).cxx_destruct;
-(void)updateTextThree:(id)three;
-(void)updateTextTwo:(id)two;
-(void)updateTextOne:(id)one;
-(id)initWithFrame:(CGRect)frame textOne:(id)one textTwo:(id)two textThree:(id)three fontSize:(float)size;
@end

