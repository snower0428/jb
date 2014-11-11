/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Portal-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class PPChatDataCtrlBase, UIImageView, NSMutableDictionary;

@interface PPChatCtrlBase : XXUnknownSuperclass {
@private
	UIImageView* _bgImg;
	PPChatDataCtrlBase* _ctrlModel;
	float _ctrlHeight;
	id _notify;
	NSMutableDictionary* _attrChange;
}
@property(retain, nonatomic) NSMutableDictionary* attrChange;
@property(copy, nonatomic) id notify;
@property(assign, nonatomic) float ctrlHeight;
@property(retain, nonatomic) PPChatDataCtrlBase* ctrlModel;
@property(retain, nonatomic) UIImageView* bgImg;
-(void).cxx_destruct;
-(void)initAttribute;
-(void)clrAttrNode;
-(void)addAttrNode:(id)node changeAttr:(SEL)attr;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(void)clearObserveObj:(id)obj observeProperty:(id)property;
-(void)setObserveObj:(id)obj observeProperty:(id)property;
-(void)changeAttrBgImg:(id)img;
-(void)doCtrlAction:(int)action param:(id)param;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame param:(id)param notify:(id)notify;
@end

