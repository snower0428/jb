//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MBProgressHUDDelegate.h"

@class NSLock, NSMutableDictionary;

@interface ProgressHUDManager : NSObject <MBProgressHUDDelegate>
{
    NSMutableDictionary *_keyHuds;
    NSLock *_hudLock;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSLock *hudLock; // @synthesize hudLock=_hudLock;
@property(retain, nonatomic) NSMutableDictionary *keyHuds; // @synthesize keyHuds=_keyHuds;
- (void).cxx_destruct;
- (id)showNoScheduleListDataInView:(id)arg1 onTarget:(id)arg2 execute:(SEL)arg3 infoImage:(id)arg4 info:(id)arg5 nextButtonInfo:(id)arg6 group:(id)arg7;
- (id)showSuccessHubWithInfo:(id)arg1 detailInfo:(id)arg2 afterDelay:(int)arg3 group:(id)arg4;
- (id)showSuccessHubWithInfo:(id)arg1 afterDelay:(int)arg2 group:(id)arg3;
- (id)showSuccessHudInView:(id)arg1 info:(id)arg2 detailInfo:(id)arg3 afterDelay:(int)arg4 group:(id)arg5;
- (id)showSuccessHudInView:(id)arg1 info:(id)arg2 afterDelay:(int)arg3 group:(id)arg4;
- (id)showInfoHubWithInfo:(id)arg1 onTarget:(id)arg2 execute:(SEL)arg3 group:(id)arg4 resultInfo:(BOOL)arg5;
- (void)hidingHudWithGroup:(id)arg1;
- (id)showWithOutAutoHideCustomHubInView:(id)arg1 customView:(id)arg2 onTarget:(id)arg3 execute:(SEL)arg4 withObject:(id)arg5 group:(id)arg6;
- (id)showCustomHubInView:(id)arg1 customView:(id)arg2 onTarget:(id)arg3 execute:(SEL)arg4 withObject:(id)arg5 group:(id)arg6;
- (void)launchExecution:(id)arg1;
- (id)showInfoHubInView:(id)arg1 info:(id)arg2 onTarget:(id)arg3 execute:(SEL)arg4 group:(id)arg5 resultInfo:(BOOL)arg6;
- (id)showInfoHubWithInfo:(id)arg1 afterDelay:(int)arg2 group:(id)arg3;
- (id)showInfoHudInView:(id)arg1 info:(id)arg2 afterDelay:(int)arg3 group:(id)arg4;
- (void)hudWasHidden:(id)arg1;
- (void)dealloc;

@end
