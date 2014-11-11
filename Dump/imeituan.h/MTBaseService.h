//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MTCity, NSDate, SAKUser;

@interface MTBaseService : NSObject
{
    NSDate *_lastUpdateDate;
    SAKUser *_user;
    MTCity *_city;
    int _outdated;
    double _timeoutInterval;
}

@property(nonatomic, getter=isOutdated) int outdated; // @synthesize outdated=_outdated;
@property(nonatomic) double timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;
@property(readonly, nonatomic) NSDate *lastUpdateDate; // @synthesize lastUpdateDate=_lastUpdateDate;
- (void).cxx_destruct;
@property(retain, nonatomic) MTCity *city;
@property(retain, nonatomic) SAKUser *user;
- (void)didReceiveUserDidUpdateNotification;
- (void)didReceiveCityDidChangeNotification:(id)arg1;
- (void)didReceiveUserDidLoginNotification:(id)arg1;
- (void)didReceiveUserWillLogoutNotification:(id)arg1;
- (void)dealloc;
- (id)init;

@end

