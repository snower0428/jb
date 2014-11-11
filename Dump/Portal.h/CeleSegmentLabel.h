/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Portal-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray;

@interface CeleSegmentLabel : XXUnknownSuperclass {
	NSArray* _items;
	BOOL _highlighted;
	float _lineWidth;
	float _lineHeight;
	int _baseAlignment;
}
@property(assign, nonatomic) int baseAlignment;
@property(readonly, assign, nonatomic) unsigned lineCount;
@property(readonly, assign, nonatomic) float lineHeight;
@property(readonly, assign, nonatomic) float lineWidth;
@property(assign, nonatomic) BOOL highlighted;
@property(retain, nonatomic) NSArray* items;
-(void)drawRect:(CGRect)rect;
-(float)drawText:(id)text atPoint:(CGPoint)point font:(id)font right:(float)right width:(float)width alignment:(int)alignment;
-(void)sizeToFit;
-(CGSize)contentSizeForWidth:(float)width;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end
