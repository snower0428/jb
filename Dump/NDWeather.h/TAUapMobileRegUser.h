//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TAUapMobileRegUser : NSObject
{
    int appID;
    NSString *phone;
    NSString *nickName;
    NSString *userPwd;
    NSString *verifyCode;
}

@property(copy, nonatomic) NSString *verifyCode; // @synthesize verifyCode;
@property(nonatomic) int appID; // @synthesize appID;
@property(copy, nonatomic) NSString *userPwd; // @synthesize userPwd;
@property(copy, nonatomic) NSString *nickName; // @synthesize nickName;
@property(copy, nonatomic) NSString *phone; // @synthesize phone;
- (id)MakeCopy;
- (void)dealloc;
- (id)init;

@end
