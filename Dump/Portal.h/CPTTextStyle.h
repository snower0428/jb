/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSCoding.h"
#import "NSCopying.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "NSMutableCopying.h"
#import "Portal-Structs.h"

@class NSDictionary, NSString, CPTColor;

@interface CPTTextStyle : XXUnknownSuperclass <NSCoding, NSCopying, NSMutableCopying> {
	NSString* fontName;
	float fontSize;
	CPTColor* color;
	int textAlignment;
	int lineBreakMode;
}
@property(assign, nonatomic) int lineBreakMode;
@property(assign, nonatomic) int textAlignment;
@property(copy, nonatomic) CPTColor* color;
@property(assign, nonatomic) float fontSize;
@property(copy, nonatomic) NSString* fontName;
@property(readonly, assign, nonatomic) NSDictionary* attributes;
+(id)textStyle;
+(id)textStyleWithAttributes:(id)attributes;
-(id)mutableCopyWithZone:(NSZone*)zone;
-(id)copyWithZone:(NSZone*)zone;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(void)dealloc;
-(id)init;
@end

