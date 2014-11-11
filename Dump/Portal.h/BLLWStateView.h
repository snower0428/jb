/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Portal-Structs.h"
#import "UIScrollViewDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, UIActivityIndicatorView, UILabel;
@protocol BLLWStateViewDelegate;

@interface BLLWStateView : XXUnknownSuperclass <UIScrollViewDelegate> {
@private
	id<BLLWStateViewDelegate> _delegate;
	int _state;
	NSString* _message;
	UILabel* _messageLabel;
	UIActivityIndicatorView* _indicatorView;
}
@property(assign, nonatomic) __weak UIActivityIndicatorView* indicatorView;
@property(assign, nonatomic) __weak UILabel* messageLabel;
@property(copy, nonatomic) NSString* message;
@property(assign, nonatomic) int state;
@property(assign, nonatomic) __weak id<BLLWStateViewDelegate> delegate;
-(void).cxx_destruct;
-(void)notifyBLLWStateViewDidTrigger;
-(void)scrollViewDidEndDragging:(id)scrollView willDecelerate:(BOOL)decelerate;
-(void)scrollViewDidScroll:(id)scrollView;
-(void)relayoutViews;
-(void)refreshView;
-(void)setCellState:(int)state Message:(id)message;
-(void)setCellState:(int)state;
-(id)defaultMessageWithState:(int)state;
-(id)initWithFrame:(CGRect)frame;
@end

