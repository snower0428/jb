/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Portal-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIImage;

@interface HPPageControl : XXUnknownSuperclass {
	int _numberOfPages;
@private
	UIImage* imagePageStateHighlightedFace;
	UIImage* imagePageStateNormalFace;
	UIImage* imagePageStateNormal;
	UIImage* imagePageStateHighlighted;
	int _currentPage;
}
@property(assign, nonatomic) int currentPage;
@property(assign, nonatomic) int numberOfPages;
-(void).cxx_destruct;
-(void)doUpdate;
-(id)initWithFrame:(CGRect)frame;
@end
