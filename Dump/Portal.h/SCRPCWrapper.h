/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface SCRPCWrapper : XXUnknownSuperclass {
}
+(id)completeProfile_setPayPassword:(id)password callback:(id)callback;
+(id)completeProfile_verifySMSCheckCode:(id)code checkCode:(id)code2 callback:(id)callback;
+(id)completeProfile_requireDownwardSMS:(id)sms callback:(id)callback;
+(id)login_getMobileUserStatus:(id)status callback:(id)callback;
+(id)login_verifySMSCheckCode:(id)code checkCode:(id)code2 callback:(id)callback;
+(id)login_requireDownwardSMS:(id)sms callback:(id)callback;
+(id)loginWithLoginId:(id)loginId loginPassword:(id)password loginType:(unsigned)type externParams:(id)params verifyInfo:(id)info shouldInterceptException:(id)exception callback:(id)callback;
+(id)numPwd_enable:(id)enable shouldInterceptException:(id)exception callback:(id)callback;
+(id)numPwd_query:(id)query callback:(id)callback;
+(id)numPwd_disable:(id)disable callback:(id)callback;
+(id)numPwd_enable:(id)enable callback:(id)callback;
+(id)numPwd_idCardNoCheck:(id)check callback:(id)callback;
+(id)numPwd_preRequirementCheck:(id)check shouldInterceptException:(id)exception callback:(id)callback;
+(id)numPwd_preRequirementCheck:(id)check callback:(id)callback;
+(id)bindTaobao:(id)taobao callback:(id)callback;
+(id)queryTaobaoBinding:(id)binding callback:(id)callback;
+(id)nameIdentify_verify:(id)verify callback:(id)callback;
+(id)nameIdentify_check:(id)check callback:(id)callback;
@end

