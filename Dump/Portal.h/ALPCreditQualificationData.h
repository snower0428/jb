/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, NSString;

@interface ALPCreditQualificationData : XXUnknownSuperclass {
@private
	NSString* agreementUrl;
	NSString* billingDate;
	NSString* predictCreditAmount;
	NSString* repayDueDate;
	NSArray* signMemos;
}
@property(retain, nonatomic) NSString* agreementUrl;
@property(retain, nonatomic) NSString* repayDueDate;
@property(retain, nonatomic) NSString* billingDate;
@property(retain, nonatomic) NSString* predictCreditAmount;
@property(retain, nonatomic) NSArray* signMemos;
-(void).cxx_destruct;
-(void)applyData:(id)data;
@end
