//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TMOrderCheckOrderModel : NSObject
{
    NSString *_bizId;
    NSString *_payId;
    NSString *_payPhaseId;
}

@property(retain, nonatomic) NSString *payPhaseId; // @synthesize payPhaseId=_payPhaseId;
@property(retain, nonatomic) NSString *payId; // @synthesize payId=_payId;
@property(retain, nonatomic) NSString *bizId; // @synthesize bizId=_bizId;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end
