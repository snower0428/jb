//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSNumber, NSString;

@interface SAKUser : NSObject <NSCopying>
{
    NSNumber *_userID;
    NSString *_userName;
    NSString *_token;
    NSNumber *_avatarType;
    NSString *_avatarURLString;
    NSString *_email;
    NSString *_mobile;
    NSNumber *_appUser;
    NSNumber *_loginTimes;
    NSNumber *_balance;
    NSNumber *_points;
    NSNumber *_growthLevel;
    NSNumber *_exp;
    NSNumber *_realLevel;
    NSNumber *_needSetPassword;
    NSNumber *_hasPassword;
}

@property(nonatomic) NSNumber *hasPassword; // @synthesize hasPassword=_hasPassword;
@property(retain, nonatomic, getter=isNeedSetPassword) NSNumber *needSetPassword; // @synthesize needSetPassword=_needSetPassword;
@property(retain, nonatomic) NSNumber *realLevel; // @synthesize realLevel=_realLevel;
@property(retain, nonatomic) NSNumber *exp; // @synthesize exp=_exp;
@property(retain, nonatomic) NSNumber *growthLevel; // @synthesize growthLevel=_growthLevel;
@property(retain, nonatomic) NSNumber *points; // @synthesize points=_points;
@property(retain, nonatomic) NSNumber *balance; // @synthesize balance=_balance;
@property(retain, nonatomic) NSNumber *loginTimes; // @synthesize loginTimes=_loginTimes;
@property(retain, nonatomic) NSNumber *appUser; // @synthesize appUser=_appUser;
@property(retain, nonatomic) NSString *mobile; // @synthesize mobile=_mobile;
@property(retain, nonatomic) NSString *email; // @synthesize email=_email;
@property(retain, nonatomic) NSString *avatarURLString; // @synthesize avatarURLString=_avatarURLString;
@property(retain, nonatomic) NSNumber *avatarType; // @synthesize avatarType=_avatarType;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSNumber *userID; // @synthesize userID=_userID;
- (void).cxx_destruct;
- (BOOL)needUpgrade;
- (BOOL)isValid;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setUserInfo:(id)arg1;
- (id)toDictionary;
- (id)initWithDictionary:(id)arg1;

@end
