//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIAlertViewDelegate.h"

@interface MPFindPwd : NSObject <UIAlertViewDelegate>
{
    CDUnknownBlockType _pwdBlk;
}

@property(nonatomic) CDUnknownBlockType pwdBlk; // @synthesize pwdBlk=_pwdBlk;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)openFindPwd:(id)arg1;
- (BOOL)findPasswordFromAlipay:(id)arg1 pwdType:(int)arg2 notify:(CDUnknownBlockType)arg3;
- (void)setViewHidden:(BOOL)arg1;
- (void)findPwdInd:(id)arg1;
- (void)dealloc;
- (id)init;

@end

