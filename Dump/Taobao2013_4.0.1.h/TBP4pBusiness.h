//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface TBP4pBusiness : NSObject
{
    NSString *_clickId;
    NSString *_aliTrackId;
}

+ (id)shared;
- (void).cxx_destruct;
- (void)endCpcUserTrackLogs:(id)arg1;
- (void)beginCpcUserTrackLogs;
- (void)sendDataToMTop:(id)arg1 cna:(id)arg2 e:(id)arg3;
- (id)click:(id)arg1 cna:(id)arg2 e:(id)arg3;

@end
