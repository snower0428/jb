/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "KABAOPRODKabaoCommonResult.h"

@class NSString;

@interface KABAOPRODPcreditSignResult : KABAOPRODKabaoCommonResult {
@private
	NSString* _creditAmount;
	NSString* _billingDate;
	NSString* _repayDueDate;
	NSString* _investOrgName;
}
@property(retain, nonatomic) NSString* investOrgName;
@property(retain, nonatomic) NSString* repayDueDate;
@property(retain, nonatomic) NSString* billingDate;
@property(retain, nonatomic) NSString* creditAmount;
-(void).cxx_destruct;
@end
