/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UIBase.h"
#import "Portal-Structs.h"

@class UIScrollView, UIImageView;

@interface Blockfiled : UIBase {
@private
	UIImageView* imageView;
	UIScrollView* _scrollView;
	BOOL bScroll;
	BOOL bHeight;
	int _height;
	CGSize _size;
	CGSize _contentSize;
}
@property(assign, nonatomic) int height;
@property(assign, nonatomic) CGSize contentSize;
@property(assign, nonatomic) CGSize size;
-(void).cxx_destruct;
-(void)addSubview:(id)subview;
-(CGSize)calcSize;
-(void)layoutSubviews;
-(id)init:(CGSize)init withModel:(id)model;
@end
