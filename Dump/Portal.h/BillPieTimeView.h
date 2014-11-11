/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Portal-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIButton;

@interface BillPieTimeView : XXUnknownSuperclass {
@private
	UIButton* _leftButton;
	UIButton* _rightButton;
	UIButton* _midleButton;
	int _year;
	int _month;
	id _callBackTarget;
	SEL _leftCallBack;
	SEL _rightCallBack;
}
@property(assign, nonatomic) SEL rightCallBack;
@property(assign, nonatomic) SEL leftCallBack;
@property(assign, nonatomic) id callBackTarget;
@property(assign, nonatomic) int month;
@property(assign, nonatomic) int year;
@property(retain, nonatomic) UIButton* midleButton;
@property(retain, nonatomic) UIButton* rightButton;
@property(retain, nonatomic) UIButton* leftButton;
-(void).cxx_destruct;
-(void)doAnim;
-(void)setButtonStyle:(id)style setTitle:(id)title;
-(id)getNextMoth:(int)moth setMonth:(int)month;
-(id)getLastMonth:(int)month setMonth:(int)month2;
-(void)removeTipButton:(id)button;
-(void)addTipButton:(id)button;
-(void)createControls:(int)controls setMonth:(int)month;
-(id)initWithFrame:(CGRect)frame setTarget:(id)target setLeftClicked:(SEL)clicked setRightClicked:(SEL)clicked4 setYear:(int)year setMonth:(int)month;
@end

