//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface GCKApplicationMetadata : NSObject
{
    NSArray *_senderApplicationInfos;
    NSString *_applicationID;
    NSString *_applicationName;
    NSArray *_images;
    NSArray *_namespaces;
    NSString *_transportID;
    NSString *_sessionID;
    NSString *_statusText;
}

@property(readonly, nonatomic) NSString *statusText; // @synthesize statusText=_statusText;
@property(readonly, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(readonly, nonatomic) NSString *transportID; // @synthesize transportID=_transportID;
@property(readonly, nonatomic) NSArray *namespaces; // @synthesize namespaces=_namespaces;
@property(readonly, nonatomic) NSArray *images; // @synthesize images=_images;
@property(readonly, nonatomic) NSString *applicationName; // @synthesize applicationName=_applicationName;
@property(readonly, nonatomic) NSString *applicationID; // @synthesize applicationID=_applicationID;
- (void).cxx_destruct;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)senderApplicationInfo;
- (id)senderAppLaunchURL;
- (id)senderAppIdentifier;
- (id)init;
- (id)initWithJSONObject:(id)arg1;

@end

