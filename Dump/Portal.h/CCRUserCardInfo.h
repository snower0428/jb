/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "CCRBaseModel.h"

@class NSString;

@interface CCRUserCardInfo : CCRBaseModel {
@private
	BOOL _openedEmailBillQuery;
	BOOL _canDeduct;
	NSString* _cardId;
	NSString* _cardIndexNo;
	NSString* _tail;
	NSString* _holderName;
	NSString* _fastPay;
	NSString* _openedBillQuery;
	NSString* _remindDay;
	NSString* _remindStatus;
	NSString* _remindDayRemind;
	NSString* _remindDate;
	NSString* _deductId;
	NSString* _deductSignedDate;
	NSString* _deductMemo;
}
@property(retain, nonatomic) NSString* deductMemo;
@property(retain, nonatomic) NSString* deductSignedDate;
@property(assign, nonatomic) BOOL canDeduct;
@property(retain, nonatomic) NSString* deductId;
@property(retain, nonatomic) NSString* remindDate;
@property(retain, nonatomic) NSString* remindDayRemind;
@property(retain, nonatomic) NSString* remindStatus;
@property(retain, nonatomic) NSString* remindDay;
@property(assign, nonatomic) BOOL openedEmailBillQuery;
@property(retain, nonatomic) NSString* openedBillQuery;
@property(retain, nonatomic) NSString* fastPay;
@property(retain, nonatomic) NSString* holderName;
@property(retain, nonatomic) NSString* tail;
@property(retain, nonatomic) NSString* cardIndexNo;
@property(retain, nonatomic) NSString* cardId;
+(id)testData:(id)data;
-(void).cxx_destruct;
@end
