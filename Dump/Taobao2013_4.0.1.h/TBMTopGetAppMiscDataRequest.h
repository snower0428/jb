//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBMTOPRequest.h"

@class NSString;

@interface TBMTopGetAppMiscDataRequest : TBMTOPRequest
{
    NSString *_groupName;
    NSString *_key;
}

@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
- (void).cxx_destruct;
- (id)sendSynchronousRequest;
- (void)sendRequest;
- (id)init;

@end

