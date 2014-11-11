/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class ALPButtonTargetProxy;

@interface ALPButton : XXUnknownSuperclass {
@private
	int _type;
	int _size;
	ALPButtonTargetProxy* _proxy;
}
@property(retain, nonatomic) ALPButtonTargetProxy* proxy;
@property(assign, nonatomic) int size;
@property(assign, nonatomic) int type;
+(float)heightOfControl;
+(id)buttonWithType:(int)type size:(int)size originY:(float)y title:(id)title target:(id)target action:(SEL)action;
+(id)buttonWithDeviceTypeLessThan7:(id)deviceTypeLessThan7 type:(int)type;
+(id)buttonWithDeviceType:(id)deviceType type:(int)type;
+(id)createImageWithColor:(id)color;
+(id)loginButtonWithY:(float)y title:(id)title target:(id)target action:(SEL)action;
-(void).cxx_destruct;
-(void)setbackGroundImg:(id)img withHighlightImg:(id)highlightImg;
-(void)setEnabled:(BOOL)enabled;
-(id)initWithType:(int)type size:(int)size;
-(void)assetDarkBackgound;
@end

