/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SABumpLauncher.h"


@interface SAScanLauncher : SABumpLauncher {
}
+(id)scanResultWithCodeInfo:(id)codeInfo;
+(id)scanResultWithCardInfo:(id)cardInfo CardImage:(id)image;
-(BOOL)isReturnUrlScheme;
-(void)didFind:(id)find;
-(void)notSupportHuoyanAction;
-(void)scanCardWithResult:(id)result CardImage:(id)image;
@end

