/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AGGRBILLINFOToString.h"

@class NSString;

@interface AGGRBILLINFOActionInfo : AGGRBILLINFOToString {
@private
	BOOL _canSkip;
	BOOL _hideInput;
	NSString* _actionId;
	int _actionType;
	NSString* _prompt;
	NSString* _captchaBase64;
	NSString* _captchaUrl;
	NSString* _skipPrompt;
}
@property(retain, nonatomic) NSString* skipPrompt;
@property(assign, nonatomic) BOOL hideInput;
@property(assign, nonatomic) BOOL canSkip;
@property(retain, nonatomic) NSString* captchaUrl;
@property(retain, nonatomic) NSString* captchaBase64;
@property(retain, nonatomic) NSString* prompt;
@property(assign, nonatomic) int actionType;
@property(retain, nonatomic) NSString* actionId;
-(void).cxx_destruct;
@end

