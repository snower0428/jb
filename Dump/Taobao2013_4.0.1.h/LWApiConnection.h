//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface LWApiConnection : NSObject
{
    NSString *_userInfo;
    NSString *_sdkVersion;
}

@property(retain, nonatomic) NSString *sdkVersion; // @synthesize sdkVersion=_sdkVersion;
@property(retain, nonatomic) NSString *userInfo; // @synthesize userInfo=_userInfo;
- (void).cxx_destruct;
- (void)structure:(id)arg1;
- (id)parse;

@end
