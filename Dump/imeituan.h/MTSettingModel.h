//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTBaseModel.h"

@class MTAppCenter;

@interface MTSettingModel : MTBaseModel
{
    MTAppCenter *_appCenter;
}

@property(retain, nonatomic) MTAppCenter *appCenter; // @synthesize appCenter=_appCenter;
- (void).cxx_destruct;
- (void)uploadSettings:(id)arg1 finished:(CDUnknownBlockType)arg2;
- (void)uploadSettingWithRemindTime:(id)arg1 andRemindNewDealsDaily:(BOOL)arg2 andRemindEventNotifications:(BOOL)arg3 finished:(CDUnknownBlockType)arg4;
- (void)uploadSettingWithRemindTime:(id)arg1 andRemindNewDealsDaily:(BOOL)arg2 finished:(CDUnknownBlockType)arg3;

@end

