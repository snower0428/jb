/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BLLWData.h"

@class BLLWTextData;

@interface BLLWSummaryDetailData : BLLWData {
@private
	BLLWTextData* _leftText;
	BLLWTextData* _rightText;
	BLLWTextData* _optionText;
}
@property(retain, nonatomic) BLLWTextData* optionText;
@property(retain, nonatomic) BLLWTextData* rightText;
@property(retain, nonatomic) BLLWTextData* leftText;
+(id)dataWithResponseData:(id)responseData userInfo:(id)info;
-(void).cxx_destruct;
-(id)initWithConfig:(id)config;
@end

