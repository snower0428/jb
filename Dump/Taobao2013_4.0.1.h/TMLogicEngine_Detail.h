//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TMLogicEngine.h"

@interface TMLogicEngine_Detail : TMLogicEngine
{
}

+ (id)sharedEngine;
- (id)requestSuccess:(id)arg1 withData:(id)arg2;
- (void)queryTmallDetailLocate:(long long)arg1 locationId:(long long)arg2 delegate:(id)arg3;
- (void)queryTmallDetail:(long long)arg1 delegate:(id)arg2;

@end
