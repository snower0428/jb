//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class DBQuota, NSString;

__attribute__((visibility("hidden")))
@interface DBAccountInfo : NSObject <NSCoding>
{
    NSString *country;
    NSString *displayName;
    DBQuota *quota;
    NSString *userId;
    NSString *referralLink;
}

@property(readonly, nonatomic) NSString *referralLink; // @synthesize referralLink;
@property(readonly, nonatomic) NSString *userId; // @synthesize userId;
@property(readonly, nonatomic) DBQuota *quota; // @synthesize quota;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName;
@property(readonly, nonatomic) NSString *country; // @synthesize country;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;

@end

