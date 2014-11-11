/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSTimer, UIView;

@interface ALPToastView : XXUnknownSuperclass {
@private
	int _iconType;
	NSTimer* _timer;
	UIView* _backgoundView;
	id _completion;
	int _suppressCount;
	double _second;
}
@property(assign, nonatomic) int suppressCount;
@property(copy, nonatomic) id completion;
@property(retain, nonatomic) UIView* backgoundView;
@property(retain, nonatomic) NSTimer* timer;
@property(assign, nonatomic) double second;
+(id)presentModelToastWithin:(id)within text:(id)text;
+(id)presentToastWithText:(id)text;
+(id)presentToastWithin:(id)within text:(id)text;
+(void)presentModalToastWithin:(id)within withIcon:(int)icon text:(id)text duration:(double)duration completion:(id)completion;
+(void)presentToastWithin:(id)within withIcon:(int)icon text:(id)text duration:(double)duration completion:(id)completion;
+(void)presentToastWithin:(id)within withIcon:(int)icon text:(id)text duration:(double)duration;
-(void).cxx_destruct;
-(void)dismissToast;
-(void)updateAllToastDisplay;
-(void)suppressRelatedToasts:(BOOL)toasts;
-(void)popFromStack;
-(void)pushToStack;
-(BOOL)relatedToToast:(id)toast;
-(void)showToast;
-(id)initWithText:(id)text toastType:(int)type;
@end
