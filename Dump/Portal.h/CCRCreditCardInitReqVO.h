/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "CCRBaseReqVO.h"

@class NSString;

@interface CCRCreditCardInitReqVO : CCRBaseReqVO {
@private
	NSString* _bankAndCardBinVersion;
	int _pageNum;
	int _pageSize;
}
@property(assign, nonatomic) int pageSize;
@property(assign, nonatomic) int pageNum;
@property(retain, nonatomic) NSString* bankAndCardBinVersion;
-(void).cxx_destruct;
@end
