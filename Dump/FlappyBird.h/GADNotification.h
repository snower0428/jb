//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface GADNotification : NSObject
{
    NSString *name_;
    NSDictionary *parameters_;
}

+ (id)notificationFromURL:(id)arg1;
+ (BOOL)isNotificationURL:(id)arg1;
@property(retain, nonatomic) NSDictionary *parameters; // @synthesize parameters=parameters_;
@property(retain, nonatomic) NSString *name; // @synthesize name=name_;
- (id)description;
- (void)dealloc;
- (id)initWithNotificationURL:(id)arg1;

@end
