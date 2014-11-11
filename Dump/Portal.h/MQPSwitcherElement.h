/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MQPBaseElement.h"
#import "Portal-Structs.h"

@class UIImageView, UILabel, SevenSwitch;

@interface MQPSwitcherElement : MQPBaseElement {
@private
	SevenSwitch* _switch;
	UILabel* _textLabel;
	UIImageView* _bgpanelView;
	CGSize _allowMaxSize;
}
-(void)changeStyleTextFont:(id)font;
-(void)changeStyleTextDecoration:(id)decoration;
-(void)changeStyleTextColor:(id)color;
-(void)initAttribute;
-(void)changeAttrText:(id)text;
-(void)dealloc;
-(void)switchChange:(id)change;
-(void)changeText:(id)text;
-(id)initWithFixBounds:(CGRect)fixBounds Model:(id)model AndSuperViewSize:(CGSize)size Align:(id)align HandleEventBlock:(id)block;
@end

