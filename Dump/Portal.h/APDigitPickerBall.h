/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Portal-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, UIImage;

@interface APDigitPickerBall : XXUnknownSuperclass {
	bool _isSelected;
	NSString* _text;
	UIImage* _grayBall;
	UIImage* _redBall;
	UIImage* _blueBall;
	UIImage* _redBall30;
	UIImage* _blueBall30;
	int _type;
}
@property(retain, nonatomic) NSString* text;
@property(assign, nonatomic) bool isSelected;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame AndBallType:(int)type;
@end
