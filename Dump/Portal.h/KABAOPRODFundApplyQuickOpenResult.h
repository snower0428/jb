/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "KABAOPRODKabaoCommonResult.h"

@class NSString;

@interface KABAOPRODFundApplyQuickOpenResult : KABAOPRODKabaoCommonResult {
@private
	BOOL _needSmsCheck;
	NSString* _amount;
	NSString* _profitDate;
	NSString* _tairKey;
	NSString* _hiddenedMobile;
	NSString* _expressCacheKey;
	int _errJumpIndex;
}
@property(assign, nonatomic) int errJumpIndex;
@property(retain, nonatomic) NSString* expressCacheKey;
@property(retain, nonatomic) NSString* hiddenedMobile;
@property(retain, nonatomic) NSString* tairKey;
@property(assign, nonatomic) BOOL needSmsCheck;
@property(retain, nonatomic) NSString* profitDate;
@property(retain, nonatomic) NSString* amount;
-(void).cxx_destruct;
@end

