/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, UIButton;
@protocol KeyboardDelegate;

@interface CustomKeyboard : XXUnknownSuperclass {
	UIButton* backgroundButton;
	NSMutableArray* keyButtons;
	id<KeyboardDelegate> keyboardDelegate;
}
@property(assign, nonatomic) id keyboardDelegate;
+(id)getInstance;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)createKeyboard;
-(void)pressKeyButton:(id)button;
-(void)dealloc;
@end

