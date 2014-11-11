//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TouchLabelDelegate.h"

@class NSString;

@interface TBCallManager : NSObject <TouchLabelDelegate>
{
    NSString *phoneNumber;
}

+ (_Bool)checkPhoneNumber:(id)arg1;
+ (id)sharedTBCallManager;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)makeCallFromLabel:(id)arg1;
- (void)makeCall:(id)arg1;
- (id)makeCallButton:(id)arg1 showRect:(struct CGRect)arg2;
- (void)labelTouched:(id)arg1;

@end
