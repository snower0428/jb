//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSError.h"

@interface GADRequestError : NSError
{
}

+ (id)errorWithCode:(int)arg1 request:(id)arg2 httpStatusCode:(int)arg3 customMessage:(id)arg4;
+ (id)errorWithCode:(int)arg1;
+ (id)errorWithCode:(int)arg1 customMessage:(id)arg2;
+ (id)errorWithCode:(int)arg1 request:(id)arg2 httpStatusCode:(int)arg3;
+ (id)errorWithCode:(int)arg1 request:(id)arg2;
+ (id)localizedStringForErrorCode:(int)arg1;
- (id)initWithCode:(int)arg1 request:(id)arg2 httpStatusCode:(int)arg3 customMessage:(id)arg4;

@end
