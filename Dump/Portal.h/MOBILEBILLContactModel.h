/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSDate, MOBILEBILLBillModel, MOBILEBILLRecordModel, MOBILEBILLStatistModel;

@interface MOBILEBILLContactModel : XXUnknownSuperclass {
@private
	NSString* _contactDataType;
	MOBILEBILLBillModel* _billModel;
	MOBILEBILLRecordModel* _recordModel;
	MOBILEBILLStatistModel* _statistModel;
	NSDate* _gmtCreate;
}
@property(retain, nonatomic) NSDate* gmtCreate;
@property(retain, nonatomic) MOBILEBILLStatistModel* statistModel;
@property(retain, nonatomic) MOBILEBILLRecordModel* recordModel;
@property(retain, nonatomic) MOBILEBILLBillModel* billModel;
@property(retain, nonatomic) NSString* contactDataType;
-(void).cxx_destruct;
-(id)adapterDictionary;
@end

