/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "CCRAccessibleViewDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, UIImageView;
@protocol CCACViewDelegate;

@interface CCACView : XXUnknownSuperclass <CCRAccessibleViewDelegate> {
@private
	id<CCACViewDelegate> _delegate;
	int _action;
	UIImageView* _accessoryImageView;
	id _data;
	NSString* _accessibilityDescription;
}
@property(retain, nonatomic) NSString* accessibilityDescription;
@property(assign, nonatomic) __weak id data;
@property(assign, nonatomic) __weak UIImageView* accessoryImageView;
@property(assign, nonatomic) int action;
@property(assign, nonatomic) __weak id<CCACViewDelegate> delegate;
-(void).cxx_destruct;
-(id)savedCard:(id)card;
-(void)refreshWithData:(id)data Layout:(id)layout Action:(int)action;
-(void)notifyCcacView:(id)view performAction:(int)action;
-(void)clickAction:(id)action;
-(id)init;
-(void)view:(id)view appendAccessibleDescription:(id)description;
-(id)accessibilityLabel;
-(BOOL)isAccessibilityElement;
-(void)appendAccessibilityDescription:(id)description;
-(void)resetAccessibleElement;
@end
