//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSTimer, TPLCDView, UIImage;

@interface SBAwayInCallController : NSObject
{
    TPLCDView *_lcdView;
    BOOL _shouldShowInCallInfo;
    BOOL _isShowingInCallInfo;
    NSTimer *_durationTimer;
    struct __CTCall *_displayedCall;
    NSString *_localizedLabel;
    UIImage *_callerImage;
    BOOL _isFullScreen;
}

- (void)_setShowingInCallInfo:(BOOL)arg1;
- (BOOL)isShowingInCallInfo;
- (void)setShouldShowInCallInfo:(BOOL)arg1;
- (void)reload;
- (void)updateDuration;
- (void)fetchCallInformation:(id *)arg1 name:(id *)arg2 label:(id *)arg3 image:(id *)arg4 isFullScreen:(char *)arg5 wantsHighResolution:(BOOL)arg6;
- (BOOL)callerImageIsFullScreen;
- (id)callerImage;
- (void)dealloc;
- (id)initWithLCDView:(id)arg1;

@end
