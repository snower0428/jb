//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FlurryNetworkUtil : NSObject
{
}

+ (id)serverURL;
+ (void)setSecureTransportEnabled:(BOOL)arg1;
+ (void)setServerURL:(id)arg1;
+ (id)adLogServerUrl;
+ (void)setAdLogServerUrl:(id)arg1;
+ (id)adServerUrl;
+ (void)setAdServerUrl:(id)arg1;
+ (int)networkStatus;
+ (BOOL)isNetworkReachable;
+ (void)updateNetworkStatus:(id)arg1;
+ (void)initNetworkReachability;

@end
