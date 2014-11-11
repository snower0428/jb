/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MQPBaseElement.h"
#import "Portal-Structs.h"

@class MQPRTlabel, UIImageView, UIView, UIButton;

@interface MQPLabelElement : MQPBaseElement {
	UIView* _backplaneView;
	UIButton* _strikeView;
@private
	BOOL _autoSizeFlag;
	float _iconWidthAndInterval;
	MQPRTlabel* _textLabel;
	UIImageView* _iconImageView;
}
@property(retain, nonatomic) UIImageView* iconImageView;
@property(retain, nonatomic) MQPRTlabel* textLabel;
-(void)initAttribute;
-(void)changeStyleTextFont:(id)font;
-(void)changeStyleTextDecoration:(id)decoration;
-(void)changeStyleTextColor:(id)color;
-(void)changeAttrText:(id)text;
-(void)setLabelText:(id)text;
-(void)seticonImage:(id)image;
-(void)layoutTextWithIconWith:(int)with;
-(void)dealloc;
-(id)initWithFixBounds:(CGRect)fixBounds Model:(id)model AndSuperViewSize:(CGSize)size Align:(id)align HandleEventBlock:(id)block;
@end

