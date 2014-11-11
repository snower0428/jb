/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Portal-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, UIView, UIImageView;
@protocol kkStateViewDelegate;

@interface kkStateView : XXUnknownSuperclass {
@private
	UIImageView* _loadingView;
	NSMutableArray* _loadingImages;
	UIView* _backView;
	int _state;
	id<kkStateViewDelegate> _delegate;
}
@property(assign, nonatomic) id<kkStateViewDelegate> delegate;
@property(assign, nonatomic) int state;
+(id)sharedInstAll;
+(id)sharedInstSingle;
-(void)hideStateView;
-(void)showStateViewAll;
-(void)showStateViewSingleAtCenter:(CGPoint)center withSuperView:(id)superView;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)setState:(int)state complited:(id)complited;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame backView:(BOOL)view;
@end
