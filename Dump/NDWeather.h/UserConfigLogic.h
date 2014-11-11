//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface UserConfigLogic : NSObject
{
}

+ (void)setHasLaunchedInCurrentVersion;
+ (BOOL)isFirstLaunchInCurrentVersion;
+ (BOOL)getNDAWSettingWithType:(int)arg1;
+ (void)setNDAWSettingWithType:(int)arg1 withVaule:(int)arg2;
+ (id)getUserAccountLoginInfo;
+ (void)setRegisterUserAccount:(id)arg1;
+ (id)getRegisterUserAccount;
+ (void)setDefaultWeekFirstday:(int)arg1;
+ (void)setSXBackGroundSwitch:(BOOL)arg1;
+ (void)setFestivalShowSwitch:(int)arg1 withValue:(BOOL)arg2;
+ (void)setDefaultFestivalShow:(int)arg1;
+ (void)setDefaultStartPage:(int)arg1;
+ (void)setDefaultPMIndex:(int)arg1;
+ (void)setAutoUpdateCitySwitch:(int)arg1;
+ (void)setAutoUpdateCityNumber:(int)arg1;
+ (void)setAutoUpdateWeatherInterval:(int)arg1:(id)arg2;
+ (void)setAutoUpdateWeatherStarTime:(id)arg1 withEndTime:(id)arg2;
+ (BOOL)resetYunShiPeopleInfo;
+ (void)addYunShiPeopleInfo;
+ (void)updateYunShiPeopleInfo;
+ (void)initUserConfigConfiguration;

@end

