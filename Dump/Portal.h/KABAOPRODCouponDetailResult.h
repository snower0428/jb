/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "KABAOPRODKabaoCommonResult.h"

@class KABAOPRODCouponInfo, NSDictionary;

@interface KABAOPRODCouponDetailResult : KABAOPRODKabaoCommonResult {
@private
	KABAOPRODCouponInfo* _couponInfo;
	NSDictionary* _contextMap;
}
@property(retain, nonatomic) NSDictionary* contextMap;
@property(retain, nonatomic) KABAOPRODCouponInfo* couponInfo;
+(Class)contextMapElementClass;
-(void).cxx_destruct;
@end
