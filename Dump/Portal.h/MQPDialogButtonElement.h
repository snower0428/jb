/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MQPBaseElement.h"
#import "Portal-Structs.h"

@class UIButton;

@interface MQPDialogButtonElement : MQPBaseElement {
@private
	UIButton* _backgroudButton;
}
@property(assign, nonatomic) UIButton* backgroudButton;
-(void)initAttribute;
-(void)changeAttrEnable:(id)enable;
-(void)changeAttrCountdownInterval:(id)interval;
-(void)changeAttrCountdown:(id)countdown;
-(void)changeAttrText:(id)text;
-(void)dealloc;
-(void)click:(id)click;
-(id)initWithFixBounds:(CGRect)fixBounds Model:(id)model AndSuperViewSize:(CGSize)size Align:(id)align HandleEventBlock:(id)block;
@end
