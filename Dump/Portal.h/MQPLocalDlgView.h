/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray;

@interface MQPLocalDlgView : XXUnknownSuperclass {
@private
	NSArray* _qpButtons;
	id _delegate;
	SEL _seletor;
}
@property(assign, nonatomic) SEL seletor;
@property(assign, nonatomic) id delegate;
@property(retain, nonatomic) NSArray* qpButtons;
-(void)btnClick:(id)click index:(int)index;
-(void)threebtnClick:(id)click;
-(void)twobtnClick:(id)click;
-(void)onebtnClick:(id)click;
-(void)addDialog:(id)dialog message:(id)message delegate:(id)delegate seletor:(SEL)seletor buttons:(id)buttons;
-(id)initWithTitle:(id)title message:(id)message delegate:(id)delegate seletor:(SEL)seletor buttons:(id)buttons;
-(void)dealloc;
@end
