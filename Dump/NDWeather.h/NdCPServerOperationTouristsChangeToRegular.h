//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NdCPServerOperation.h"

@class NSString;

@interface NdCPServerOperationTouristsChangeToRegular : NdCPServerOperation
{
    BOOL _rememberPassword;
    BOOL _autoLogin;
    NSString *userName;
    NSString *password;
    NSString *uin;
    NSString *nickName;
    NSString *payUserName;
    NSString *lastUpLoadContactTime;
    NSString *autoLoginSign;
    int maxUserCount;
    NSString *checkSum;
    BOOL isOwner;
    int resultCode;
}

@property(nonatomic) int resultCode; // @synthesize resultCode;
@property(nonatomic) BOOL isOwner; // @synthesize isOwner;
@property(retain, nonatomic) NSString *checkSum; // @synthesize checkSum;
@property(nonatomic) int maxUserCount; // @synthesize maxUserCount;
@property(retain, nonatomic) NSString *autoLoginSign; // @synthesize autoLoginSign;
@property(retain, nonatomic) NSString *lastUpLoadContactTime; // @synthesize lastUpLoadContactTime;
@property(retain, nonatomic) NSString *payUserName; // @synthesize payUserName;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName;
@property(retain, nonatomic) NSString *uin; // @synthesize uin;
@property(retain, nonatomic) NSString *password; // @synthesize password;
@property(retain, nonatomic) NSString *userName; // @synthesize userName;
@property(nonatomic) BOOL rememberPassword; // @synthesize rememberPassword=_rememberPassword;
@property(nonatomic) BOOL autoLogin; // @synthesize autoLogin=_autoLogin;
- (void)generateResponse:(id)arg1;
- (int)operation;
- (void)dealloc;
- (id)init;

@end
