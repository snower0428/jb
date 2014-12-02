//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSDate, NSDictionary, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface GADRequest : NSObject <NSCopying>
{
    BOOL _testing;
    NSDictionary *_mediationExtras;
    NSArray *_testDevices;
    int _gender;
    NSDate *_birthday;
    NSMutableArray *_keywords;
    NSString *_contentURL;
}

+ (id)sdkVersion;
+ (id)alloc;
+ (id)request;
+ (id)extendedSDKVersionNumber;
+ (id)sdkVersionIdentifiers;
+ (id)sdkVersionMetadata;
@property(nonatomic, getter=isTesting) BOOL testing; // @synthesize testing=_testing;
@property(copy, nonatomic) NSString *contentURL; // @synthesize contentURL=_contentURL;
@property(retain, nonatomic) NSMutableArray *keywords; // @synthesize keywords=_keywords;
@property(retain, nonatomic) NSDate *birthday; // @synthesize birthday=_birthday;
@property(nonatomic) int gender; // @synthesize gender=_gender;
@property(copy, nonatomic) NSArray *testDevices; // @synthesize testDevices=_testDevices;
@property(copy, nonatomic) NSDictionary *mediationExtras; // @synthesize mediationExtras=_mediationExtras;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)tagForChildDirectedTreatment:(BOOL)arg1;
- (void)removeAdNetworkExtrasFor:(Class)arg1;
- (id)adNetworkExtrasFor:(Class)arg1;
- (void)registerAdNetworkExtras:(id)arg1;
@property(copy, nonatomic) NSDictionary *additionalParameters;
- (void)addKeyword:(id)arg1;
- (void)setLocationWithDescription:(id)arg1;
- (void)setLocationWithLatitude:(float)arg1 longitude:(float)arg2 accuracy:(float)arg3;
- (void)setBirthdayWithMonth:(int)arg1 day:(int)arg2 year:(int)arg3;

@end

