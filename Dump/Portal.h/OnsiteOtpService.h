/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "DTService.h"


@protocol OnsiteOtpService <DTService>
-(id)getOtp;
-(id)getOtpIndex;
-(void)invalidLocalOtp;
-(id)calculateNum;
-(void)generateOtp:(id)otp;
@end
