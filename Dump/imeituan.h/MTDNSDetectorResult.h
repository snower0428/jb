//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MTDNSDetectorResult : NSObject
{
    BOOL _isDNSOK;
    NSString *_host;
    NSString *_realIPAddress;
    NSString *_wrongIPAddress;
}

@property(retain, nonatomic) NSString *wrongIPAddress; // @synthesize wrongIPAddress=_wrongIPAddress;
@property(retain, nonatomic) NSString *realIPAddress; // @synthesize realIPAddress=_realIPAddress;
@property(retain, nonatomic) NSString *host; // @synthesize host=_host;
@property(nonatomic) BOOL isDNSOK; // @synthesize isDNSOK=_isDNSOK;
- (void).cxx_destruct;

@end

