/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MBFormatTextField.h"
#import "Portal-Structs.h"


@interface MBMoneyTextField : MBFormatTextField {
@private
	double _maxMoney;
}
@property(assign, nonatomic) double maxMoney;
-(BOOL)textFieldShouldReturn:(id)textField;
-(id)formatedAmount:(id)amount;
-(BOOL)textField:(id)field shouldChangeCharactersInRange:(NSRange)range replacementString:(id)string;
-(void)refreshText:(id)text;
-(id)text;
-(id)initWithFrame:(CGRect)frame;
@end

