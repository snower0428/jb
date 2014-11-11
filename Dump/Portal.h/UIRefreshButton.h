/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Portal-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIActivityIndicatorView, UIImageView, UILabel;

@interface UIRefreshButton : XXUnknownSuperclass {
	UIActivityIndicatorView* _indicatorView;
	UIImageView* _refreshView;
	UILabel* _textLabel;
}
@property(readonly, assign, nonatomic) UILabel* textLabel;
@property(readonly, assign, nonatomic) UIActivityIndicatorView* indicatorView;
-(void)setRefreshStoppedWithError:(id)error;
-(void)setRefreshStarted;
-(void)didClicked:(id)clicked;
-(void)setHidden:(BOOL)hidden;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)frame;
@end
