//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SubscribeConfigObject : NSObject
{
    BOOL _subscribe;
    NSString *_regType;
    NSString *_name;
    NSString *_resultCode;
    NSString *_resultMSG;
}

@property(retain, nonatomic) NSString *resultMSG; // @synthesize resultMSG=_resultMSG;
@property(retain, nonatomic) NSString *resultCode; // @synthesize resultCode=_resultCode;
@property(nonatomic) BOOL subscribe; // @synthesize subscribe=_subscribe;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *regType; // @synthesize regType=_regType;
- (void).cxx_destruct;

@end

