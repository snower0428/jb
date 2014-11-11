//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTBaseModel.h"

@class NSString;

@interface MTUUIDModel : MTBaseModel
{
    NSString *_macAddress;
    NSString *_IDFA;
    NSString *_clientType;
}

@property(retain, nonatomic) NSString *clientType; // @synthesize clientType=_clientType;
@property(retain, nonatomic) NSString *IDFA; // @synthesize IDFA=_IDFA;
@property(retain, nonatomic) NSString *macAddress; // @synthesize macAddress=_macAddress;
- (void).cxx_destruct;
- (void)registerUUID:(CDUnknownBlockType)arg1;
- (id)initWithIDFA:(id)arg1 clientType:(id)arg2;
- (id)initWithMac:(id)arg1 clientType:(id)arg2;

@end

