//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SAKAnalyticsBaseHeader.h"

@class NSNumber, NSString;

@interface SAKAnalyticsBaseHeader : NSObject <SAKAnalyticsBaseHeader>
{
    NSString *appType;
    NSString *appChannel;
    NSString *appSubChannel;
    NSString *uuid;
    NSString *userID;
    NSString *city;
    NSNumber *cityID;
    NSString *launchChannel;
    NSString *pushID;
}

@property(retain, nonatomic) NSString *pushID; // @synthesize pushID;
@property(retain, nonatomic) NSString *launchChannel; // @synthesize launchChannel;
@property(retain, nonatomic) NSNumber *cityID; // @synthesize cityID;
@property(retain, nonatomic) NSString *city; // @synthesize city;
@property(retain, nonatomic) NSString *userID; // @synthesize userID;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid;
@property(retain, nonatomic) NSString *appSubChannel; // @synthesize appSubChannel;
@property(retain, nonatomic) NSString *appChannel; // @synthesize appChannel;
@property(retain, nonatomic) NSString *appType; // @synthesize appType;
- (void).cxx_destruct;

@end
