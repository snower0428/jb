/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "TFBaseReqVO.h"

@class NSString;

@interface TFGetBankListReq : TFBaseReqVO {
@private
	NSString* _productName;
	NSString* _bankShortName;
}
@property(retain, nonatomic) NSString* bankShortName;
@property(retain, nonatomic) NSString* productName;
-(void).cxx_destruct;
@end
