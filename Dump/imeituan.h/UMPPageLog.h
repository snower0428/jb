//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface UMPPageLog : NSObject <NSCoding>
{
    NSString *start_millis;
    NSString *end_millis;
    NSString *page;
    NSString *tradeno;
}

@property(retain, nonatomic) NSString *tradeno; // @synthesize tradeno;
@property(retain, nonatomic) NSString *page; // @synthesize page;
@property(retain, nonatomic) NSString *end_millis; // @synthesize end_millis;
@property(retain, nonatomic) NSString *start_millis; // @synthesize start_millis;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

