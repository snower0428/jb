/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BARCODEPRODRpcCommonResult.h"

@class NSDictionary, NSString;

@interface BARCODEPRODGoodsBuyRes : BARCODEPRODRpcCommonResult {
@private
	NSString* _tradeNo;
	NSString* _bizType;
	NSString* _subBizType;
	NSDictionary* _bizcontext;
}
@property(retain, nonatomic) NSDictionary* bizcontext;
@property(retain, nonatomic) NSString* subBizType;
@property(retain, nonatomic) NSString* bizType;
@property(retain, nonatomic) NSString* tradeNo;
+(Class)bizcontextElementClass;
-(void).cxx_destruct;
@end
