//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface JAEBizComm : NSObject
{
}

+ (BOOL)isNeedSafePopup:(id)arg1;
+ (BOOL)isCommModel;
+ (BOOL)isThirdModel;
+ (BOOL)isJaeModel;
+ (int)getWebviewModel;
+ (id)getModelAddress;
+ (void)setModelAddress:(id)arg1;
+ (void)setWebviewModel:(int)arg1;
+ (int)getUrlModel:(id)arg1;
+ (BOOL)checkIsInterceptUrl:(id)arg1;
+ (BOOL)checkIsAllowJsBrige:(id)arg1;
+ (BOOL)checkIsWVScheme:(id)arg1;
+ (BOOL)checkIsThirdAliDomain:(id)arg1;
+ (BOOL)checkOpenSafeNotice:(id)arg1 fromType:(id)arg2;
+ (BOOL)checkIsJaeDomain:(id)arg1;

@end

