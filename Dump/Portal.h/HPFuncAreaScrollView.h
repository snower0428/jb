/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Portal-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIScrollView, UITableView;

@interface HPFuncAreaScrollView : XXUnknownSuperclass {
@private
	UIScrollView* _appCenterScrollView;
	UITableView* _publicPlatformTableView;
}
@property(assign, nonatomic) UITableView* publicPlatformTableView;
@property(assign, nonatomic) UIScrollView* appCenterScrollView;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
-(id)initWithFrame:(CGRect)frame;
@end
