//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface TMJSBridge : NSObject
{
    int _publicCMD;
    NSArray *_params;
    NSString *_success;
    NSString *_fail;
}

@property(retain, nonatomic) NSString *fail; // @synthesize fail=_fail;
@property(retain, nonatomic) NSString *success; // @synthesize success=_success;
@property(retain, nonatomic) NSArray *params; // @synthesize params=_params;
@property(nonatomic) int publicCMD; // @synthesize publicCMD=_publicCMD;
- (void).cxx_destruct;
- (id)init;

@end
