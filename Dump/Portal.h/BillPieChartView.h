/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "Portal-Structs.h"
#import "RotatedViewDelegate.h"

@class BillPieRotatedView, UIImageView, UILabel, UIButton;
@protocol PieChartDelegate;

@interface BillPieChartView : XXUnknownSuperclass <RotatedViewDelegate> {
@private
	BOOL _touchEnd;
	id<PieChartDelegate> _delegate;
	BillPieRotatedView* _rotatedView;
	UIButton* _centerBtn;
	UIImageView* _centerImageView;
	UILabel* _amountLabel;
	UILabel* _unitLabel;
	UILabel* _title;
}
@property(retain, nonatomic) UILabel* title;
@property(retain, nonatomic) UILabel* unitLabel;
@property(retain, nonatomic) UILabel* amountLabel;
@property(retain, nonatomic) UIImageView* centerImageView;
@property(retain, nonatomic) UIButton* centerBtn;
@property(retain, nonatomic) BillPieRotatedView* rotatedView;
@property(assign, nonatomic) BOOL touchEnd;
@property(assign, nonatomic) __weak id<PieChartDelegate> delegate;
-(void).cxx_destruct;
-(void)renderAnimateFinish:(id)finish;
-(void)renderAnimateBegin:(id)begin;
-(void)touchEnded;
-(void)selectedFinish:(id)finish index:(int)index percent:(float)percent;
-(void)reloadChart;
-(void)setAmountText:(id)text;
-(void)setTitleText:(id)text;
-(void)changeInOut:(id)anOut;
-(void)sortValueArr:(id)arr colorArr:(id)arr2;
-(id)initWithFrame:(CGRect)frame withValue:(id)value withColor:(id)color;
-(void)dealloc;
@end

