/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Portal-Structs.h"
#import "DTUIAlertView.h"
#import "UIAlertViewDelegate.h"

@class NSString;
@protocol BLAlertDelegate;

@interface BLAlertView : DTUIAlertView <UIAlertViewDelegate> {
@private
	NSString* _alertMark;
	id<BLAlertDelegate> _alDelegate;
}
@property(assign, nonatomic) __weak id<BLAlertDelegate> alDelegate;
@property(retain, nonatomic) NSString* alertMark;
-(void).cxx_destruct;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(id)initWithTitle:(id)title mark:(id)mark delegate:(id)delegate;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
@end

