//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface BaiduMobAdDeviceUnmutableInfoObj : NSObject
{
    BOOL _isJailBroken;
    NSString *_NOP;
    NSString *_macAddress;
    NSString *_bundleIdentifier;
    NSString *_bundleVersion;
    NSString *_platform;
    NSString *_openUDID;
    struct CGSize _screenResolution;
}

@property(readonly, nonatomic) NSString *openUDID; // @synthesize openUDID=_openUDID;
@property(readonly, nonatomic) BOOL isJailBroken; // @synthesize isJailBroken=_isJailBroken;
@property(readonly, nonatomic) NSString *platform; // @synthesize platform=_platform;
@property(readonly, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, nonatomic) struct CGSize screenResolution; // @synthesize screenResolution=_screenResolution;
@property(readonly, nonatomic) NSString *macAddress; // @synthesize macAddress=_macAddress;
@property(readonly, nonatomic) NSString *NOP; // @synthesize NOP=_NOP;
- (void)dealloc;
- (id)init;

@end
