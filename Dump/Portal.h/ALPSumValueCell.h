/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ALPFundScrollCellProtocol.h"
#import "ALPTextDelegate.h"
#import "ALPCell.h"

@class NSString, ALPCountingLabel, UILabel;
@protocol ALPCellDidClick;

@interface ALPSumValueCell : ALPCell <ALPFundScrollCellProtocol, ALPTextDelegate> {
	UILabel* _titleLabel;
	ALPCountingLabel* _sumLabel;
@private
	id<ALPCellDidClick> _clickDelegate;
	NSString* _sumValue;
}
@property(retain, nonatomic) NSString* sumValue;
@property(assign, nonatomic) id<ALPCellDidClick> clickDelegate;
-(void).cxx_destruct;
-(void)cellFinishAppear;
-(void)cellFinishDisappear;
-(void)cellStartToAppear:(id)appear;
-(id)formatNumber:(id)number number:(id)number2;
-(void)rollNumberDesc;
-(void)rollNumberAsc;
-(float)cellHeight;
-(void)didClickCell;
-(id)init;
@end

