//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTCodingObject.h"

#import "MTRefundDetail.h"

@class NSArray, NSString;

@interface MTCodingRefundDetail : MTCodingObject <MTRefundDetail>
{
    NSArray *_certificates;
    NSString *_message;
    int _refundStatus;
    long long _refundID;
}

@property(nonatomic) int refundStatus; // @synthesize refundStatus=_refundStatus;
@property(nonatomic) long long refundID; // @synthesize refundID=_refundID;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSArray *certificates; // @synthesize certificates=_certificates;
- (void).cxx_destruct;
- (void)setWithDomainObject:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

