//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NdCPServerOperation.h"

@class NSString;

@interface NdCPServerOperationVerifyAccountPassword : NdCPServerOperation
{
    NSString *userName;
    NSString *password;
    int resultCode;
}

@property(nonatomic) int resultCode; // @synthesize resultCode;
@property(retain, nonatomic) NSString *password; // @synthesize password;
@property(retain, nonatomic) NSString *userName; // @synthesize userName;
- (void)generateResponse:(id)arg1;
- (int)operation;
- (void)dealloc;
- (id)init;

@end
