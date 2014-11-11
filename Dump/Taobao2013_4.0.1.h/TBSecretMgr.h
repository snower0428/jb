//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TBSecretMgr : NSObject
{
    int _environmentID;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
@property int environmentID; // @synthesize environmentID=_environmentID;
- (oneway void)release;
- (id)autorelease;
- (unsigned int)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)secBodyData:(id)arg1;
- (BOOL)isJailbroken;
- (BOOL)checkMethodSecurity:(id)arg1 SELName:(id)arg2;
- (id)decrypt:(id)arg1;
- (id)encrypt:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (id)objectForkey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)getTopSignWithParam:(id)arg1;
- (id)getTopTokenWithUser:(id)arg1 TimeStamp:(id)arg2;
- (id)getMtopSignWithParm:(id)arg1 Api:(id)arg2 Version:(id)arg3 Ecode:(id)arg4 Imei:(id)arg5 Imsi:(id)arg6 TimeStamp:(id)arg7;
- (id)getSecretParam:(id)arg1;
- (id)getAppKeyWithIos;
- (int)TBGetAPIEnvironment;
- (void)TBSetAPIEnvironment:(int)arg1;

@end

