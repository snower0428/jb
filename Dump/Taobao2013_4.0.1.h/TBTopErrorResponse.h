//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DOBase.h"

@class NSDictionary, NSString;

@interface TBTopErrorResponse : DOBase
{
    NSString *code;
    NSString *msg;
    NSString *sub_code;
    NSString *sub_msg;
    NSDictionary *args;
    NSDictionary *raw;
}

@property(retain, nonatomic) NSDictionary *raw; // @synthesize raw;
@property(retain, nonatomic) NSDictionary *args; // @synthesize args;
@property(retain, nonatomic) NSString *sub_msg; // @synthesize sub_msg;
@property(retain, nonatomic) NSString *sub_code; // @synthesize sub_code;
@property(retain, nonatomic) NSString *msg; // @synthesize msg;
@property(copy, nonatomic) NSString *code; // @synthesize code;
- (void)dealloc;

@end

