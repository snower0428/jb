/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Portal-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, UIView, UILabel;

@interface APTokenField : XXUnknownSuperclass {
	UIView* _tokenBackgroundView;
	UILabel* _internalTokenLabel;
}
@property(retain, nonatomic) NSString* tokenValue;
-(void)layoutSubviews;
-(void)dealloc;
-(CGRect)editingRectForBounds:(CGRect)bounds;
-(id)initWithFrame:(CGRect)frame;
-(void)setFont:(id)font;
@end

