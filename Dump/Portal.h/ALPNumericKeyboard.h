/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "UIInputViewAudioFeedback.h"

@class UIImageView;
@protocol UITextInput;

@interface ALPNumericKeyboard : XXUnknownSuperclass <UIInputViewAudioFeedback> {
@private
	id<UITextInput> _input;
	BOOL _tfShouldChange;
	BOOL _tvShouldChange;
	UIImageView* _backgroundView;
}
@property(readonly, assign, nonatomic) BOOL enableInputClicksWhenVisible;
+(id)sharedKeyboard;
-(void).cxx_destruct;
-(void)backspaceTapped;
-(void)clearTapped;
-(void)returnTapped;
-(void)dismissTapped;
-(void)digitTapped:(id)tapped;
-(void)buttonTapped:(id)tapped;
-(void)click:(id)click;
-(void)checkInput:(id)input;
-(void)layoutSubviews;
-(void)createButtons;
-(void)dealloc;
-(id)init;
@end

