/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ALPFundScrollCellProtocol.h"
#import "ALPTextDelegate.h"
#import "ALPCell.h"

@class ALPCountingLabel, UILabel;

@interface ALPBeyondHumanCell : ALPCell <ALPFundScrollCellProtocol, ALPTextDelegate> {
	float _peoples;
	ALPCountingLabel* _peoplesLabel;
	UILabel* _renLabel;
	UILabel* _beyondLabel;
	UILabel* _subTitleLabel;
	UILabel* _staticLabel;
}
-(void).cxx_destruct;
-(void)cellStartToAppear:(id)appear;
-(void)cellFinishDisappear;
-(void)cellFinishAppear;
-(float)cellHeight;
-(id)formatNumber:(id)number number:(id)number2;
-(void)update:(id)update staticDate:(id)date locationCanFound:(BOOL)found;
-(id)init;
@end

