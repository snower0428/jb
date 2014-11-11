/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "APView.h"
#import "Portal-Structs.h"
#import "UIScrollViewDelegate.h"

@class APTouchScrollview, NSArray, NSMutableArray;

@interface APShowBox : APView <UIScrollViewDelegate> {
	APTouchScrollview* _scrollview;
	NSMutableArray* tikerDataArray;
	int selectedIndex;
	int ItemsCount;
	int _width;
	int _height;
	NSArray* _expsArray;
@private
	int itemsWidth;
	int scroll_offset;
}
@property(assign, nonatomic) int scroll_offset;
@property(assign, nonatomic) int ItemsCount;
@property(assign, nonatomic) int itemsWidth;
@property(retain, nonatomic) NSMutableArray* tikerDataArray;
-(void)scrollViewDidEndDecelerating:(id)scrollView;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)touchesCancelled:(id)cancelled withEvent:(id)event;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)_buttonImage:(id)image;
-(void)download:(id)download;
-(void)initData;
-(void)setFrame:(CGRect)frame;
-(id)initWithNode:(id)node;
-(void)setupScrollview;
-(void)dealloc;
@end

