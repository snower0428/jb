//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NdCPServerOperation.h"

@class NSArray;

@interface NdCPServerOperationGetBind3rdAccountList : NdCPServerOperation
{
    NSArray *accountList;
}

@property(retain, nonatomic) NSArray *accountList; // @synthesize accountList;
- (void)generateResponse:(id)arg1;
- (int)operation;
- (void)dealloc;
- (id)init;

@end
