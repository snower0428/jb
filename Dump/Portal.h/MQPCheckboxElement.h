/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MQPBaseElement.h"
#import "Portal-Structs.h"

@class MQPRTlabel, UIImageView, UIButton;

@interface MQPCheckboxElement : MQPBaseElement {
@private
	UIButton* _backPanelView;
	CGSize _allowMaxSize;
	UIImageView* _bgImageView;
	BOOL _checkBoxSelect;
	UIImageView* _checkButton;
	MQPRTlabel* _textLabel;
}
@property(retain, nonatomic) MQPRTlabel* textLabel;
@property(retain, nonatomic) UIImageView* checkButton;
-(void)initAttribute;
-(void)changeAttrToastMsg:(id)msg;
-(void)changeStyleTextFont:(id)font;
-(void)changeStyleTextDecoration:(id)decoration;
-(void)changeStyleTextColor:(id)color;
-(void)changeAttrEnable:(id)enable;
-(void)changeAttrShowToast:(id)toast;
-(void)changeAttrChecked:(id)checked;
-(void)changeAttrText:(id)text;
-(void)dealloc;
-(void)unPushSubmitButton;
-(void)pushSubmitButton;
-(void)clickCheckboxButton:(id)button;
-(void)changeText:(id)text;
-(id)initWithFixBounds:(CGRect)fixBounds Model:(id)model AndSuperViewSize:(CGSize)size Align:(id)align HandleEventBlock:(id)block;
@end
