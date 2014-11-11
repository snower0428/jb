//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface UapAccountManager : NSObject
{
    CDUnknownBlockType manualLoginResult;
    CDUnknownBlockType uapAutoLoginResultSucess;
    CDUnknownBlockType uapAutoLoginResultFailed;
    BOOL isLogined;
}

+ (id)shareInstance;
@property(nonatomic) BOOL isLogined; // @synthesize isLogined;
- (id)getCurrentUserLoginInfo;
- (BOOL)isCurrentUserNeedShowUapLoginView;
- (BOOL)isCurrentUserLogined;
- (void)setCurrentUserName:(id)arg1;
- (id)getCurrentUserName;
- (void)uapAutoLoginWithAccount:(id)arg1 success:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
- (void)enterUapLoginView;
- (void)enterUapLoginView:(CDUnknownBlockType)arg1;
- (void)notificationProcessCenter:(id)arg1;
- (void)UapLoginDidFailToLoginWithError:(id)arg1;
- (void)UapLoginDidLoginWithResult:(id)arg1;
- (void)viewCtrlUapLogin:(id)arg1 didLoginWithResult:(id)arg2;
- (void)dealloc;
- (id)init;

@end
