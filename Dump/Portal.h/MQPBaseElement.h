/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Portal-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIColor, MQPJsonBase, NSString, NSMutableDictionary, UIImage, UIFont;

@interface MQPBaseElement : XXUnknownSuperclass {
	CGSize _allowMaxSize;
	UIFont* _font;
	UIColor* _backgroudColor;
	UIColor* _textColor;
	CGSize _fixSize;
	UIImage* _image;
	UIEdgeInsets _margin;
	UIEdgeInsets _padding;
@private
	int _align;
	BOOL _enable;
	BOOL _showToast;
	MQPJsonBase* _elementModel;
	id _handleBlock;
	NSString* _ctrlScript;
	NSString* _toastMessage;
	NSMutableDictionary* _attrChange;
	CGSize _latestSize;
}
@property(retain, nonatomic) NSMutableDictionary* attrChange;
@property(retain, nonatomic) UIColor* textColor;
@property(assign, nonatomic) BOOL showToast;
@property(retain, nonatomic) NSString* toastMessage;
@property(assign, nonatomic) BOOL enable;
@property(retain, nonatomic) NSString* ctrlScript;
@property(copy, nonatomic) id handleBlock;
@property(assign, nonatomic) CGSize latestSize;
@property(retain, nonatomic) MQPJsonBase* elementModel;
-(void)initAttribute;
-(void)changeStyleTextFont:(id)font;
-(void)changeStyleTextDecoration:(id)decoration;
-(void)changeStyleTextColor:(id)color;
-(void)changeAttrToastMsg:(id)msg;
-(void)changeAttrPopAlert:(id)alert;
-(void)changeAttrFormat:(id)format;
-(void)addAttrNode:(id)node changeAttr:(SEL)attr;
-(void)changeAttrShowToast:(id)toast;
-(void)changeAttrEnable:(id)enable;
-(void)changeAttrVisible:(id)visible;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(void)clearObserveObj:(id)obj observeProperty:(id)property;
-(void)setObserveObj:(id)obj observeProperty:(id)property;
-(void)dealloc;
-(void)actionEventWithType:(int)type;
-(void)reloadSuperLayoutWithSubView:(id)subView;
-(id)initWithFixBounds:(CGRect)fixBounds Model:(id)model AndSuperViewSize:(CGSize)size Align:(id)align HandleEventBlock:(id)block;
@end

