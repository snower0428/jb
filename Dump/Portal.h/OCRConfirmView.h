/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Portal-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@protocol OCRConfirmViewDelegate;

@interface OCRConfirmView : XXUnknownSuperclass {
@private
	id<OCRConfirmViewDelegate> _delegate;
}
@property(assign, nonatomic) id<OCRConfirmViewDelegate> delegate;
-(void)cancelConfirm:(id)confirm;
-(void)confirmClick:(id)click;
-(void)setTipText:(id)text label:(id)label;
-(void)addShadow:(id)shadow oRect:(CGRect)rect string:(id)string;
-(void)UIBuilder:(id)builder frame:(CGRect)frame cardNum:(id)num position:(CGPoint)position;
-(id)initWithFrame:(CGRect)frame cardImage:(id)image cardNum:(id)num position:(CGPoint)position;
@end
