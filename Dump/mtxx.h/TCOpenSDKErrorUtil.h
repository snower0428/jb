//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TCOpenSDKErrorUtil : NSObject
{
}

+ (id)apiResponseFromErrorCode:(int)arg1;
+ (id)apiResponse:(id)arg1;
+ (void)apiResponseConvert:(id)arg1;
+ (int)filterURLErrorCode:(int)arg1;
+ (id)openSDKErrorMsgForErrorCode:(int)arg1;
+ (id)openSDKErrorFromOSError:(id)arg1;
+ (id)openSDKErrorWithCommonServerCode:(int)arg1 extraInfo:(id)arg2;
+ (id)openSDKErrorWithCode:(int)arg1 extraInfo:(id)arg2;

@end

