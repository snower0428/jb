/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Portal-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIImageView, NSMutableDictionary, UILabel;

@interface TFStackButton : XXUnknownSuperclass {
@private
	NSMutableDictionary* _resource;
	UIImageView* _btnIcon;
	UILabel* _btnTitle;
	unsigned _btnState;
}
@property(assign, nonatomic) unsigned btnState;
@property(assign, nonatomic) __weak UILabel* btnTitle;
@property(assign, nonatomic) __weak UIImageView* btnIcon;
@property(retain, nonatomic) NSMutableDictionary* resource;
-(void).cxx_destruct;
-(void)refreshButton;
-(id)title;
-(void)setTitle:(id)title forState:(unsigned)state;
-(id)icon;
-(void)setIcon:(id)icon forState:(unsigned)state;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(void)removeObserver;
-(void)addObserver;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end

