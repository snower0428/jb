//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface UMUFPCookieHelper : NSObject
{
}

+ (void)applayCookie:(id)arg1 value:(id)arg2 forKey:(id)arg3 andPath:(id)arg4 andUrl:(id)arg5 andLife:(int)arg6;
+ (void)applayCookie:(id)arg1 value:(id)arg2 forKey:(id)arg3 andLife:(int)arg4;
+ (void)applayTaobaoCookie:(id)arg1 forKey:(id)arg2 andLife:(int)arg3;
+ (void)deleteCookie;
+ (void)applyDefaultDomainsUTCookie;
+ (BOOL)checkCnaCookie;
+ (id)getCookieRequest;
+ (void)applyDefaultDomainsCnaCookie;
+ (id)currentTaobaoCookie;
+ (void)applyDefaultDomainsCookie;

@end

