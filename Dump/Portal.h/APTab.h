/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Portal-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, UIImageView, UIButton;
@protocol APTabDelegate;

@interface APTab : XXUnknownSuperclass {
	UIButton* _selectedButton;
	UIImageView* _cover;
	NSMutableArray* _tabButtons;
	id<APTabDelegate> _delegate;
}
@property(retain, nonatomic) UIButton* selectedButton;
@property(assign, nonatomic) int tabIndex;
-(void)dealloc;
-(void)tabButtonClicked:(id)clicked;
-(void)animationDidStop:(id)animation finished:(id)finished context:(void*)context;
-(void)_tabBarChangeStatusWithSender:(id)sender;
-(id)initWithFrame:(CGRect)frame andDelegate:(id)delegate andTitles:(id)titles;
-(void)_layoutTabButtonsWithTitles:(id)titles;
-(id)_generateTabButton;
-(id)_selectedColor;
-(id)_idleColor;
@end
