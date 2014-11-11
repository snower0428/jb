/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Portal-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, UIFont, UIColor;

@interface CeleSegmentItem : XXUnknownSuperclass {
	NSString* _text;
	UIFont* _font;
	UIColor* _color;
	UIColor* _highlightedColor;
	float _shadowBlur;
	CGSize _shadowOffset;
	UIColor* _shadowColor;
	float _width;
	int _alignment;
}
@property(assign, nonatomic) int alignment;
@property(assign, nonatomic) float width;
@property(retain, nonatomic) UIColor* shadowColor;
@property(assign, nonatomic) CGSize shadowOffset;
@property(assign, nonatomic) float shadowBlur;
@property(retain, nonatomic) UIColor* highlightedColor;
@property(retain, nonatomic) UIColor* color;
@property(retain, nonatomic) UIFont* font;
@property(retain, nonatomic) NSString* text;
+(id)segmentItemWithText:(id)text font:(id)font color:(id)color width:(float)width alignment:(int)alignment;
+(id)segmentItemWithText:(id)text font:(id)font color:(id)color width:(float)width;
+(id)segmentItemWithText:(id)text font:(id)font color:(id)color;
+(id)segmentItemWithSpace:(float)space;
-(id).cxx_construct;
-(void)dealloc;
@end
