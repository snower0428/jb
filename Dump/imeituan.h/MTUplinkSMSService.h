//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTBaseService.h"

@class MTCity, MTUplinkSMSModel;

@interface MTUplinkSMSService : MTBaseService
{
    MTUplinkSMSModel *_model;
    MTCity *_city;
}

@property(retain, nonatomic) MTCity *city; // @synthesize city=_city;
- (void).cxx_destruct;
- (void)saveLastIsNeedUplinkSMS:(int)arg1;
@property(readonly, nonatomic) int lastIsNeedUplinkSMS;
- (void)loadIsNeedUplinkSMS:(CDUnknownBlockType)arg1;
- (id)init;

@end
