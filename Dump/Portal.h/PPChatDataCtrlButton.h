/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PPChatDataCtrlBase.h"

@class UIImage, NSString;

@interface PPChatDataCtrlButton : PPChatDataCtrlBase {
@private
	NSString* _text;
	NSString* _detailText;
	int _accountIndex;
	UIImage* _rightIcon;
}
@property(retain, nonatomic) UIImage* rightIcon;
@property(assign, nonatomic) int accountIndex;
@property(retain, nonatomic) NSString* detailText;
@property(retain, nonatomic) NSString* text;
-(void).cxx_destruct;
-(void)dealloc;
-(id)init;
@end
