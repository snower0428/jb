/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ALPFundScrollCellProtocol.h"
#import "ALPTextDelegate.h"
#import "Portal-Structs.h"
#import "ALPCell.h"

@class UIView, UIImageView, UILabel, NSString, ALPCountingLabel, UIGestureRecognizer;
@protocol ALPCellDidClick;

@interface ALPProfitViewCell : ALPCell <ALPFundScrollCellProtocol, ALPTextDelegate> {
	ALPCountingLabel* _lastProfitLabel;
	UIImageView* _imageView;
	UIImageView* _yyyImageView;
	UILabel* _titleLabel;
	UILabel* _yyyLabel;
	UIView* _yyyClickableZone;
	UIGestureRecognizer* _tapGesture;
	UIGestureRecognizer* _profitGesture;
@private
	NSString* _profitValue;
	id<ALPCellDidClick> _clickDelegate;
}
@property(assign, nonatomic) id<ALPCellDidClick> clickDelegate;
@property(retain, nonatomic) NSString* profitValue;
-(void).cxx_destruct;
-(void)cellStartToAppear:(id)appear;
-(void)cellFinishDisappear;
-(void)cellFinishAppear;
-(void)rollNumberDesc;
-(void)rollNumberAsc;
-(float)cellHeight;
-(void)drawRect:(CGRect)rect;
-(void)handleGesture:(id)gesture;
-(void)updateProfit:(id)profit displayYyyInfo:(BOOL)info;
-(void)initSubViews;
-(id)init;
@end

