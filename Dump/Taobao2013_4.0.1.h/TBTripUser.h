//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TBTripUser : NSObject
{
    NSString *_userName;
    NSString *_password;
    int _userId;
    NSString *_token;
    NSString *_autoToken;
    NSString *_topSession;
    NSString *_ecode;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)clearUserInfo;
- (BOOL)valid;
- (void)clearCheckCode;
- (void)clearTopSession;
- (void)clearAutoLoginInfo;
- (void)clearSession;
- (void)clearPersitense;
- (id)topSession;
- (void)setTopSession:(id)arg1;
- (id)autoToken;
- (void)setAutoToken:(id)arg1;
- (int)userId;
- (void)setUserId:(int)arg1;
- (id)token;
- (void)setToken:(id)arg1;
- (id)eCode;
- (void)setECode:(id)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)password;
- (void)setPassword:(id)arg1;
- (void)update;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

