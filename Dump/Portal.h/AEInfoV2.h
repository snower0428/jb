/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AEInfo.h"

@class NSString, ABarcode, ADiscountInfo;

@interface AEInfoV2 : AEInfo {
@private
	NSString* logoText;
	NSString* headFields;
	NSString* primaryFields;
	NSString* secondaryFields;
	NSString* auxiliaryFields;
	NSString* backFields;
}
@property(retain, nonatomic) NSString* backFields;
@property(retain, nonatomic) NSString* auxiliaryFields;
@property(retain, nonatomic) NSString* secondaryFields;
@property(retain, nonatomic) NSString* primaryFields;
@property(retain, nonatomic) NSString* headFields;
@property(retain, nonatomic) NSString* logoText;
@property(retain, nonatomic) ADiscountInfo* discountInfo;
@property(retain, nonatomic) ABarcode* barcode;
-(void).cxx_destruct;
@end

