//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NdCPServerOperation.h"

@class NSString;

@interface NdCPServerOperation91Bind3rd : NdCPServerOperation
{
    int thirdPlfmId;
    NSString *token;
    NSString *oauthVersion;
    NSString *thirdUserName;
}

@property(retain, nonatomic) NSString *thirdUserName; // @synthesize thirdUserName;
@property(retain, nonatomic) NSString *oauthVersion; // @synthesize oauthVersion;
@property(retain, nonatomic) NSString *token; // @synthesize token;
@property(nonatomic) int thirdPlfmId; // @synthesize thirdPlfmId;
- (void)generateResponse:(id)arg1;
- (int)operation;
- (void)dealloc;

@end

