/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BaseOperation.h"

@class TradeDetail, NSString;

@interface QueryTradeDetailOperation : BaseOperation {
	NSString* _tradeNO;
	NSString* _bizType;
	TradeDetail* _tradeDetail;
}
@property(readonly, assign, nonatomic) TradeDetail* tradeDetail;
-(void)main;
-(void)dealloc;
-(id)initWithTradeInfo:(id)tradeInfo;
-(id)initWithTradeNO:(id)tradeNO bizType:(id)type;
-(id)initWithTradeNO:(id)tradeNO;
@end

