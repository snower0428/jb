//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBSDKRequestModel.h"

@class TBQGTimeList;

__attribute__((visibility("hidden")))
@interface TBQGTimeRequestModel : TBSDKRequestModel
{
    TBQGTimeList *_timeList;
}

@property(retain, nonatomic) TBQGTimeList *timeList; // @synthesize timeList=_timeList;
- (void).cxx_destruct;
- (void)requestDidLoadFailed:(id)arg1;
- (void)requestDidFinishLoad:(id)arg1;
- (void)loadTimeInfo;

@end

