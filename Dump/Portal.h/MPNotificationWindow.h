/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Portal-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, UIView;

@interface MPNotificationWindow : XXUnknownSuperclass {
@private
	NSMutableArray* _notificationQueue;
	UIView* _currentNotification;
}
@property(retain, nonatomic) UIView* currentNotification;
@property(retain, nonatomic) NSMutableArray* notificationQueue;
-(void).cxx_destruct;
-(void)rotateStatusBarWithFrame:(CGRect)frame;
-(void)rotateStatusBarAnimatedWithFrame:(CGRect)frame;
-(void)willRotateScreen:(id)screen;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
@end
