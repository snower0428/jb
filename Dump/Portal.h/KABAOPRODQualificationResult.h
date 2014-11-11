/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "KABAOPRODKabaoCommonResult.h"

@class NSString, NSArray;

@interface KABAOPRODQualificationResult : KABAOPRODKabaoCommonResult {
@private
	NSArray* _signMemos;
	NSString* _creditAmount;
	NSString* _billingDate;
	NSString* _repayDueDate;
	NSString* _agreementUrl;
}
@property(retain, nonatomic) NSString* agreementUrl;
@property(retain, nonatomic) NSString* repayDueDate;
@property(retain, nonatomic) NSString* billingDate;
@property(retain, nonatomic) NSString* creditAmount;
@property(retain, nonatomic) NSArray* signMemos;
+(Class)signMemosElementClass;
-(void).cxx_destruct;
@end
