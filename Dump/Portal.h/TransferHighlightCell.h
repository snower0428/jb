/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Portal-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, NSString;

@interface TransferHighlightCell : XXUnknownSuperclass {
	int _cellType;
	NSString* _mainString;
	NSArray* _mainHighlightRanges;
	NSString* _subtitleString;
	NSArray* _subtitleHighlightRanges;
@private
	NSString* _subtitleLabel;
}
@property(retain, nonatomic) NSArray* subtitleHighlightRanges;
@property(retain, nonatomic) NSArray* mainHighlightRanges;
@property(copy, nonatomic) NSString* subtitleString;
@property(copy, nonatomic) NSString* mainString;
-(void)drawRect:(CGRect)rect;
-(void)_drawAttributedString:(id)string withContextRef:(CGContextRef)contextRef rect:(CGRect)rect;
-(id)attributedString:(id)string ranges:(id)ranges font:(id)font color:(id)color;
-(void)dealloc;
-(id)initWithHightStyle:(int)hightStyle reuseIdentifier:(id)identifier;
@end
