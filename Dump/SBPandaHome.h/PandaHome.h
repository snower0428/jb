//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IPlugin.h"
#import "IPluginService.h"
#import "UIAlertViewDelegate.h"

@interface PandaHome : NSObject <IPlugin, IPluginService, UIAlertViewDelegate>
{
    id <IConfiguration> configure;
    id <IHookRegister> hookHandle;
    id <IMessage> msgHandle;
    _Bool _reloadSpringBoard;
    _Bool reloadSpringBoard;
}

+ (id)getMessageHandle;
+ (id)sharedInstance;
@property(nonatomic) _Bool reloadSpringBoard; // @synthesize reloadSpringBoard;
@property(retain) id <IMessage> msgHandle; // @synthesize msgHandle;
@property(retain) id <IHookRegister> hookHandle; // @synthesize hookHandle;
@property(retain) id <IConfiguration> configure; // @synthesize configure;
- (void)dealloc;
- (void)unload;
- (id)callService:(id)arg1 withNO:(long long)arg2;
- (void)applyGridklock;
- (void)turnOffChildMode:(id)arg1;
- (void)turnOnChildMode:(id)arg1;
- (void)promptApplyTheme:(id)arg1;
- (void)applyHiddenApp:(id)arg1;
- (void)applyThemeInfo:(id)arg1;
- (void)dismissInfo:(id)arg1;
- (id)showAlertView:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)setAppFrontFlag;
- (void)resetAppFrontFlag;
- (void)external;
- (id)fakeCarrierService;
- (id)launchApplication:(id)arg1;
- (id)launchSafari:(id)arg1;
- (id)serviceNO;
- (void)deactivate;
- (void)activate;
- (id)initWith:(id)arg1 msg:(id)arg2 configure:(id)arg3;

@end

