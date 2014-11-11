/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "APView.h"

@class UIProgressView, NSTimer, NSString;

@interface APProgressBar : APView {
	UIProgressView* _internalProgressView;
	int _type;
	double _maxValue;
	BOOL _isRepeat;
	NSString* _finishAdpter;
	NSTimer* _timer;
	NSTimer* _totalTimer;
@private
	int _style;
}
@property(copy, nonatomic) NSString* finishAdpter;
@property(assign, nonatomic) int style;
@property(assign, nonatomic) BOOL isRepeat;
@property(assign, nonatomic) double maxValue;
-(void)_progressDidFinished;
-(void)_progressDidProcess;
-(float)defaultHeight;
-(void)ctrl_visible_set:(id)set;
-(id)ctrl_value_get;
-(void)ctrl_value_set:(id)set;
-(void)removeFromSuperview;
-(void)layoutSubviews;
-(void)applicationDidBecomeActive:(id)application;
-(void)applicationWillResignActive:(id)application;
-(void)dealloc;
-(id)initWithNode:(id)node;
@end

