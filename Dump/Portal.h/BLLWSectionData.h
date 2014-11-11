/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BLLWData.h"

@class BLLWTextData, BLLWImageData;

@interface BLLWSectionData : BLLWData {
@private
	BLLWImageData* _line;
	BLLWTextData* _centerText;
}
@property(retain, nonatomic) BLLWTextData* centerText;
@property(retain, nonatomic) BLLWImageData* line;
+(id)dataWithResponseData:(id)responseData userInfo:(id)info;
-(void).cxx_destruct;
-(id)initWithConfig:(id)config;
@end
