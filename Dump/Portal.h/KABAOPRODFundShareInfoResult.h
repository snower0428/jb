/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "KABAOPRODKabaoCommonResult.h"

@class KABAOPRODFundShareInfo, NSDictionary;

@interface KABAOPRODFundShareInfoResult : KABAOPRODKabaoCommonResult {
@private
	KABAOPRODFundShareInfo* _fundShareInfo;
	NSDictionary* _extraInfo;
}
@property(retain, nonatomic) NSDictionary* extraInfo;
@property(retain, nonatomic) KABAOPRODFundShareInfo* fundShareInfo;
+(Class)extraInfoElementClass;
-(void).cxx_destruct;
@end
