/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class PublicBillsInputType, NSArray, NSMutableArray, NSString;

@interface PublicBillsCompany : XXUnknownSuperclass {
	NSString* _companyName;
	NSString* _companyTip;
	int _chargeModel;
	PublicBillsInputType* _chargeInputType;
	NSArray* _inputInfos;
	NSArray* _inputInfos1;
	NSString* _status;
	NSString* __attention;
@private
	NSString* _attention;
	int _chargeQueryMode;
	NSString* _companyShortName;
	NSMutableArray* _inputInfosConfirm;
}
@property(retain, nonatomic) NSMutableArray* inputInfosConfirm;
@property(retain, nonatomic) NSString* companyShortName;
@property(assign, nonatomic) int chargeQueryMode;
@property(retain, nonatomic) NSString* attention;
@property(retain, nonatomic) NSString* status;
@property(assign, nonatomic) int chargeModel;
@property(retain, nonatomic) PublicBillsInputType* chargeInputType;
@property(retain, nonatomic) NSArray* inputInfos1;
@property(retain, nonatomic) NSArray* inputInfos;
@property(retain, nonatomic) NSString* companyTip;
@property(retain, nonatomic) NSString* companyName;
-(void)dealloc;
-(id)init;
@end

