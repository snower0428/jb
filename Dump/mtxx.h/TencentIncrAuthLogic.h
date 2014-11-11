//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TencentLoginDelegate.h"

@class NSString, TencentOAuth;

@interface TencentIncrAuthLogic : NSObject <TencentLoginDelegate>
{
    TencentOAuth *_tencentOAuth;
    NSString *_reportAction;
}

@property(retain, nonatomic) NSString *reportAction; // @synthesize reportAction=_reportAction;
@property(nonatomic) TencentOAuth *tencentOAuth; // @synthesize tencentOAuth=_tencentOAuth;
- (void).cxx_destruct;
- (void)tencentDidNotNetWork;
- (void)tencentDidNotLogin:(BOOL)arg1;
- (void)tencentDidLogin;
- (id)initWithTencentOAuth:(id)arg1;

@end
