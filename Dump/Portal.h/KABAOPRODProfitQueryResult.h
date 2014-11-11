/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "KABAOPRODKabaoCommonResult.h"

@class NSArray, NSString;

@interface KABAOPRODProfitQueryResult : KABAOPRODKabaoCommonResult {
@private
	NSString* _totalProfit;
	NSString* _minProfit;
	NSString* _maxProfit;
	NSString* _title;
	NSString* _maxContent;
	NSString* _minContent;
	NSArray* _profitList;
}
@property(retain, nonatomic) NSArray* profitList;
@property(retain, nonatomic) NSString* minContent;
@property(retain, nonatomic) NSString* maxContent;
@property(retain, nonatomic) NSString* title;
@property(retain, nonatomic) NSString* maxProfit;
@property(retain, nonatomic) NSString* minProfit;
@property(retain, nonatomic) NSString* totalProfit;
+(Class)profitListElementClass;
-(void).cxx_destruct;
@end

