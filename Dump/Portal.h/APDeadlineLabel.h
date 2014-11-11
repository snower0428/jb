/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "APLabel.h"

@class NSString, NSTimer;

@interface APDeadlineLabel : APLabel {
	int _seconds;
	NSTimer* _timer;
	NSString* _onFinishScript;
	NSString* _hint;
}
@property(retain, nonatomic) NSString* hint;
@property(retain, nonatomic) NSString* onFinishScript;
@property(retain, nonatomic) NSTimer* timer;
-(void)ctrl_value_set:(id)set;
-(id)ctrl_value_get;
-(void)handleTimer;
-(void)setText:(id)text;
-(id)format;
-(void)dealloc;
-(id)initWithNode:(id)node;
@end

