/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "KABAOPRODKabaoCommonResult.h"

@class NSArray, NSString, KABAOPRODMobilePhoneInfo;

@interface KABAOPRODBillQueryResult : KABAOPRODKabaoCommonResult {
@private
	KABAOPRODMobilePhoneInfo* _mobilePhoneInfo;
	NSArray* _consumeBizItems;
	NSArray* _providerBizItems;
	NSString* _refreshTime;
}
@property(retain, nonatomic) NSString* refreshTime;
@property(retain, nonatomic) NSArray* providerBizItems;
@property(retain, nonatomic) NSArray* consumeBizItems;
@property(retain, nonatomic) KABAOPRODMobilePhoneInfo* mobilePhoneInfo;
+(Class)providerBizItemsElementClass;
+(Class)consumeBizItemsElementClass;
-(void).cxx_destruct;
@end

