/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Portal-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary, NSString;

@interface APButton : XXUnknownSuperclass {
	NSString* _tagName;
	NSDictionary* _attributes;
	NSString* _uid;
	NSString* _actionstring;
	int _type;
	bool _sumbit;
}
@property(readonly, assign, nonatomic) int type;
@property(readonly, assign, nonatomic) NSDictionary* attributes;
@property(retain, nonatomic) NSString* actionstring;
@property(retain, nonatomic) NSString* tagName;
@property(readonly, assign, nonatomic) NSString* uid;
@property(readonly, assign, nonatomic) bool sumbit;
-(void)bindData;
-(void)refurbish;
-(void)setcValue:(id)value aCtrlValue:(id)value2;
-(id)ctrl_value_get;
-(id)ctrl_value_set:(id)set;
-(id)getValue:(id)value;
-(void)doClickAction;
-(void)btnClick:(id)click;
-(void)setText:(id)text;
-(id)initWithFrame:(CGRect)frame;
-(id)initWithFrame:(CGRect)frame andStyle:(int)style;
-(id)text;
-(id)initWithNode:(id)node;
-(void)initButtonWithStyle:(int)style;
-(void)btnImage:(id)image forState:(unsigned)state;
-(void)btnImage:(id)image;
-(void)dealloc;
-(void)changeToALPButtonStyle;
@end
