/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "CCRBaseModel.h"

@class NSString;

@interface CCRBillChannel : CCRBaseModel {
@private
	NSString* _bankMark;
	NSString* _phone;
	int _phoneSwitch;
	NSString* _smsMobile;
	NSString* _smsUnicon;
	NSString* _smsTelecom;
	NSString* _smsTemplate;
	int _smsSwitch;
}
@property(assign, nonatomic) int smsSwitch;
@property(retain, nonatomic) NSString* smsTemplate;
@property(retain, nonatomic) NSString* smsTelecom;
@property(retain, nonatomic) NSString* smsUnicon;
@property(retain, nonatomic) NSString* smsMobile;
@property(assign, nonatomic) int phoneSwitch;
@property(retain, nonatomic) NSString* phone;
@property(retain, nonatomic) NSString* bankMark;
+(id)testData:(id)data;
-(void).cxx_destruct;
@end
