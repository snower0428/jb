//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface Nd3rdPlatformConfig : NSObject
{
    NSString *authorizeURL;
    NSString *callBackURL;
    NSString *backupURL;
}

@property(retain, nonatomic) NSString *backupURL; // @synthesize backupURL;
@property(retain, nonatomic) NSString *callBackURL; // @synthesize callBackURL;
@property(retain, nonatomic) NSString *authorizeURL; // @synthesize authorizeURL;
- (id)description;
- (id)stringForBackupUrlWith3rdPlatform:(int)arg1 thirdUserName:(id)arg2;
- (void)dealloc;

@end

