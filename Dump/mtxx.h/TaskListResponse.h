//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, NSURL;

@interface TaskListResponse : NSObject
{
    NSArray *thridpartyArray;
    NSURL *visitUrl;
    NSString *sequenceId;
    double detectInterval;
}

@property(readonly, nonatomic) double detectInterval; // @synthesize detectInterval;
@property(readonly, nonatomic) NSString *sequenceId; // @synthesize sequenceId;
- (id)description;
- (id)getVisitURL;
- (id)getThirdPartyClassNames;
- (BOOL)needVisitUrl;
- (BOOL)needDetectThirdparty;
- (id)initWith:(id)arg1;

@end
