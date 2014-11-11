/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "KABAOPRODKabaoCommonResult.h"

@class NSArray, NSString;

@interface KABAOPRODProfitRateQueryResult : KABAOPRODKabaoCommonResult {
@private
	NSString* _monthAvgProfit;
	NSString* _minProfitRate;
	NSString* _maxProfitRate;
	NSString* _title;
	NSString* _maxProfitContent;
	NSString* _minProfitContent;
	NSArray* _profitRateList;
}
@property(retain, nonatomic) NSArray* profitRateList;
@property(retain, nonatomic) NSString* minProfitContent;
@property(retain, nonatomic) NSString* maxProfitContent;
@property(retain, nonatomic) NSString* title;
@property(retain, nonatomic) NSString* maxProfitRate;
@property(retain, nonatomic) NSString* minProfitRate;
@property(retain, nonatomic) NSString* monthAvgProfit;
+(Class)profitRateListElementClass;
-(void).cxx_destruct;
@end
