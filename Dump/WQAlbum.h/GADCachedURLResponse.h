//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCachedURLResponse.h"

#import "NSCoding.h"

@class NSDate, NSURL;

@interface GADCachedURLResponse : NSCachedURLResponse <NSCoding>
{
    NSDate *expireDate_;
    NSURL *destinationURL_;
}

@property(retain, nonatomic) NSURL *destinationURL; // @synthesize destinationURL=destinationURL_;
@property(retain, nonatomic) NSDate *expireDate; // @synthesize expireDate=expireDate_;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

