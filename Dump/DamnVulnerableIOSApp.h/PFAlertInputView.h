/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "UITextFieldDelegate.h"
#import "DamnVulnerableIOSApp-Structs.h"

@class NSString, UITextField;

@interface PFAlertInputView : XXUnknownSuperclass <UITextFieldDelegate> {
	UITextField* textField;
}
@property(retain, nonatomic) UITextField* textField;
@property(readonly, assign, nonatomic) NSString* text;
-(void).cxx_destruct;
-(BOOL)textFieldShouldReturn:(id)textField;
-(void)layoutSubviews;
-(void)show;
-(id)initWithTitle:(id)title message:(id)message delegate:(id)delegate cancelButtonTitle:(id)title4 okButtonTitle:(id)title5;
@end
