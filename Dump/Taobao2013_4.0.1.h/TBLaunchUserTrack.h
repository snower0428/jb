//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate;

__attribute__((visibility("hidden")))
@interface TBLaunchUserTrack : NSObject
{
    BOOL _isTracking;
    NSDate *_launchBeginDate;
    NSDate *_didFinishLaunchBeginDate;
    NSDate *_didFinishLaunchEndDate;
    NSDate *_homeViewAppearDate;
    NSDate *_bootImageHideDate;
}

+ (id)sharedLaunchUserTrack;
@property(nonatomic) BOOL isTracking; // @synthesize isTracking=_isTracking;
@property(retain, nonatomic) NSDate *bootImageHideDate; // @synthesize bootImageHideDate=_bootImageHideDate;
@property(retain, nonatomic) NSDate *homeViewAppearDate; // @synthesize homeViewAppearDate=_homeViewAppearDate;
@property(retain, nonatomic) NSDate *didFinishLaunchEndDate; // @synthesize didFinishLaunchEndDate=_didFinishLaunchEndDate;
@property(retain, nonatomic) NSDate *didFinishLaunchBeginDate; // @synthesize didFinishLaunchBeginDate=_didFinishLaunchBeginDate;
@property(retain, nonatomic) NSDate *launchBeginDate; // @synthesize launchBeginDate=_launchBeginDate;
- (void).cxx_destruct;
- (void)giveupLauchTrackIfNeeded;
- (void)reset;
- (void)trytoRecordLaunch;
- (void)setHideBootImageDate:(id)arg1;

@end
