//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface GCKSenderApplicationInfo : NSObject <NSCopying>
{
    int _platform;
    NSString *_appIdentifier;
    NSURL *_launchURL;
}

@property(readonly, nonatomic) NSURL *launchURL; // @synthesize launchURL=_launchURL;
@property(readonly, nonatomic) NSString *appIdentifier; // @synthesize appIdentifier=_appIdentifier;
@property(readonly, nonatomic) int platform; // @synthesize platform=_platform;
- (void).cxx_destruct;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithJSONObject:(id)arg1;
- (id)initWithPlatform:(int)arg1 appIdentifier:(id)arg2 launchURL:(id)arg3;

@end

